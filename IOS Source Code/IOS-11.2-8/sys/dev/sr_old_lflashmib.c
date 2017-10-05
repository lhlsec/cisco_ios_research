/* $Id: sr_old_lflashmib.c,v 3.10.12.4 1996/07/03 20:41:00 thille Exp $
 * $Source: /release/112/cvs/Xsys/dev/sr_old_lflashmib.c,v $
 *------------------------------------------------------------------
 * SNMP/SNMPv2 bi-lingual agent code.
 *
 * May 1994, Chifei W. Cheng (via the SNMP Research MIB Compiler)
 *
 * Copyright (c) 1994-1997 by cisco Systems, Inc.
 * All rights reserved.
 *
 *------------------------------------------------------------------
 * $Log: sr_old_lflashmib.c,v $
 * Revision 3.10.12.4  1996/07/03  20:41:00  thille
 * CSCdi61860: Implement Jeffs glass of slim-fast for snmp
 * Branch: California_branch
 * Take hunk of common code from many mib files, make it a procedure in
 * snmp_util.c and call it from the mibs.  Save 1640 bytes.
 *
 * Revision 3.10.12.3  1996/07/01  18:44:10  hampton
 * Remove gratuitous casting.  [CSCdi61655]
 * Branch: California_branch
 *
 * Revision 3.10.12.2  1996/04/19  17:57:08  jjohnson
 * CSCdi55117:  Need to support the Draft Standard SNMPv2 SMI
 * Branch: California_branch
 * Prototypes for the <foo>_free functions are auto-generated by the
 * SR 14.0 MIB Compiler.  Make the declarations match the prototypes.
 *
 * Revision 3.10.12.1  1996/03/18  19:13:08  gstovall
 * Branch: California_branch
 * Elvis has left the building.  He headed out to California, and took the
 * port ready changes with him.
 *
 * Revision 3.8.2.3  1996/03/16  06:34:30  gstovall
 * Branch: DeadKingOnAThrone_branch
 * Make the king aware of V111_1_3.
 *
 * Revision 3.8.2.2  1996/03/07  08:43:39  mdb
 * Branch: DeadKingOnAThrone_branch
 * cisco and ANSI/POSIX libraries.
 *
 * Revision 3.8.2.1  1996/02/20  00:44:55  dstine
 * Branch: DeadKingOnAThrone_branch
 *         Sync from DeadKingOnAThrone_baseline_960122 to
 *                   DeadKingOnAThrone_baseline_960213
 *
 * Revision 3.10  1996/02/15  20:28:26  bstewart
 * CSCdi48325:  SNMP MIBs need modularized translation tables
 *
 * Revision 3.9  1996/01/24  20:13:06  jenny
 * CSCdi47046:  TCP/IP need code clean up (part 3)
 * . removed ip/tuba.c, ip/tuba_default.c and ip/tuba.h
 * . removed all includes for ip/tuba.h.
 * . removed more TUBA related code.
 *
 * Revision 3.8  1996/01/18  21:52:43  mdb
 * CSCdi47065:  misuse of NULL macro in IOS sources
 *
 * Revision 3.7  1996/01/18  15:44:51  anke
 * CSCdi46969:  Change empty req and/or seq strings in SUBSYS_HEADERs to
 *              NULL
 *              Five bytes saved is five bytes earned
 *
 * Revision 3.6  1996/01/11  02:23:35  jenny
 * CSCdi46513:  TCP/IP need code clean up (part 2)
 * changed registry function ip_tuba_move_address to inline
 * ip_copy_address().
 *
 * Revision 3.5  1996/01/09  22:50:22  jjohnson
 * CSCdi46623:  old flash mib discrepancies
 * Make the mib consistent with the 10.0 monolithic version
 *
 * Revision 3.4  1995/12/14  08:23:11  jjohnson
 * CSCdi44148:  rationalize snmp library services
 *
 * Revision 3.3  1995/11/17  09:01:50  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.2  1995/11/16  23:15:52  gstovall
 * Ladies and gentlemen, I introduce to you, the port ready commit.
 *
 * Revision 3.1  1995/11/09  11:21:10  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 * Revision 2.3  1995/06/28  09:23:23  smackie
 * Repair widespread subsystem header braindamage. (CSCdi23568)
 *
 *   o Fix subsystem entry points to be foo(subsystype *) not foo(void)
 *   o Repair nonsensical and redundant subsystem sequences
 *   o Use NULL where no property is required
 *
 * Revision 2.2  1995/06/09  13:00:08  hampton
 * Rename old scheduler calls to fit the new naming convention.
 * [CSCdi35514]
 *
 * Revision 2.1  1995/06/07 20:25:41  hampton
 * Bump version numbers from 1.x to 2.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

/*
 *
 * Copyright (C) 1994 by SNMP Research, Incorporated.
 *
 * This software is furnished under a license and may be used and copied
 * only in accordance with the terms of such license and with the
 * inclusion of the above copyright notice. This software or any other
 * copies thereof may not be provided or otherwise made available to any
 * other person. No title to and ownership of the software is hereby
 * transferred.
 *
 * The information in this software is subject to change without notice
 * and should not be construed as a commitment by SNMP Research, Incorporated.
 *
 * Restricted Rights Legend:
 *  Use, duplication, or disclosure by the Government is subject to
 *  restrictions as set forth in subparagraph (c)(1)(ii) of the Rights
 *  in Technical Data and Computer Software clause at DFARS 52.227-7013
 *  and in similar clauses in the FAR and NASA FAR Supplement.
 *
 */

