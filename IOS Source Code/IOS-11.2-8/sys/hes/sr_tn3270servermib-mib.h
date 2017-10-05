/* $Id: sr_tn3270servermib-mib.h,v 3.1.2.1 1996/07/15 07:19:26 bchan Exp $
 * $Source: /release/112/cvs/Xsys/hes/sr_tn3270servermib-mib.h,v $
 *------------------------------------------------------------------
 * SNMP/SNMPv2 bi-lingual agent code.
 *
 * July 1996, Barry Chan (via the SNMP Research MIB Compiler)
 *
 * Copyright (c) 1996 by cisco Systems, Inc.
 * All rights reserved.
 *
 *------------------------------------------------------------------
 * $Log: sr_tn3270servermib-mib.h,v $
 * Revision 3.1.2.1  1996/07/15  07:19:26  bchan
 * CSCdi62509:  Change tn3270 server mib
 * Branch: California_branch
 *
 * Revision 3.1  1996/07/12  02:39:37  bchan
 * *** empty log message ***
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

/*
 *
 * Copyright (C) 1992-1996 by SNMP Research, Incorporated.
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


/*
 * automatically generated by the mib compiler -- do not edit
 */

#ifndef SR_TN3270SERVERMIBMIB_H
#define SR_TN3270SERVERMIBMIB_H

/* SNMP-MIB translation table.  Subitem on left gets
 * translated into subitem on right.
 */

static const struct MIB_OID tn3270servermib_oid_table[] =
{
{    "ciscoTn3270ServerMIB",            "1.3.6.1.4.1.9.9.54",},
{    "tn3270sObjects",                  "1.3.6.1.4.1.9.9.54.1",},
{    "tn3270sGlobal",                   "1.3.6.1.4.1.9.9.54.1.1",},
{    "tn3270sStats",                    "1.3.6.1.4.1.9.9.54.1.2",},
{    "tn3270sPu",                       "1.3.6.1.4.1.9.9.54.1.3",},
{    "tn3270sIp",                       "1.3.6.1.4.1.9.9.54.1.4",},
{    "tn3270sLu",                       "1.3.6.1.4.1.9.9.54.1.5",},
{    "ciscoTn3270ServerMIBNotificationPrefix", "1.3.6.1.4.1.9.9.54.2",},
{    "ciscoTn3270ServerMIBConformance", "1.3.6.1.4.1.9.9.54.3",},
{    0, 0},
};



/* DO NOT PUT ANYTHING AFTER THIS #endif */
#endif /* SR_TN3270SERVERMIBMIB_H */
