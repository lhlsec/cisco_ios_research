/* $Id: csu_dsu_debug.c,v 3.2.2.1 1996/07/25 09:50:51 snyder Exp $
 * $Source: /release/112/cvs/Xsys/les/csu_dsu_debug.c,v $
 *------------------------------------------------------------------
 * csu_dsu_debug.c -- Debugging routines for General
 *		      service-module (CSU/DSU)	
 *
 * March 1996, Johnny Chan
 *
 * Copyright (c) 1996 by cisco Systems, Inc.
 * All rights reserved.
 *
 *------------------------------------------------------------------
 * $Log: csu_dsu_debug.c,v $
 * Revision 3.2.2.1  1996/07/25  09:50:51  snyder
 * CSCdi63981:  eliminate unused code, fix bugs, make a common routine
 *              1. create a routine call generic_debug_all and
 *                 make most debugs use it
 *              2. eliminate if (*_debug_inited) return, most never set
 *              the var
 *                 to TRUE making the code useless.
 *              3. declare some constant arrays const
 *              4. fix bugs found along the way
 *              5. save 2768 bytes from image, 660 out of data section
 * Branch: California_branch
 *
 * Revision 3.2  1996/03/29  03:49:34  sagarwal
 * CSCdi46172:  Add Boa support to 11.1 mainline
 *
 * Revision 3.1  1996/03/28  20:06:13  sagarwal
 * Placeholder files for 2500 Derivative with integrated CSU/DSU
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

#include "master.h"
#include "sys_registry.h"
#include "../ui/debug.h"
#include "csu_dsu_debug.h"

/* Declare the initialized text for the debugging array */
#define __DECLARE_DEBUG_ARR__
#include "csu_dsu_debug_flags.h"

/*
 * csu_dsu_debug_all is registered to be called whenever anybody issues
 * a "debug all" or "undebug all" command... or whenever you want to
 * set the state of all the Ethernet debug flags at once. The argument is
 * TRUE for "debug all", FALSE for "undebug all".
 */

void csu_dsu_debug_all (boolean flag)
{
    generic_debug_all(csu_dsu_debug_arr, flag);
}

/*
 * csu_dsu_debug_show is called to display the values of all the Ethernet
 * debugging variables.
 */

void csu_dsu_debug_show (void)
{
    debug_show_flags(&(csu_dsu_debug_arr[0]), "Service module");
}

/*
 * csu_dsu_debug_init is called at service-module subsystem startup. It registers
 * the routines to maintain and display the service-module debug flags, and
 * makes sure the flags are set to the appropriate values depending on
 * whcsu_dsu "debug all" is in effect when service-module is started.
 */

void csu_dsu_debug_init (void)
{

    /* Register for "debug all" and "show debug" events. A Real Programmer
     * would be prepared to do something with the error code returned
     * from registry_add_list. Oh, well...
     */
    reg_add_debug_all(csu_dsu_debug_all, "csu_dsu_debug_all");
    reg_add_debug_show(csu_dsu_debug_show, "csu_dsu_debug_show");

    /* Make sure the debug flags are right at startup. If "debug all"
     * is in effect when service-module is initialized, we want to turn on
     * all the service-module debugging right now.
     */
    csu_dsu_debug_all(debug_all_p());
}