#include "master.h"
#include <ciscolib.h>
#include "subsys.h"
#include "interface_private.h"
#include "registry.h"
#include "../ip/ip.h"
#include "../ip/ip_registry.h"
#include "../snmp/snmp_api.h"
#include "../dev/snmp_flash_cmnds.h"
#include "../dev/sr_old_lflashmib.h"
#include "sr_old_lflashmib-mib.h"


unsigned long	erase_time, erasestatus,
		n2f_time,   n2fstatus,
		f2n_time,   f2nstatus;
boolean flashAvailable,		/* true if flash is not busy */
	watching_flash;		/* local semiphore for flash operations */


void
init_old_lflashmib (subsystype *subsys)
{
    if (snmp_flash_exist()) {
	erase_time = n2f_time = f2n_time = 0;
	erasestatus = n2fstatus = f2nstatus = FLASH_SUCCESS;
	flashAvailable = TRUE;
	watching_flash = FALSE;
	load_mib(old_lflashmib_OidList, old_lflashmib_OidListNum);
	load_oid(old_lflashmib_oid_table);
    }
}








/*---------------------------------------------------------------------
 * Retrieve data from the lflash family. This is
 * performed in 3 steps:
 *
 *   1) Test the validity of the object instance.
 *   2) Retrieve the data.
 *   3) Build the variable binding (VarBind) that will be returned.
 *---------------------------------------------------------------------*/
VarBind        *
lflash_get(
    OID            *incoming,
    ObjectInfo     *object,
    int             searchType,
    ContextInfo    *contextInfo,
    int             serialNum)
{
    int             arg;
    void           *dp;
    lflash_t       *data = NULL;


    arg = snmp_scalar_instance(incoming, object, searchType);

    /*
     * Retrieve the data from the kernel-specific routine.
     */
    if ((arg == -1) || (data = k_lflash_get(serialNum, contextInfo, arg)) == NULL) {
	arg = -1;
    }
    /*
     * Build the the variable binding for the variable that will be returned.
     */
    dp = NULL;

    switch (arg) {

#ifdef I_flashSize
      case I_flashSize:
	if (flashAvailable)
	    dp = &data->flashSize;
	break;
#endif				       /* I_flashSize */

#ifdef I_flashFree
      case I_flashFree:
	if (flashAvailable)
	    dp = &data->flashFree;
	break;
#endif				       /* I_flashFree */

#ifdef I_flashController
      case I_flashController:
	if (flashAvailable)
	    dp = MakeOctetString(data->flashController->octet_ptr, data->flashController->length);
	break;
#endif				       /* I_flashController */

#ifdef I_flashCard
      case I_flashCard:
	if (flashAvailable)
	    dp = MakeOctetString(data->flashCard->octet_ptr, data->flashCard->length);
	break;
#endif				       /* I_flashCard */

#ifdef I_flashVPP
      case I_flashVPP:
	if (flashAvailable)
	    dp = &data->flashVPP;
	break;
#endif				       /* I_flashVPP */

#ifdef I_flashEraseTime
      case I_flashEraseTime:
	dp = &data->flashEraseTime;
	break;
#endif				       /* I_flashEraseTime */

#ifdef I_flashEraseStatus
      case I_flashEraseStatus:
	dp = &data->flashEraseStatus;
	break;
#endif				       /* I_flashEraseStatus */

#ifdef I_flashToNetTime
      case I_flashToNetTime:
	dp = &data->flashToNetTime;
	break;
#endif				       /* I_flashToNetTime */

#ifdef I_flashToNetStatus
      case I_flashToNetStatus:
	dp = &data->flashToNetStatus;
	break;
#endif				       /* I_flashToNetStatus */

#ifdef I_netToFlashTime
      case I_netToFlashTime:
	dp = &data->netToFlashTime;
	break;
#endif				       /* I_netToFlashTime */

#ifdef I_netToFlashStatus
      case I_netToFlashStatus:
	dp = &data->netToFlashStatus;
	break;
#endif				       /* I_netToFlashStatus */

#ifdef I_flashStatus
      case I_flashStatus:
	dp = &data->flashStatus;
	break;
#endif				       /* I_flashStatus */

#ifdef I_flashEntries
      case I_flashEntries:
	if (flashAvailable)
	    dp = &data->flashEntries;
	break;
#endif				       /* I_flashEntries */

    }				       /* switch */
    if (dp != NULL)
	return (MakeVarBind(object, &ZeroOid, dp));
    else
	return ((VarBind *) NULL);

}

