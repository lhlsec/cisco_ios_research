/* $Id: exec_debug_ethernet.h,v 3.2 1995/11/17 09:27:12 hampton Exp $
 * $Source: /swtal/cherf.111/ios/sys/if/exec_debug_ethernet.h,v $
 *------------------------------------------------------------------
 * E X E C _ D E B U G _ E T H E R N E T . H
 *
 * Copyright (c) 1992-1995 by cisco Systems, Inc.
 * All Rights Reserved
 *------------------------------------------------------------------
 * $Log: exec_debug_ethernet.h,v $
 * Revision 3.2  1995/11/17  09:27:12  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.1  1995/11/09  11:49:11  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 * Revision 2.1  1995/07/02  10:53:21  tli
 * CSCdi36508:  Rationalize parser file placement, part I
 * Rationalize os, hes, les, if, and ibm.
 *
 * Revision 2.2  1995/06/19  14:47:59  widmer
 * CSCdi36074:  Clean up debug parse chain alternates
 * Add keyword_debug macro to assign debug array
 *
 * Revision 2.1  1995/06/07  22:18:26  hampton
 * Bump version numbers from 1.x to 2.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */


/******************************************************************
 * debug ethernet_interface
 *
 */
EOLS	(debug_ethernet_interface_eol, debug_command, DEBUG_ETHER);
KEYWORD_DEBUG(debug_ethernet_interface, debug_ethernet_interface_eol,
	      ALTERNATE,
	      OBJ(pdb,1), ether_debug_arr,
	      "ethernet-interface", "Ethernet network interface events",
	      PRIV_OPR);

#undef	ALTERNATE
#define	ALTERNATE	debug_ethernet_interface
