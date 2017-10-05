/* $Id: cfg_end.h,v 3.2 1995/11/17 18:42:47 hampton Exp $
 * $Source: /swtal/cherf.111/ios/sys/parser/cfg_end.h,v $
 *------------------------------------------------------------------
 * C F G _ E N D . H
 *
 * end	- exit configuration mode 
 *
 * Copyright (c) 1992-1994 by cisco Systems, Inc.
 * All Rights Reserved
 *------------------------------------------------------------------
 * $Log: cfg_end.h,v $
 * Revision 3.2  1995/11/17  18:42:47  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.1  1995/11/09  12:50:05  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 * Revision 2.1  1995/06/07  22:02:53  hampton
 * Bump version numbers from 1.x to 2.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

/***************************************************************
 * end
 *
 * exits from config mode
 */

EOLS	(act_end_configure, exit_config_command, CMD_END);

KEYWORD	(end_configure, act_end_configure, ALTERNATE, "end",
	 "Exit from configure mode", PRIV_MIN);

#undef	ALTERNATE
#define	ALTERNATE	end_configure