#ifdef SETS

/*----------------------------------------------------------------------
 * Free the lflash data object.
 *---------------------------------------------------------------------*/
void
lflash_free(
    lflash_t       *data)
{
    if (data != NULL) {
	if (data->flashToNet != NULL) {
	    FreeOctetString(data->flashToNet);
	}
	if (data->netToFlash != NULL) {
	    FreeOctetString(data->netToFlash);
	}
	free((char *) data);
    }
}

/*----------------------------------------------------------------------
 * cleanup after lflash set/undo
 *---------------------------------------------------------------------*/
static int
lflash_cleanup(
    doList_t       *trash)
{
    lflash_free(trash->data);
#ifdef SR_SNMPv2
    lflash_free(trash->undodata);
#endif				       /* SR_SNMPv2 */
    return NO_ERROR;
}

/*
 * temporary solution to support Set Req on flashToNet and netToFlash
 */
unsigned long	flash2netIPaddr, net2flashIPaddr;

/*---------------------------------------------------------------------
 * Determine if this SET request is valid. If so, add it to the do-list.
 * This operation is performed in 4 steps:
 *
 *   1) Validate the object instance.
 *   2) Locate a "related" do-list element, or create a new do-list
 *      element.
 *   3) Add the SET request to the selected do-list element.
 *   4) Finally, determine if the do-list element (all "related" set
 *      requests) is completely valid.
 *---------------------------------------------------------------------*/
