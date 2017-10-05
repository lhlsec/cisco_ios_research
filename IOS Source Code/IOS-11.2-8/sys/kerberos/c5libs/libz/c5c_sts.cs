/* $Id: c5c_sts.cs,v 3.2 1995/11/17 17:45:14 hampton Exp $
 * $Source: /swtal/cherf.111/ios/sys/kerberos/c5libs/libz/c5c_sts.cs,v $
 *------------------------------------------------------------------
 * c5c_sts.cs - Automatically generated status messages for C5C
 *
 * September 1995, Che-lin Ho
 *
 * Copyright (c) 1995 by cisco Systems, Inc.
 * All rights reserved.
 *------------------------------------------------------------------
 * $Log: c5c_sts.cs,v $
 * Revision 3.2  1995/11/17  17:45:14  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.1  1995/11/09  12:19:15  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

/* Automatically generated Sat Mar 18 01:15:19 1995
 */

_csfSTSGX(CSFC5c_STS_KDCERR_NONE,"No error")
_csfSTSGX(CSFC5c_STS_KDCERR_NAME_EXP,"Client's entry in database has expired")
_csfSTSGX(CSFC5c_STS_KDCERR_SERVICE_EXP,"Server's entry in database has expired")
_csfSTSGX(CSFC5c_STS_KDCERR_BAD_PVNO,"Requested protocol version not supported")
_csfSTSGX(CSFC5c_STS_KDCERR_C_OLD_MAST_KVNO,"Client's key is encrypted in an old master key")
_csfSTSGX(CSFC5c_STS_KDCERR_S_OLD_MAST_KVNO,"Server's key is encrypted in an old master key")
_csfSTSGX(CSFC5c_STS_KDCERR_C_PRINCIPAL_UNKNOWN,"Client not found in Kerberos database")
_csfSTSGX(CSFC5c_STS_KDCERR_S_PRINCIPAL_UNKNOWN,"Server not found in Kerberos database")
_csfSTSGX(CSFC5c_STS_KDCERR_PRINCIPAL_NOT_UNIQUE,"Principal has multiple entries in Kerberos database")
_csfSTSGX(CSFC5c_STS_KDCERR_NULL_KEY,"Client or server has a null key")
_csfSTSGX(CSFC5c_STS_KDCERR_CANNOT_POSTDATE,"Ticket is ineligible for postdating")
_csfSTSGX(CSFC5c_STS_KDCERR_NEVER_VALID,"Requested effective lifetime is negative or too short")
_csfSTSGX(CSFC5c_STS_KDCERR_POLICY,"KDC policy rejects request")
_csfSTSGX(CSFC5c_STS_KDCERR_BADOPTION,"KDC can't fulfill requested option")
_csfSTSGX(CSFC5c_STS_KDCERR_ETYPE_NOSUPP,"KDC has no support for encryption type")
_csfSTSGX(CSFC5c_STS_KDCERR_SUMTYPE_NOSUPP,"KDC has no support for checksum type")
_csfSTSGX(CSFC5c_STS_KDCERR_PADATA_TYPE_NOSUPP,"KDC has no support for padata type")
_csfSTSGX(CSFC5c_STS_KDCERR_TRTYPE_NOSUPP,"KDC has no support for transited type")
_csfSTSGX(CSFC5c_STS_KDCERR_CLIENT_REVOKED,"Clients credentials have been revoked")
_csfSTSGX(CSFC5c_STS_KDCERR_SERVICE_REVOKED,"Credentials for server have been revoked")
_csfSTSGX(CSFC5c_STS_KDCERR_TGT_REVOKED,"TGT has been revoked")
_csfSTSGX(CSFC5c_STS_KDCERR_CLIENT_NOTYET,"Client not yet valid - try again later")
_csfSTSGX(CSFC5c_STS_KDCERR_SERVICE_NOTYET,"Server not yet valid - try again later")
_csfSTSGX(CSFC5c_STS_KDCERR_KEY_EXP,"Password has expired")
_csfSTSGX(CSFC5c_STS_KDCERR_PREAUTH_FAILED,"Preauthentication failed")
_csfSTSGX(CSFC5c_STS_KDCERR_PREAUTH_REQUIRED,"Preauthentication required")
_csfSTSGX(CSFC5c_STS_xxx_26,NULL)
_csfSTSGX(CSFC5c_STS_xxx_27,NULL)
_csfSTSGX(CSFC5c_STS_xxx_28,NULL)
_csfSTSGX(CSFC5c_STS_xxx_29,NULL)
_csfSTSGX(CSFC5c_STS_xxx_30,NULL)
_csfSTSGX(CSFC5c_STS_APERR_BAD_INTEGRITY,"Decrypt integrity check failed")
_csfSTSGX(CSFC5c_STS_APERR_TKT_EXPIRED,"Ticket expired")
_csfSTSGX(CSFC5c_STS_APERR_TKT_NYV,"Ticket not yet valid")
_csfSTSGX(CSFC5c_STS_APERR_REPEAT,"Request is a replay")
_csfSTSGX(CSFC5c_STS_APERR_NOT_US,"The ticket isn't for us")
_csfSTSGX(CSFC5c_STS_APERR_BADMATCH,"Ticket/authenticator don't match")
_csfSTSGX(CSFC5c_STS_APERR_SKEW,"Clock skew too great")
_csfSTSGX(CSFC5c_STS_APERR_BADADDR,"Incorrect net address")
_csfSTSGX(CSFC5c_STS_APERR_BADVERSION,"Protocol version mismatch")
_csfSTSGX(CSFC5c_STS_APERR_MSG_TYPE,"Invalid message type")
_csfSTSGX(CSFC5c_STS_APERR_MODIFIED,"Message stream modified")
_csfSTSGX(CSFC5c_STS_APERR_BADORDER,"Message out of order")
_csfSTSGX(CSFC5c_STS_xxx_43,NULL)
_csfSTSGX(CSFC5c_STS_APERR_BADKEYVER,"Key version is not available")
_csfSTSGX(CSFC5c_STS_APERR_NOKEY,"Service key not available")
_csfSTSGX(CSFC5c_STS_APERR_MUT_FAIL,"Mutual authentication failed")
_csfSTSGX(CSFC5c_STS_APERR_BADDIRECTION,"Incorrect message direction")
_csfSTSGX(CSFC5c_STS_APERR_METHOD,"Alternative authentication method required")
_csfSTSGX(CSFC5c_STS_APERR_BADSEQ,"Incorrect sequence number in message")
_csfSTSGX(CSFC5c_STS_APERR_INAPP_CKSUM,"Inappropriate type of checksum in message")
_csfSTSGX(CSFC5c_STS_xxx_51,NULL)
_csfSTSGX(CSFC5c_STS_xxx_52,NULL)
_csfSTSGX(CSFC5c_STS_xxx_53,NULL)
_csfSTSGX(CSFC5c_STS_xxx_54,NULL)
_csfSTSGX(CSFC5c_STS_xxx_55,NULL)
_csfSTSGX(CSFC5c_STS_xxx_56,NULL)
_csfSTSGX(CSFC5c_STS_xxx_57,NULL)
_csfSTSGX(CSFC5c_STS_xxx_58,NULL)
_csfSTSGX(CSFC5c_STS_xxx_59,NULL)
_csfSTSGX(CSFC5c_STS_ERR_GENERIC,"Generic error (see e-text)")
_csfSTSGX(CSFC5c_STS_ERR_FIELD_TOOLONG,"Field is too long for this implementation")
_csfSTSGX(CSFC5c_STS_xxx_62,NULL)
_csfSTSGX(CSFC5c_STS_xxx_63,NULL)
_csfSTSGX(CSFC5c_STS_xxx_64,NULL)
_csfSTSGX(CSFC5c_STS_xxx_65,NULL)
_csfSTSGX(CSFC5c_STS_xxx_66,NULL)
_csfSTSGX(CSFC5c_STS_xxx_67,NULL)
_csfSTSGX(CSFC5c_STS_xxx_68,NULL)
_csfSTSGX(CSFC5c_STS_xxx_69,NULL)
_csfSTSGX(CSFC5c_STS_xxx_70,NULL)
_csfSTSGX(CSFC5c_STS_xxx_71,NULL)
_csfSTSGX(CSFC5c_STS_xxx_72,NULL)
_csfSTSGX(CSFC5c_STS_xxx_73,NULL)
_csfSTSGX(CSFC5c_STS_xxx_74,NULL)
_csfSTSGX(CSFC5c_STS_xxx_75,NULL)
_csfSTSGX(CSFC5c_STS_xxx_76,NULL)
_csfSTSGX(CSFC5c_STS_xxx_77,NULL)
_csfSTSGX(CSFC5c_STS_xxx_78,NULL)
_csfSTSGX(CSFC5c_STS_xxx_79,NULL)
_csfSTSGX(CSFC5c_STS_xxx_80,NULL)
_csfSTSGX(CSFC5c_STS_xxx_81,NULL)
_csfSTSGX(CSFC5c_STS_xxx_82,NULL)
_csfSTSGX(CSFC5c_STS_xxx_83,NULL)
_csfSTSGX(CSFC5c_STS_xxx_84,NULL)
_csfSTSGX(CSFC5c_STS_xxx_85,NULL)
_csfSTSGX(CSFC5c_STS_xxx_86,NULL)
_csfSTSGX(CSFC5c_STS_xxx_87,NULL)
_csfSTSGX(CSFC5c_STS_xxx_88,NULL)
_csfSTSGX(CSFC5c_STS_xxx_89,NULL)
_csfSTSGX(CSFC5c_STS_xxx_90,NULL)
_csfSTSGX(CSFC5c_STS_xxx_91,NULL)
_csfSTSGX(CSFC5c_STS_xxx_92,NULL)
_csfSTSGX(CSFC5c_STS_xxx_93,NULL)
_csfSTSGX(CSFC5c_STS_xxx_94,NULL)
_csfSTSGX(CSFC5c_STS_xxx_95,NULL)
_csfSTSGX(CSFC5c_STS_xxx_96,NULL)
_csfSTSGX(CSFC5c_STS_xxx_97,NULL)
_csfSTSGX(CSFC5c_STS_xxx_98,NULL)
_csfSTSGX(CSFC5c_STS_xxx_99,NULL)
_csfSTSGX(CSFC5c_STS_xxx_100,NULL)
_csfSTSGX(CSFC5c_STS_xxx_101,NULL)
_csfSTSGX(CSFC5c_STS_xxx_102,NULL)
_csfSTSGX(CSFC5c_STS_xxx_103,NULL)
_csfSTSGX(CSFC5c_STS_xxx_104,NULL)
_csfSTSGX(CSFC5c_STS_xxx_105,NULL)
_csfSTSGX(CSFC5c_STS_xxx_106,NULL)
_csfSTSGX(CSFC5c_STS_xxx_107,NULL)
_csfSTSGX(CSFC5c_STS_xxx_108,NULL)
_csfSTSGX(CSFC5c_STS_xxx_109,NULL)
_csfSTSGX(CSFC5c_STS_xxx_110,NULL)
_csfSTSGX(CSFC5c_STS_xxx_111,NULL)
_csfSTSGX(CSFC5c_STS_xxx_112,NULL)
_csfSTSGX(CSFC5c_STS_xxx_113,NULL)
_csfSTSGX(CSFC5c_STS_xxx_114,NULL)
_csfSTSGX(CSFC5c_STS_xxx_115,NULL)
_csfSTSGX(CSFC5c_STS_xxx_116,NULL)
_csfSTSGX(CSFC5c_STS_xxx_117,NULL)
_csfSTSGX(CSFC5c_STS_xxx_118,NULL)
_csfSTSGX(CSFC5c_STS_xxx_119,NULL)
_csfSTSGX(CSFC5c_STS_xxx_120,NULL)
_csfSTSGX(CSFC5c_STS_xxx_121,NULL)
_csfSTSGX(CSFC5c_STS_xxx_122,NULL)
_csfSTSGX(CSFC5c_STS_xxx_123,NULL)
_csfSTSGX(CSFC5c_STS_xxx_124,NULL)
_csfSTSGX(CSFC5c_STS_xxx_125,NULL)
_csfSTSGX(CSFC5c_STS_xxx_126,NULL)
_csfSTSGX(CSFC5c_STS_xxx_127,NULL)
