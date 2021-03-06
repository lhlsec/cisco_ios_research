/* $Id: c7000_monlib_main.c,v 3.3 1996/03/09 01:18:45 hampton Exp $
 * $Source: /release/111/cvs/Xsys/filesys/c7000_monlib_main.c,v $
 *------------------------------------------------------------------
 * 7000 MONLIB start up code
 *
 * April 1995, Szewei Ju
 *
 * Copyright (c) 1995-1996 by cisco Systems, Inc.
 * All rights reserved.
 *------------------------------------------------------------------
 * $Log: c7000_monlib_main.c,v $
 * Revision 3.3  1996/03/09  01:18:45  hampton
 * Migrate processor specific files to src-xxx directories.  [CSCdi51128]
 *   Step 2: Update all files which reference the moved files to point to
 *   their new locations.
 *
 * Revision 3.2  1995/11/17  09:07:13  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.1  1995/11/09  11:31:11  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 * Revision 2.1  1995/06/07  20:31:45  hampton
 * Bump version numbers from 1.x to 2.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

#include "types.h"
#include "../src-68/gdb_68.h"
#include "../rommon/src/mon_boot.h"
#include "../rommon/src/monlib.h"

extern int global_print;
extern int global_print_level;
extern int global_print_mask;

/*
 * the monlib main() is defined in rommon_fslib_iface.c
 */
extern int main (int code, struct plb *plbp, struct pib *pibp);

#define MONLIB_SET_DEBUG_FLAG  		0x80000000
#define MONLIB_GLOBAL_PRINT		0x40000000
#define MONLIB_PRINT_FLAG		0x3FFFFFFF

/*
 * _start -- startup for MONLIB
 *
 */ 
int _start ( int debug_flag, struct plb *plbp, struct pib *pibp)
{
    if ( debug_flag & MONLIB_SET_DEBUG_FLAG) {
        global_print = (debug_flag & MONLIB_GLOBAL_PRINT ? TRUE : FALSE);
        global_print_level = debug_flag & MONLIB_PRINT_FLAG;
        global_print_mask  = MONLIB_PRINT_FLAG;
    } else {
        return( main( debug_flag, plbp, pibp));
    }
    return 0;
}

/*
 * __main
 * A call to this function is generated by versions of gcc 2.x to do
 * global C++ constructor initializations for mixed C and C++
 * programs. We do not need to worry about C++ code right now. This
 * avoids the need of having -lgcc used for gcc 2.x compiles.
 */
void __main()
{
}