int
lflash_test(
    OID            *incoming,
    ObjectInfo     *object,
    ObjectSyntax   *value,
    doList_t       *doHead,
    doList_t       *doCur,
    ContextInfo    *contextInfo)
{
    int             instLength = incoming->length - object->oid.length;
    doList_t       *dp;
    int             found;
    int             carry = 0;

    found = 0;
    if (!found) {
	dp = doCur;
	if ((dp->data = malloc(sizeof(lflash_t))) == NULL) {
	    DPRINTF((APALWAYS, "snmpd: Cannot allocate memory\n"));
	    return (RESOURCE_UNAVAILABLE_ERROR);
	}
	memset(dp->data, 0, sizeof(lflash_t));

	dp->setMethod = lflash_set;
	dp->cleanupMethod = lflash_cleanup;
#ifdef SR_SNMPv2
	dp->undoMethod = NULL;
#endif				       /* SR_SNMPv2 */
	dp->state = UNKNOWN;
    }

    switch (object->nominator) {

#ifdef I_flashErase
      case I_flashErase:
	/*
	 * Validate the object instance: 1) It must be of length 1  2) and the
	 * instance must be 0.
	 */
	if (instLength != 1 || incoming->oid_ptr[incoming->length - 1] != 0)
	    return (NO_CREATION_ERROR);
	SET_VALID(I_flashErase, ((lflash_t *) (dp->data))->valid);
	((lflash_t *) (dp->data))->flashErase = value->sl_value;
	break;
#endif				       /* I_flashErase */

#ifdef I_flashToNet
      case I_flashToNet:

        if (instLength != 4 || InstToIP(incoming, 0 + object->oid.length,
                                        &flash2netIPaddr, EXACT, &carry) < 0)
            return (NO_CREATION_ERROR);
        if (value->os_value->length > SYSSIZE)
            return (WRONG_LENGTH_ERROR);
        if (!IsDisplayString(value->os_value))
            return (WRONG_VALUE_ERROR);

	SET_VALID(I_flashToNet, ((lflash_t *) (dp->data))->valid);
	if (((lflash_t *) (dp->data))->flashToNet != NULL) {
	    FreeOctetString(((lflash_t *) (dp->data))->flashToNet);
	}
	((lflash_t *) (dp->data))->flashToNet =
	    MakeOctetString(value->os_value->octet_ptr, value->os_value->length);
	break;
#endif				       /* I_flashToNet */

#ifdef I_netToFlash
      case I_netToFlash:

        if (instLength != 4 || InstToIP(incoming, 0 + object->oid.length,
					&net2flashIPaddr, EXACT, &carry) < 0)
            return (NO_CREATION_ERROR);
        if (value->os_value->length > SYSSIZE)
            return (WRONG_LENGTH_ERROR);
        if (!IsDisplayString(value->os_value))
            return (WRONG_VALUE_ERROR);

	SET_VALID(I_netToFlash, ((lflash_t *) (dp->data))->valid);
	if (((lflash_t *) (dp->data))->netToFlash != NULL) {
	    FreeOctetString(((lflash_t *) (dp->data))->netToFlash);
	}
	((lflash_t *) (dp->data))->netToFlash =
	    MakeOctetString(value->os_value->octet_ptr, value->os_value->length);
	break;
#endif				       /* I_netToFlash */

      default:
	DPRINTF((APALWAYS, "snmpd: Internal error (invalid nominator in lflash_test)\n"));
	return (GEN_ERROR);

    }				       /* switch */
    dp->state = ADD_MODIFY;

    return (NO_ERROR);

}

/*---------------------------------------------------------------------
 * Perform the kernel-specific set function for this group of
 * related objects.
 *---------------------------------------------------------------------*/
int
lflash_set(
    doList_t       *doHead,
    doList_t       *doCur,
    ContextInfo    *contextInfo)
{
    return (k_lflash_set((lflash_t *) (doCur->data),
			 contextInfo, doCur->state));
}

#endif				       /* SETS */


/*---------------------------------------------------------------------
 * Retrieve data from the lflashFileDirEntry family. This is
 * performed in 3 steps:
 *
 *   1) Test the validity of the object instance.
 *   2) Retrieve the data.
 *   3) Build the variable binding (VarBind) that will be returned.
 *---------------------------------------------------------------------*/
VarBind        *
lflashFileDirEntry_get(
    OID            *incoming,
    ObjectInfo     *object,
    int             searchType,
    ContextInfo    *contextInfo,
    int             serialNum)
{
    int             instLength = incoming->length - object->oid.length;
    int             arg = object->nominator;
    void           *dp;
    lflashFileDirEntry_t *data = NULL;
    unsigned long   buffer[1];
    OID             inst;
    int             carry;
    long            flashEntries;


    /*
     * Check the object instance.
     * 
     * An EXACT search requires that the instance be of length 1
     * 
     * A NEXT search requires that the requested object does not
     * lexicographically precede the current object type.
     */

    if (searchType == EXACT) {
	if (instLength != 1) {
	    return ((VarBind *) NULL);
	}
	carry = 0;
    } else {
	carry = 1;
    }

    if ((InstToInt(incoming, 0 + object->oid.length, &flashEntries, searchType, &carry)) < 0) {
	arg = -1;
    }
    if (carry) {
	arg = -1;
    }
    /*
     * Retrieve the data from the kernel-specific routine.
     */
    if ((arg == -1) || (data = k_lflashFileDirEntry_get(serialNum, contextInfo, arg, searchType, flashEntries)) == NULL) {
	arg = -1;
    } else {
	/*
	 * Build instance information
	 */
	inst.oid_ptr = buffer;
	inst.length = 1;
	inst.oid_ptr[0] = data->flashEntries;
    }

    /*
     * Build the the variable binding for the variable that will be returned.
     */

    switch (arg) {

#ifdef I_flashDirName
      case I_flashDirName:
	 dp = MakeOctetString(data->flashDirName->octet_ptr, data->flashDirName->length);
	break;
#endif				       /* I_flashDirName */

#ifdef I_flashDirSize
      case I_flashDirSize:
	 dp = &data->flashDirSize;
	break;
#endif				       /* I_flashDirSize */

#ifdef I_flashDirStatus
      case I_flashDirStatus:
	 dp = &data->flashDirStatus;
	break;
#endif				       /* I_flashDirStatus */

      default:
	return ((VarBind *) NULL);
    }				       /* switch */

    return (MakeVarBind(object, &inst, dp));
}





