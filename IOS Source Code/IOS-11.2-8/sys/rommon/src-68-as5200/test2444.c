/* $Id: test2444.c,v 1.1.68.1 1996/06/16 21:19:03 vnguyen Exp $
 * $Source: /release/112/cvs/Xsys/rommon/src-68-as5200/test2444.c,v $
 *------------------------------------------------------------------
 * test2444.c -- Utility routines for Brasil serial EEPROM
 *
 * October 1995, Joe Turner
 *
 * Copyright (c) 1995-1996 by cisco Systems, Inc.
 * All rights reserved.
 *------------------------------------------------------------------
 * $Log: test2444.c,v $
 * Revision 1.1.68.1  1996/06/16  21:19:03  vnguyen
 * Finally committing Brasil to California_branch
 *
 * Revision 1.1  1995/12/03  21:18:47  jturner
 * Placeholder for Brasil.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

/*
 * Ported from Sierra to Brasil
 */

#include "monitor.h"
#include "mon_defs.h"
#include "nonvol_x2444.h"
#include "cookie.h"
#include "setjmp.h"
#include "signal_4k.h"
#include "error.h"
#include "proto.h"

void write_2444_data();
long x2444_delay;               /* wastetime count for delays in x2444_io() */
static SIG_PF sigsav;
static int cleanup();
static uchar save_array[32];
struct cookie cookie_data;
static char cookie_copy_valid;

/*
 *  Function: ck2444 -- diagnostic test of Xicor 2444 16X16 serial nvram
 *
 *  93/03/26  Dave Turner
 *
 *      A failure at any of the following test points results in 
 *      an error message and an immediate return.
 *
 *      Checks for presence of cookie prom instead of 2444.
 *      Writes one word to X2444 RAM (not EEPROM) and reads back.
 *      Reads all sixteen words from EEPROM and saves them;
 *      Writes a checkerboard pattern into EEPROM.
 *      Reads back the checkboard pattern and verifies it.
 *      Writes an inverse checkerboard pattern into nvram.
 *      Reads back the inverse checkerboard pattern and verifies it.
 *      Restores the saved contents of the nvram.
 *  Returns: 0 for no errors; 1 for readback failure; 2 for no X2444.
 *
 */

int 
ck2444(void)
{
    void write_2444_data (uchar *data_ptr); 
    void read_2444_data (uchar *data_ptr);
    ulong x2444_io (int cmd, int readbits, int writebits);

#define TEST_WORD1 0xaaaa
#define TEST_WORD2 0x5555

    char test_array[32];
    ushort i;
    int cycle;
    ushort v, test_pattern;
    SIG_PF localsav;

    testname("serial cookie");
    x2444_delay = timer_calibrate(50);  /* Set for x2444_io() */
    (void)x2444_io(X2444_CMD_RCL, 8, 0); /* Recall data into RAM */

    /* First, simply write one word to RAM @ 0x1, & test the readback */
    localsav = signal(SIGINT, SIG_IGN);  /* no interruptions */
    (void)x2444_io(X2444_CMD_WREN, 8, 0); /* Enable writing to RAM */
    (void)x2444_io(X2444_CMD_WRITE | (1*2) | (TEST_WORD1 << 8), 24, 0);
    (void)x2444_io(X2444_CMD_WRDS, 8, 0); /* Disable writing */
    signal(SIGINT, localsav);
    if ((v = (ushort)x2444_io(X2444_CMD_READ | (1*2), 8, 16)) != TEST_WORD1) {
	cterr('f',0,"failure on RAM readback, wrote %#x read %#x\n ... aborting\n",
	      TEST_WORD1, v);
	return(1);
    }
    
    /* Now proceed to read original contents of EEPROM */
    (void)x2444_io(X2444_CMD_RCL, 8, 0); /* Recall data into RAM */
    read_2444_data(save_array);
    
    /* protect against corrupt cookies */
    sigsav = signal(SIGINT, (SIG_PF)cleanup);
    /* Now write and readback two checkerboard patterns */
    test_pattern = TEST_WORD1;  /* for 1st cycle */
    for (cycle = 0; cycle < 2; cycle++) {
	/* Extend test_pattern word into test_array */
	for (i = 0; i < 16; i++)
	    *(ushort *)(test_array + 2*i) = test_pattern;
	
	write_2444_data((uchar *)test_array);
	if(hkeepflags & H_USRINT) {
	    /* User has hit break key */
	    cleanup();
	    default_break();  /* Take a longjmp to break from test */
	}
	
	/* Read back, comparing byte by byte with written string */
	(void)x2444_io(X2444_CMD_RCL, 8, 0); /* Recall data into RAM */
	for (i = 0; i < 16; i++)
	    if ((v = (ushort)x2444_io(X2444_CMD_READ | (i * 2), 8, 16)) !=
		*(ushort *)(test_array + 2*i) ) {
		cterr('f',0,"mismatch on test readback, wrote %#x read %#x\n ... aborting\n",
		      *(ushort *)(test_array + 2*i), v);
		return(1);
	    }
	test_pattern = TEST_WORD2;  /* for second cycle */
    } /* END checkboard cycle */
    
    cleanup();
    prcomplete(testpass, errcount, 0);
    
    return(0);

} /* END ck2444 */