lflash_t       *
k_lflash_get(
    int             serialNum,
    ContextInfo    *contextInfo,
    int             nominator)
{
    static lflash_t lflashData;
    static OctetString flashCtrlr, flashCard;
    unsigned char *fstring;

    if ((flashAvailable = snmp_flash_busy())) {	/* not busy */
	lflashData.flashSize = (long)snmp_flash_size();
	lflashData.flashFree = (long)snmp_flash_free();
	lflashData.flashController = &flashCtrlr;
	lflashData.flashController->octet_ptr = fstring = (unsigned char*)snmp_flash_ctlr();
	lflashData.flashController->length = (long)strlen((char *)fstring);
	lflashData.flashCard = &flashCard;
	lflashData.flashCard->octet_ptr = fstring = (unsigned char *)snmp_flash_card();
	lflashData.flashCard->length = (long)strlen((char *)fstring);
	lflashData.flashVPP = snmp_flash_vpp() ? 
		D_flashVPP_installed: D_flashVPP_missing;
	lflashData.flashEntries = (long)snmp_flash_filecnt();
    }
    lflashData.flashEraseTime = (unsigned long)erase_time;
    lflashData.flashEraseStatus = (long)erasestatus;
    lflashData.flashToNetTime = (unsigned long)f2n_time;
    lflashData.flashToNetStatus = (long)f2nstatus;
    lflashData.netToFlashTime = (unsigned long)n2f_time;
    lflashData.netToFlashStatus = (long)n2fstatus;
    lflashData.flashStatus = flashAvailable? SNMP_FLASH_READY : SNMP_FLASH_BUSY;

    return (&lflashData);
}


#ifdef SETS

struct watcher_struct {
    unsigned long	watching_for_whom;
    addrtype		address;
    char		*fname;
    unsigned long	dev;
} watcher_data;


#define ERASING 1
#define FLASHTONET 2
#define NETTOFLASH 3

static forktype flashwatcher (void)
{
    switch(watcher_data.watching_for_whom) {
    case ERASING:
	erasestatus = OP_IN_PROGRESS;
        erasestatus = snmp_flash_erase_all();
        erase_time = snmp_sysUpTime();
        break;
    case FLASHTONET:
	f2nstatus = OP_IN_PROGRESS;
        f2nstatus = snmp_flash2tftp(&watcher_data.address, watcher_data.fname);
        f2n_time = snmp_sysUpTime();
        break;
    case NETTOFLASH:
	n2fstatus = OP_IN_PROGRESS;
        n2fstatus = snmp_tftp2flash(&watcher_data.address, watcher_data.fname);
        n2f_time = snmp_sysUpTime();
        break;
    }
    if (watcher_data.fname)
	free(watcher_data.fname);
    watching_flash = FALSE;
    process_kill (-1);
}

static boolean start_watcher (unsigned long whom, addrtype *tftphost, char *filename)
{
    if (!watching_flash) {
        watching_flash = TRUE;
        watcher_data.watching_for_whom = whom;
	address_copy(&watcher_data.address, tftphost);
        watcher_data.fname = filename;
        if (cfork(flashwatcher, 0, 0, "Flash Watcher", 0) == -1) {
            if (filename)
		free(filename);
            watching_flash = FALSE;
	    return (FALSE);
	}
	return (TRUE);
    } else
	return (FALSE);
}


int
k_lflash_set(
    lflash_t       *data,
    ContextInfo    *contextInfo,
    int             function)
{
    char *filename;
    addrtype ipaddress;
    unsigned int size;

#ifdef I_flashErase
    if (VALID(I_flashErase, data->valid))
	if (snmp_flash_busy())
	    if (!start_watcher(ERASING, NULL, NULL)) {
		erasestatus = FLASH_OP_FAILURE;
		erase_time = snmp_sysUpTime();
	    }
	else {	/*flash busy*/
	    erasestatus = FLASH_OPEN_FAILURE;
	    erase_time = snmp_sysUpTime();
	}
#endif

#ifdef I_flashToNet
    if (VALID(I_flashToNet, data->valid)) {
	if (snmp_flash_busy()) {
	    size = data->flashToNet->length;
	    if ((filename = malloc(size + 1)) != NULL) {
        	bcopy(data->flashToNet->octet_ptr, filename, size);
        	filename[size] = '\0';
        	ip_copy_address(flash2netIPaddr, &ipaddress);
        	if (!start_watcher(FLASHTONET, &ipaddress, filename)) {
		    f2nstatus = FLASH_OP_FAILURE;
		    f2n_time = snmp_sysUpTime();
		}
	    } else {
        	f2nstatus = BUFFER_ALLOC_FAILURE;
        	f2n_time = snmp_sysUpTime();
	    }
	} else {	/*flash busy*/
	    f2nstatus = FLASH_OPEN_FAILURE;
	    f2n_time = snmp_sysUpTime();
	}
    }
#endif

#ifdef I_netToFlash
    if (VALID(I_netToFlash, data->valid)) {
	if (snmp_flash_busy()) {
	    size = data->netToFlash->length;
	    if ((filename = malloc(size + 1)) != NULL) {
		bcopy(data->netToFlash->octet_ptr, filename, size);
		filename[size] = '\0';
		ip_copy_address(net2flashIPaddr, &ipaddress);
		if (!start_watcher(NETTOFLASH, &ipaddress, filename)) {
		    n2fstatus = FLASH_OP_FAILURE;
		    n2f_time = snmp_sysUpTime();
		}
	    } else {
		n2fstatus = BUFFER_ALLOC_FAILURE;
		n2f_time = snmp_sysUpTime();
	    }
	} else {	/*flash busy*/
	    f2nstatus = FLASH_OPEN_FAILURE;
	    f2n_time = snmp_sysUpTime();
	}
    }
#endif

    return (NO_ERROR);
}

#endif				       /* SETS */



lflashFileDirEntry_t *
k_lflashFileDirEntry_get(
    int             serialNum,
    ContextInfo    *contextInfo,
    int             nominator,
    int             searchType,
    long            flashEntries)
{
    static lflashFileDirEntry_t lflashFileDirEntryData;
    static OctetString flashFilename;
    unsigned char *fdirString;
    unsigned int fdirIndex;

    fdirIndex = (searchType == NEXT && flashEntries == 0) ?
		1 : (unsigned int)flashEntries;
    if (snmp_flash_busy() && snmp_flash_filecnt() >= fdirIndex) {
	fdirIndex--;
	lflashFileDirEntryData.flashDirName = &flashFilename;
	lflashFileDirEntryData.flashDirName->octet_ptr = fdirString = 
			snmp_flash_dir_filename(fdirIndex);
	lflashFileDirEntryData.flashDirName->length = (long)strlen((char *)fdirString);
	lflashFileDirEntryData.flashDirSize = (long)snmp_flash_filesize(fdirIndex);
	lflashFileDirEntryData.flashDirStatus = 
			snmp_flash_filedeletestatus(fdirIndex) ?
			D_flashDirStatus_deleted : D_flashDirStatus_valid;
	lflashFileDirEntryData.flashEntries = fdirIndex + 1;
	return (&lflashFileDirEntryData);
    } else
	return (NULL);
}


/*
 * old_lflashmib subsystem header
 */

#define MAJVERSION_old_lflashmib 1
#define MINVERSION_old_lflashmib 0
#define EDITVERSION_old_lflashmib 0

SUBSYS_HEADER(flashmib,
              MAJVERSION_old_lflashmib,
              MINVERSION_old_lflashmib,
              EDITVERSION_old_lflashmib,
              init_old_lflashmib,
              SUBSYS_CLASS_MANAGEMENT,
              NULL,
              NULL);
      