static 
cleanup(void)
{
    write_2444_data(save_array);  /* Restore original data */
    signal(SIGINT,sigsav);
    return((int)SIG_DFL);
}


/*******************************************************************************
 * Function: read_2444_data
 *
 * The input to this function is a pointer to a 32-byte array, which the function
 * fills with the output from reading the 16X16 contents of the X2444 EEPROM.
 *
 *******************************************************************************/

void 
read_2444_data (uchar *data_ptr) 
{
    ushort *out_ptr;
    int     i;

    out_ptr = (ushort *)data_ptr;
    for (i = 0; i < 16; i++) {
	/* 16 bits per read starting at address zero */
	*out_ptr++ = (ushort)x2444_io(X2444_CMD_READ + (i * 2), 8, 16);
    }

} /* END read_2444_data */



/*******************************************************************************
 * Function: write_2444_data
 *
 * The input to this function is a pointer to a 32-byte array, which the function
 * writes to the 16X16 contents of the Xicor 2444 serial EEPROM.  The RECALL
 * command to the chip must precede any write or store of data into the EEPROM.
 *
 *******************************************************************************/

void 
write_2444_data (uchar *data_ptr) 
{
    ushort *word_ptr;
    int     i;


    (void)x2444_io(X2444_CMD_WREN, 8, 0); /* Enable writing */
    word_ptr = (ushort *)data_ptr;
    for (i = 0; i < 16; i++)
	(void)x2444_io(X2444_CMD_WRITE | (i * 2) | (*word_ptr++ << 8), 24, 0);

    (void)x2444_io(X2444_CMD_STO, 8, 0); /* Store data in EEPROM */
    (void)x2444_io(X2444_CMD_WRDS, 8, 0); /* Disable writing */

} /* END write_2444_data */

/*
 * x2444_io - Do I/O to the X2444
 *
 * This routine is used to pass a command to the X2444 and optionally
 * return a response.
 *
 * Data is read and written with the least significant bit first.
 */

ulong x2444_io (int cmd, int readbits, int writebits)
{
    int i;
    ulong value = 0;

    /*
     * Enable the X2444
     */

    X2444_PORT &= ~(X2444_SK | X2444_DI); /* Clear clock and data in */
    X2444_PORT |= X2444_CE;	/* Set chip enable */
    wastetime(x2444_delay);

    /*
     * Give the command to the X2444
     */

    for (i = 0; i < readbits; i++) {
	if (cmd & 0x1)
	  X2444_PORT |= X2444_DI; /* Set the data in bit */
	else
	  X2444_PORT &= ~X2444_DI; /* Clear the data in bit */
	wastetime(x2444_delay);
	X2444_PORT |= X2444_SK;	/* Set the clock bit */
	wastetime(x2444_delay);
	X2444_PORT &= ~X2444_SK; /* Reset the clock bit */
	wastetime(x2444_delay);
	cmd >>= 1;		/* Shift right one bit */
    }
    X2444_PORT |= X2444_DI;	/* Set data in bit */
    wastetime(x2444_delay);

    /*
     * Read the response from the X2444
     */

    for (i = 0; i < writebits; i++) {
	if (X2444_PORT & X2444_DO) /* If the data bit is set */
	  value |= (1 << i);	/* Set the appropriate value bit */
	X2444_PORT |= X2444_SK;	/* Set the clock bit */
	wastetime(x2444_delay);
	X2444_PORT &= ~X2444_SK; /* Clear the clock bit */
	wastetime(x2444_delay);
    }

    /*
     * Disable the X2444
     */

    X2444_PORT &= ~X2444_CE;	/* Clear chip enable */
    wastetime(x2444_delay);

    /*
     * We're done
     */
    return(value);		/* All done */
}

/*
** Convenient routines for the outside world.
** Actually read the cookie the first time called.
*/
struct cookie *
get_cookie(void)
{
    if(!cookie_copy_valid) {
        x2444_delay = timer_calibrate(50);  /* Set for x2444_io() */
	/* Now proceed to read contents of cookie EEPROM */
	(void)x2444_io(X2444_CMD_RCL, 8, 0); /* Recall data into RAM */
	read_2444_data((char *)&cookie_data);
	cookie_copy_valid = 1;
    }
    return(&cookie_data);
}

void
put_cookie(struct cookie *cptr)
{
    write_2444_data((uchar *)cptr);
    cookie_copy_valid = 0;          /* cookie has changed */
}
