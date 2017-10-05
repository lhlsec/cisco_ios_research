/* $Id: fbmproto.h,v 3.2 1995/11/17 18:10:00 hampton Exp $
 * $Source: /swtal/cherf.111/ios/sys/xdi/fbmproto.h,v $
 *------------------------------------------------------------------
 *
 *
 * Mar 1994, Walter Friedrich
 *
 * Copyright (c) 1994 by cisco Systems, Inc.
 * All rights reserved.
 * 
 *------------------------------------------------------------------
 * $Log: fbmproto.h,v $
 * Revision 3.2  1995/11/17  18:10:00  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.1  1995/11/09  13:55:33  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 * Revision 2.1  1995/06/07  23:24:49  hampton
 * Bump version numbers from 1.x to 2.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

/*
 *   This file was automatically generated by cextract version 1.2.
 *   Manual editing not recommended.
 *
 *   Created: Thu Jan 13 15:00:47 1994
 */
#ifndef __CEXTRACT__
#ifdef __STDC__

extern uInt32    FBMMainMulti (uInt16 stnID);
extern uInt32    FBMStartup (void);
extern uInt16    ESFID_Param (ESFIDParamType * param, FDDILongAddressType esfID);
extern uInt32    BuildESFRequestMulti (uInt16 stnID, Void_p frameBuffer, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, FDDILongAddressType esfID, uChar * info, uInt16 infoLen);
extern uInt32    BuildESFAnnouncementMulti (uInt16 stnID, Void_p frameBuffer, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, FDDILongAddressType esfID, uChar * info, uInt16 infoLen);
extern uInt32    BuildESFResponseMulti (uInt16 stnID, Void_p frameBuffer, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, FDDILongAddressType esfID, uChar * info, uInt16 infoLen);
extern void      ProcessESFAnnouncement (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      ProcessESFRequest (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      ProcessESFResponse (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern uInt32    BuildSMTHeaderMulti (uInt16 stnID, SMTFrameHdrType * frameHdr, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uChar frameClass, uChar frameType, uInt32 transID);
extern uInt32    BuildNIFRequest (uInt16 stnID, Void_p frameBuffer, uChar fcField, uChar * destAddr, uInt16 outputMAC, uInt32 transID);
extern uInt32    BuildNIFAnnouncement (uInt16 stnID, Void_p frameBuffer, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID);
extern void      BuildNIFResponse (uInt16 stnID, Void_p requestFrame, Void_p responseBuffer, uInt16 outputMAC);
extern uInt32    BuildSIFConfigRequest (uInt16 stnID, Void_p frameBuffer, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID);
extern void      BuildSIFConfigResponse (uInt16 stnID, Void_p requestFrame, Void_p responseBuffer, uInt16 outputMAC);
extern uInt32    BuildSIFOpRequest (uInt16 stnID, Void_p frameBuffer, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID);
extern void      BuildSIFOpResponse (uInt16 stnID, Void_p requestFrame, Void_p responseBuffer, uInt16 outputMAC);
extern uInt32    BuildECFRequest (uInt16 stnID, Void_p frameBuffer, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, Void_p info, uInt16 infoLen);
extern void      BuildECFResponse (uInt16 stnID, Void_p requestFrame, Void_p responseBuffer, uInt16 outputMAC);
extern void      BuildRDFResponse (uInt16 stnID, Void_p requestFrame, Void_p responseBuffer, uInt16 outputMAC, uInt32 reasonCode, uInt16 reqFrameLen);
extern void      InitFBMMACData (FBMMACInfoType * macPtr);
extern void      InitFBMMACHWData (FBMMACInfoType * macPtr);
extern void      InitFBMPORTData (FBMPORTInfoType * portPtr);
extern void      InitFBMPORTHWData (FBMPORTInfoType * portPtr);
extern uInt32    InitFBMData (uInt16 stnID);
extern uInt32    InitFBMMIBDataMulti (uInt16 stnID);
extern void      PassMAPFrameMulti (uInt16 stnID, uInt16 messageType, Void_p framePtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      SendFBMEvent (uInt16 stnID, uInt16 eventType, uInt16 entity);
extern void      ProcessSendFrame (SMTMessage * msg);
extern void      ProcessFBMMIBChange (SMTMessage * smtmsg);
extern void      ProcessFBMMACChange (SMTMessage * smtmsg);
extern void      ProcessFBMPORTChange (SMTMessage * smtmsg);
extern void      ProcessFBMMessageMulti (SMTMessage * msg);
extern void      ProcessNIFReceived (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      ProcessNIFResponse (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      ProcessNNTick (uInt16 stnID);
extern uInt32    BuildPMFGetRequest (uInt16 stnID, SMTFrameHdrType * frameHdr, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, TLVParamType * srcPtr, uInt16 bufLen);
extern void      BuildPMFGetResponse (uInt16 stnID, SMTFrameHdrType * reqframeHdr, SMTFrameHdrType * rspframeHdr, uInt16 outputMAC);
extern uInt32    BuildPMFSetRequest (uInt16 stnID, SMTFrameHdrType * frameHdr, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, TLVSetCountType * setCount, TLVParamType * param);
extern void      BuildPMFSetResponse (uInt16 stnID, SMTFrameHdrType * rspframeHdr, uInt16 outputMAC, FDDILongAddressType destAddr, uInt32 reasonCode, TLVParamType * setCount, TLVParamType * lastSetID, TLVParamType * param, uInt32 transID);
extern uInt32    ValidateAuthorization (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 macID);
extern void      ProcessPMFGet (uInt16 stnID, Void_p memPtr, uInt16 MACNum);
extern void      ProcessPMFSet (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum);
extern uInt16    UNA_Param (UNAParamType * param, FBMMACInfoType * macPtr);
extern uInt16    StationDescriptor_Param (uInt16 stnID, StationDescParamType * param);
extern uInt16    StationState_Param (uInt16 stnID, StationStateParamType * param, uInt16 macID);
extern uInt16    MsgTimeStamp_Param (uInt16 stnID, MsgTimeStampParamType * param);
extern uInt16    StationPolicies_Param (uInt16 stnID, StationPoliciesParamType * param);
extern uInt16    MACNeighbors_Param (MACNeighborsParamType * param, FBMMACInfoType * macPtr);
extern uInt16    PathDescriptor_Param (uInt16 stnID, PathDescParamType * param);
extern uInt16    MACStatus_Param (uInt16 stnID, MACStatusParamType * param, FBMMACInfoType * macPtr);
extern uInt16    LERStatus_Param (uInt16 stnID, LERStatusParamType * param, FBMPORTInfoType * portPtr);
extern uInt16    FrameCounters_Param (uInt16 stnID, FrameCountersParamType * param, FBMMACInfoType * macPtr);
extern uInt16    FrameNotCopied_Param (uInt16 stnID, FrameNotCopiedParamType * param, FBMMACInfoType * macPtr);
extern uInt16    PriorityValues_Param (uInt16 stnID, PriorityValuesParamType * param, FBMMACInfoType * macPtr);
extern uInt16    EBStatus_Param (uInt16 stnID, EBStatusParamType * param, FBMPORTInfoType * portPtr);
extern uInt16    Manufacturer_Param (uInt16 stnID, ManufacturerParamType * param);
extern uInt16    User_Param (uInt16 stnID, UserParamType * param);
extern uInt16    Echo_Param (EchoParamType * param, Void_p eBuffer, uInt16 eSize);
extern uInt16    ReasonCode_Param (ReasonCodeParamType * param, uInt32 code);
extern uInt16    RejectedFrame_Param (RejectedFrameParamType * param, SMTFrameHdrType * frame, uInt16 maxLen, uInt16 reqFrameLen);
extern uInt16    SupportedVersions_Param (uInt16 stnID, SupportedVersionsParamType * param);
extern uInt16    Authorization_ParamMulti (uInt16 stnID, AuthorizationParamType * param, SMTFrameHdrType * frameHdr, uInt16 spaceLeft, uInt16 outputMAC);
extern uInt16    Attribute_Param (TLVParamType * param, TLVParamType * attr);
extern uInt32    InitProcessFBM (void);
extern void      ProcessFBM (ProcState * onState);
extern uInt32    StartupFBMQueue (void);
extern uInt32    InitFBMQueue (uInt16 stnID);
extern uInt32    EmptyFBMQueue (void);
extern uInt32    ReadFBMQueueMulti (uInt16 * stnID, uInt16 * actionType, Void_p * actionData, uInt16 * actionLen, uInt16 * actionEntity, uChar * actionEAC);
extern uInt32    PostFBMQueueMulti (uInt16 stnID, uInt16 actionType, Void_p actionData, uInt16 actionLen, uInt16 actionEntity, uChar actionEAC);
extern uInt32    BuildRAFRequestMulti (uInt16 stnID, Void_p frameBuffer, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, uChar * info, uInt16 infoLen);
extern uInt32    BuildRAFResponseMulti (uInt16 stnID, Void_p frameBuffer, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, uChar * info, uInt16 infoLen);
extern uInt16    ResourceType_Param (ResourceTypeParamType * param, uInt32 resType);
extern uInt16    SBACommand_Param (SBACommandParamType * param, uInt32 command);
extern uInt16    SBAPayload_Param (SBAPayloadParamType * param, uInt32 payload);
extern uInt16    SBAOverhead_Param (SBAOverheadParamType * param, uInt32 overhead);
extern uInt16    SBAAllocAddr_Param (SBAAllocAddrParamType * param, FDDILongAddressType address);
extern uInt16    SBACategory_Param (SBACategoryParamType * param, uInt32 category);
extern uInt16    MaxT_Neg_Param (MaxTnegParamType * param, uInt32 max_tneg);
extern uInt16    MinSegment_Param (MinSegmentParamType * param, uInt32 minSegment);
extern uInt16    SBAAllocatable_Param (SBAAllocatableParamType * param, uInt32 allocatable);
extern void      MonitorNIFSBA (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      ProcessSBAMessage (SMTMessage * msg);
extern void      ProcessRAFRequest (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      ProcessRAFResponse (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern uInt32    ProcessFBMFrameMulti (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      ProcessSRPReport (SMTMessage * smtmsg);
extern void      ProcessSRPTick (uInt16 stnID);
extern uInt32    InitSRP (uInt16 stnID);
extern void      MASICAttrNetOrder (TLVParamType * param, uInt16 netOrder);
extern void      AggregateNetOrder (uInt16 paramType, uInt16 paramLen, uInt32 vendorID, Void_p data, uInt16 netOrder);
extern void      AttrNetOrder (TLVParamType * param, uInt16 netOrder);
extern Void_p    FindParam (uInt16 paramType, TLVParamType * buffer, uInt16 bufLen, Flag order);
extern Void_p    FindFrameParam (uInt16 paramType, SMTFrameHdrType * frameHdr);
extern uInt16    GetMACIndexMulti (uInt16 stnID, uInt16 sourceMAC, uInt16 * outputMAC);
extern uInt32    GenTransID (uInt16 stnID);
extern uInt32    InitFBMTransId (uInt16 stnID);
extern void      ProcessFBMTimerMulti (uInt16 stnID);

#else							/* __STDC__ */

extern uInt32    FBMMainMulti ( /* uInt16 stnID */ );
extern uInt32    FBMStartup ( /* void */ );
extern uInt16    ESFID_Param (			/* ESFIDParamType *param,
	   FDDILongAddressType esfID */ );
extern uInt32    BuildESFRequestMulti (	/* uInt16 stnID, Void_p frameBuffer,
										 * uChar fcField, FDDILongAddressType
										 * destAddr, uInt16 outputMAC, uInt32
										 * transID, FDDILongAddressType
	   esfID, uChar *info, uInt16 infoLen */ );
extern uInt32    BuildESFAnnouncementMulti (	/* uInt16 stnID, Void_p
												 * frameBuffer, uChar
												 * fcField,
												 * FDDILongAddressType
												 * destAddr, uInt16
												 * outputMAC, uInt32 transID,
												 * FDDILongAddressType esfID,
												 * uChar *info, uInt16
	   infoLen */ );
extern uInt32    BuildESFResponseMulti (/* uInt16 stnID, Void_p frameBuffer,
										 * FDDILongAddressType destAddr,
										 * uInt16 outputMAC, uInt32 transID,
										 * FDDILongAddressType esfID, uChar
	   *info, uInt16 infoLen */ );
extern void      ProcessESFAnnouncement (	/* uInt16 stnID, Void_p memPtr,
											 * uInt16 frameLen, uInt16
	   MACNum, uChar EACbits */ );
extern void      ProcessESFRequest (	/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern void      ProcessESFResponse (	/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern uInt32    BuildSMTHeaderMulti (	/* uInt16 stnID, SMTFrameHdrType
										 * *frameHdr, uChar fcField,
										 * FDDILongAddressType destAddr,
										 * uInt16 outputMAC, uChar
										 * frameClass, uChar frameType,
	   uInt32 transID */ );
extern uInt32    BuildNIFRequest (		/* uInt16 stnID, Void_p frameBuffer,
										 * uChar fcField, uChar *destAddr,
	   uInt16 outputMAC, uInt32 transID */ );
extern uInt32    BuildNIFAnnouncement (	/* uInt16 stnID, Void_p frameBuffer,
										 * uChar fcField, FDDILongAddressType
										 * destAddr, uInt16 outputMAC, uInt32
	   transID */ );
extern void      BuildNIFResponse (		/* uInt16 stnID, Void_p requestFrame,
										 * Void_p responseBuffer, uInt16
	   outputMAC */ );
extern uInt32    BuildSIFConfigRequest (/* uInt16 stnID, Void_p frameBuffer,
										 * uChar fcField, FDDILongAddressType
										 * destAddr, uInt16 outputMAC, uInt32
	   transID */ );
extern void      BuildSIFConfigResponse (	/* uInt16 stnID, Void_p
											 * requestFrame, Void_p
											 * responseBuffer, uInt16
	   outputMAC */ );
extern uInt32    BuildSIFOpRequest (	/* uInt16 stnID, Void_p frameBuffer,
										 * uChar fcField, FDDILongAddressType
										 * destAddr, uInt16 outputMAC, uInt32
	   transID */ );
extern void      BuildSIFOpResponse (	/* uInt16 stnID, Void_p requestFrame,
										 * Void_p responseBuffer, uInt16
	   outputMAC */ );
extern uInt32    BuildECFRequest (		/* uInt16 stnID, Void_p frameBuffer,
										 * uChar fcField, FDDILongAddressType
										 * destAddr, uInt16 outputMAC, uInt32
										 * transID, Void_p info, uInt16
	   infoLen */ );
extern void      BuildECFResponse (		/* uInt16 stnID, Void_p requestFrame,
										 * Void_p responseBuffer, uInt16
	   outputMAC */ );
extern void      BuildRDFResponse (		/* uInt16 stnID, Void_p requestFrame,
										 * Void_p responseBuffer, uInt16
										 * outputMAC, uInt32 reasonCode,
	   uInt16 reqFrameLen */ );
extern void      InitFBMMACData ( /* FBMMACInfoType *macPtr */ );
extern void      InitFBMMACHWData ( /* FBMMACInfoType *macPtr */ );
extern void      InitFBMPORTData ( /* FBMPORTInfoType *portPtr */ );
extern void      InitFBMPORTHWData ( /* FBMPORTInfoType *portPtr */ );
extern uInt32    InitFBMData ( /* uInt16 stnID */ );
extern uInt32    InitFBMMIBDataMulti ( /* uInt16 stnID */ );
extern void      PassMAPFrameMulti (	/* uInt16 stnID, uInt16 messageType,
										 * Void_p framePtr, uInt16 frameLen,
	   uInt16 MACNum, uChar EACbits */ );
extern void      SendFBMEvent (			/* uInt16 stnID, uInt16 eventType,
	   uInt16 entity */ );
extern void      ProcessSendFrame ( /* SMTMessage *msg */ );
extern void      ProcessFBMMIBChange ( /* SMTMessage *smtmsg */ );
extern void      ProcessFBMMACChange ( /* SMTMessage *smtmsg */ );
extern void      ProcessFBMPORTChange ( /* SMTMessage *smtmsg */ );
extern void      ProcessFBMMessageMulti ( /* SMTMessage *msg */ );
extern void      ProcessNIFReceived (	/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern void      ProcessNIFResponse (	/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern void      ProcessNNTick ( /* uInt16 stnID */ );
extern uInt32    BuildPMFGetRequest (	/* uInt16 stnID, SMTFrameHdrType
										 * *frameHdr, FDDILongAddressType
										 * destAddr, uInt16 outputMAC, uInt32
										 * transID, TLVParamType *srcPtr,
	   uInt16 bufLen */ );
extern void      BuildPMFGetResponse (	/* uInt16 stnID, SMTFrameHdrType
										 * *reqframeHdr, SMTFrameHdrType
	   *rspframeHdr, uInt16 outputMAC */ );
extern uInt32    BuildPMFSetRequest (	/* uInt16 stnID, SMTFrameHdrType
										 * *frameHdr, FDDILongAddressType
										 * destAddr, uInt16 outputMAC, uInt32
										 * transID, TLVSetCountType
	   *setCount, TLVParamType *param */ );
extern void      BuildPMFSetResponse (	/* uInt16 stnID, SMTFrameHdrType
										 * *rspframeHdr, uInt16 outputMAC,
										 * FDDILongAddressType destAddr,
										 * uInt32 reasonCode, TLVParamType
										 * *setCount, TLVParamType
										 * *lastSetID, TLVParamType *param,
	   uInt32 transID */ );
extern uInt32    ValidateAuthorization (/* uInt16 stnID, Void_p memPtr,
	   uInt16 frameLen, uInt16 macID */ );
extern void      ProcessPMFGet (		/* uInt16 stnID, Void_p memPtr,
	   uInt16 MACNum */ );
extern void      ProcessPMFSet (		/* uInt16 stnID, Void_p memPtr,
	   uInt16 frameLen, uInt16 MACNum */ );
extern uInt16    UNA_Param (			/* UNAParamType *param,
	   FBMMACInfoType *macPtr */ );
extern uInt16    StationDescriptor_Param (	/* uInt16 stnID,
	   StationDescParamType *param */ );
extern uInt16    StationState_Param (	/* uInt16 stnID,
										 * StationStateParamType *param,
	   uInt16 macID */ );
extern uInt16    MsgTimeStamp_Param (	/* uInt16 stnID,
	   MsgTimeStampParamType *param */ );
extern uInt16    StationPolicies_Param (/* uInt16 stnID,
	   StationPoliciesParamType *param */ );
extern uInt16    MACNeighbors_Param (	/* MACNeighborsParamType *param,
	   FBMMACInfoType *macPtr */ );
extern uInt16    PathDescriptor_Param (	/* uInt16 stnID, PathDescParamType
	   *param */ );
extern uInt16    MACStatus_Param (		/* uInt16 stnID, MACStatusParamType
	   *param, FBMMACInfoType *macPtr */ );
extern uInt16    LERStatus_Param (		/* uInt16 stnID, LERStatusParamType
	   *param, FBMPORTInfoType *portPtr */ );
extern uInt16    FrameCounters_Param (	/* uInt16 stnID,
										 * FrameCountersParamType *param,
	   FBMMACInfoType *macPtr */ );
extern uInt16    FrameNotCopied_Param (	/* uInt16 stnID,
										 * FrameNotCopiedParamType *param,
	   FBMMACInfoType *macPtr */ );
extern uInt16    PriorityValues_Param (	/* uInt16 stnID,
										 * PriorityValuesParamType *param,
	   FBMMACInfoType *macPtr */ );
extern uInt16    EBStatus_Param (		/* uInt16 stnID, EBStatusParamType
	   *param, FBMPORTInfoType *portPtr */ );
extern uInt16    Manufacturer_Param (	/* uInt16 stnID,
	   ManufacturerParamType *param */ );
extern uInt16    User_Param ( /* uInt16 stnID, UserParamType *param */ );
extern uInt16    Echo_Param (			/* EchoParamType *param, Void_p
	   eBuffer, uInt16 eSize */ );
extern uInt16    ReasonCode_Param (		/* ReasonCodeParamType *param, uInt32
	   code */ );
extern uInt16    RejectedFrame_Param (	/* RejectedFrameParamType *param,
										 * SMTFrameHdrType *frame, uInt16
	   maxLen, uInt16 reqFrameLen */ );
extern uInt16    SupportedVersions_Param (	/* uInt16 stnID,
											 * SupportedVersionsParamType
	   *param */ );
extern uInt16    Authorization_ParamMulti (	/* uInt16 stnID,
											 * AuthorizationParamType *param,
											 * SMTFrameHdrType *frameHdr,
											 * uInt16 spaceLeft, uInt16
	   outputMAC */ );
extern uInt16    Attribute_Param (		/* TLVParamType *param, TLVParamType
	   *attr */ );
extern uInt32    InitProcessFBM ( /* void */ );
extern void      ProcessFBM ( /* ProcState *onState */ );
extern uInt32    StartupFBMQueue ( /* void */ );
extern uInt32    InitFBMQueue ( /* uInt16 stnID */ );
extern uInt32    EmptyFBMQueue ( /* void */ );
extern uInt32    ReadFBMQueueMulti (	/* uInt16 *stnID, uInt16 *actionType,
										 * Void_p *actionData, uInt16
										 * *actionLen, uInt16 *actionEntity,
	   uChar *actionEAC */ );
extern uInt32    PostFBMQueueMulti (	/* uInt16 stnID, uInt16 actionType,
										 * Void_p actionData, uInt16
										 * actionLen, uInt16 actionEntity,
	   uChar actionEAC */ );
extern uInt32    BuildRAFRequestMulti (	/* uInt16 stnID, Void_p frameBuffer,
										 * uChar fcField, FDDILongAddressType
										 * destAddr, uInt16 outputMAC, uInt32
										 * transID, uChar *info, uInt16
	   infoLen */ );
extern uInt32    BuildRAFResponseMulti (/* uInt16 stnID, Void_p frameBuffer,
										 * FDDILongAddressType destAddr,
										 * uInt16 outputMAC, uInt32 transID,
	   uChar *info, uInt16 infoLen */ );
extern uInt16    ResourceType_Param (	/* ResourceTypeParamType *param,
	   uInt32 resType */ );
extern uInt16    SBACommand_Param (		/* SBACommandParamType *param, uInt32
	   command */ );
extern uInt16    SBAPayload_Param (		/* SBAPayloadParamType *param, uInt32
	   payload */ );
extern uInt16    SBAOverhead_Param (	/* SBAOverheadParamType *param,
	   uInt32 overhead */ );
extern uInt16    SBAAllocAddr_Param (	/* SBAAllocAddrParamType *param,
	   FDDILongAddressType address */ );
extern uInt16    SBACategory_Param (	/* SBACategoryParamType *param,
	   uInt32 category */ );
extern uInt16    MaxT_Neg_Param (		/* MaxTnegParamType *param, uInt32
	   max_tneg */ );
extern uInt16    MinSegment_Param (		/* MinSegmentParamType *param, uInt32
	   minSegment */ );
extern uInt16    SBAAllocatable_Param (	/* SBAAllocatableParamType *param,
	   uInt32 allocatable */ );
extern void      MonitorNIFSBA (		/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern void      ProcessSBAMessage ( /* SMTMessage *msg */ );
extern void      ProcessRAFRequest (	/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern void      ProcessRAFResponse (	/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern uInt32    ProcessFBMFrameMulti (	/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern void      ProcessSRPReport ( /* SMTMessage *smtmsg */ );
extern void      ProcessSRPTick ( /* uInt16 stnID */ );
extern uInt32    InitSRP ( /* uInt16 stnID */ );
extern void      MASICAttrNetOrder (	/* TLVParamType *param, uInt16
	   netOrder */ );
extern void      AggregateNetOrder (	/* uInt16 paramType, uInt16 paramLen,
										 * uInt32 vendorID, Void_p data,
	   uInt16 netOrder */ );
extern void      AttrNetOrder (			/* TLVParamType *param, uInt16
	   netOrder */ );
extern Void_p    FindParam (			/* uInt16 paramType, TLVParamType
	   *buffer, uInt16 bufLen, Flag order */ );
extern Void_p    FindFrameParam (		/* uInt16 paramType, SMTFrameHdrType
	   *frameHdr */ );
extern uInt16    GetMACIndexMulti (		/* uInt16 stnID, uInt16 sourceMAC,
	   uInt16 *outputMAC */ );
extern uInt32    GenTransID ( /* uInt16 stnID */ );
extern uInt32    InitFBMTransId ( /* uInt16 stnID */ );
extern void      ProcessFBMTimerMulti ( /* uInt16 stnID */ );

#endif							/* __STDC__ */
#endif							/* __CEXTRACT__ */

#ifndef MULTIPLE_STATION				/* single station core entry points */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern uInt32    FBMMain (void);
extern uInt32    BuildESFRequest (Void_p frameBuffer, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, FDDILongAddressType esfID, uChar * info, uInt16 infoLen);
extern uInt32    BuildESFAnnouncement (Void_p frameBuffer, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, FDDILongAddressType esfID, uChar * info, uInt16 infoLen);
extern uInt32    BuildESFResponse (Void_p frameBuffer, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, FDDILongAddressType esfID, uChar * info, uInt16 infoLen);
extern uInt32    BuildSMTHeader (SMTFrameHdrType * frameHdr, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uChar frameClass, uChar frameType, uInt32 transID);
extern uInt32    InitFBMMIBData (void);
extern void      PassMAPFrame (uInt16 messageType, Void_p framePtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      ProcessFBMMessage (SMTMessage * msg);
extern uInt16    Authorization_Param (AuthorizationParamType * param, SMTFrameHdrType * frameHdr, uInt16 spaceLeft, uInt16 outputMAC);
extern uInt32    ReadFBMQueue (uInt16 * actionType, Void_p * actionData, uInt16 * actionLen, uInt16 * actionEntity, uChar * actionEAC);
extern uInt32    PostFBMQueue (uInt16 actionType, Void_p actionData, uInt16 actionLen, uInt16 actionEntity, uChar actionEAC);
extern uInt32    BuildRAFRequest (Void_p frameBuffer, uChar fcField, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, uChar * info, uInt16 infoLen);
extern uInt32    BuildRAFResponse (Void_p frameBuffer, FDDILongAddressType destAddr, uInt16 outputMAC, uInt32 transID, uChar * info, uInt16 infoLen);
extern uInt32    ProcessFBMFrame (Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern uInt16    GetMACIndex (uInt16 sourceMAC, uInt16 * outputMAC);
extern void      ProcessFBMTimer (void);

#else							/* __STDC__ */

extern uInt32    FBMMain ( /* void */ );
extern uInt32    BuildESFRequest (		/* Void_p frameBuffer, uChar fcField,
										 * FDDILongAddressType destAddr,
										 * uInt16 outputMAC, uInt32 transID,
										 * FDDILongAddressType esfID, uChar
	   *info, uInt16 infoLen */ );
extern uInt32    BuildESFAnnouncement (	/* Void_p frameBuffer, uChar fcField,
										 * FDDILongAddressType destAddr,
										 * uInt16 outputMAC, uInt32 transID,
										 * FDDILongAddressType esfID, uChar
	   *info, uInt16 infoLen */ );
extern uInt32    BuildESFResponse (		/* Void_p frameBuffer,
										 * FDDILongAddressType destAddr,
										 * uInt16 outputMAC, uInt32 transID,
										 * FDDILongAddressType esfID, uChar
	   *info, uInt16 infoLen */ );
extern uInt32    BuildSMTHeader (		/* SMTFrameHdrType *frameHdr, uChar
										 * fcField, FDDILongAddressType
										 * destAddr, uInt16 outputMAC, uChar
										 * frameClass, uChar frameType,
	   uInt32 transID */ );
extern uInt32    InitFBMMIBData ( /* void */ );
extern void      PassMAPFrame (			/* uInt16 messageType, Void_p
										 * framePtr, uInt16 frameLen, uInt16
	   MACNum, uChar EACbits */ );
extern void      ProcessFBMMessage ( /* SMTMessage *msg */ );
extern uInt16    Authorization_Param (	/* AuthorizationParamType *param,
										 * SMTFrameHdrType *frameHdr, uInt16
	   spaceLeft, uInt16 outputMAC */ );
extern uInt32    ReadFBMQueue (			/* uInt16 *actionType, Void_p
										 * *actionData, uInt16 *actionLen,
										 * uInt16 *actionEntity, uChar
	   *actionEAC */ );
extern uInt32    PostFBMQueue (			/* uInt16 actionType, Void_p
										 * actionData, uInt16 actionLen,
										 * uInt16 actionEntity, uChar
	   actionEAC */ );
extern uInt32    BuildRAFRequest (		/* Void_p frameBuffer, uChar fcField,
										 * FDDILongAddressType destAddr,
										 * uInt16 outputMAC, uInt32 transID,
	   uChar *info, uInt16 infoLen */ );
extern uInt32    BuildRAFResponse (		/* Void_p frameBuffer,
										 * FDDILongAddressType destAddr,
										 * uInt16 outputMAC, uInt32 transID,
	   uChar *info, uInt16 infoLen */ );
extern uInt32    ProcessFBMFrame (		/* Void_p memPtr, uInt16 frameLen,
	   uInt16 MACNum, uChar EACbits */ );
extern uInt16    GetMACIndex (			/* uInt16 sourceMAC, uInt16
	   *outputMAC */ );
extern void      ProcessFBMTimer ( /* void */ );

#endif							/* __STDC__ */
#endif							/* __CEXTRACT__ */

#endif	/* MULTIPLE_STATION */	/* end of single station core entry points */

#ifdef MULTIPLE_STATION					/* multistation I/F routines */

/*
 *   This file was automatically generated by cextract version 1.2.
 *   Manual editing not recommended.
 *
 *   Created: Thu Jan 13 15:00:55 1994
 */
#ifndef __CEXTRACT__
#ifdef __STDC__

extern void      FreeFrameBuffer (Void_p buf);
extern void      ClearFrameBuffer (Void_p buf);
extern uInt32    InitFBMFrameBuffer (Void_p * bufptr);
extern void      LocalESFAnnouncementMulti (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern uInt32    LocalESFRequestMulti (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      LocalESFResponseMulti (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern uInt32    InitESFLocalMulti (uInt16 stnID);
extern void      SendSMTFrameMulti (uInt16 stnID, Void_p frameBuffer, uInt16 frameLength, uInt16 MACNum);
extern uInt32    InitFBMFrameMulti (uInt16 stnID);
extern uInt32    InitFBMInterruptsMulti (uInt16 stnID);
extern void      LocalFBMMessages (SMTMessage * smtmsg);
extern void      LocalFBMNotificationMulti (uInt16 stnID, TLVParamType * mibPtr, ECEntryType * ecPtr);
extern void      LocalFBMFramesMulti (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      LocalAttrNetOrder (TLVParamType * param, uInt16 netOrder, uInt16 ptype, uInt16 plen);
extern void      ProcessLocalTickMulti (uInt16 stnID);
extern uInt32    InitFBMLocalMulti (uInt16 stnID);
extern void      SendFBMMessage (SMTMessage * msg);
extern void      FreeMessageBuffer (SMTMessage * buf);
extern uInt32    InitFBMMessageMulti (uInt16 stnID);
extern uInt32    FBMGetMIBAttrMulti (uInt16 stnID, uInt16 bufSize, Void_p bufData);
extern uInt32    FBMMultiGetMIBAttrMulti (uInt16 stnID, uInt16 bufSize, Void_p bufData, TLVSetCountType * setCount);
extern uInt32    FBMChangeMIBAttrMulti (uInt16 stnID, uInt16 bufSize, Void_p bufData, TLVSetCountType * setCount, SMTStationIdType * stationID);
extern uInt32    LocalRAFRequestMulti (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      LocalRAFResponseMulti (uInt16 stnID, Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern uInt32    InitRAFLocalMulti (uInt16 stnID);
extern uInt32    InitFBMTimerMulti (uInt16 stnID);
extern Flag      VerifyAuthorizationMulti (uInt16 stnID, uChar * aBuffer, uInt16 aLen, Void_p memPtr, uInt16 frameLen, uInt16 macID);
extern uInt16    BuildAuthorizationMulti (uInt16 stnID, uChar * aBuffer, SMTFrameHdrType * frameHdr, uInt16 maxLen, uInt16 macID);

#else							/* __STDC__ */

extern void      FreeFrameBuffer ( /* Void_p buf */ );
extern void      ClearFrameBuffer ( /* Void_p buf */ );
extern uInt32    InitFBMFrameBuffer ( /* Void_p *bufptr */ );
extern void      LocalESFAnnouncementMulti (	/* uInt16 stnID, Void_p
												 * memPtr, uInt16 frameLen,
												 * uInt16 MACNum, uChar
	   EACbits */ );
extern uInt32    LocalESFRequestMulti (	/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern void      LocalESFResponseMulti (/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern uInt32    InitESFLocalMulti ( /* uInt16 stnID */ );
extern void      SendSMTFrameMulti (	/* uInt16 stnID, Void_p frameBuffer,
	   uInt16 frameLength, uInt16 MACNum */ );
extern uInt32    InitFBMFrameMulti ( /* uInt16 stnID */ );
extern uInt32    InitFBMInterruptsMulti ( /* uInt16 stnID */ );
extern void      LocalFBMMessages ( /* SMTMessage *smtmsg */ );
extern void      LocalFBMNotificationMulti (	/* uInt16 stnID, TLVParamType
												 * *mibPtr, ECEntryType
	   *ecPtr */ );
extern void      LocalFBMFramesMulti (	/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern void      LocalAttrNetOrder (	/* TLVParamType *param, uInt16
										 * netOrder, uInt16 ptype, uInt16
	   plen */ );
extern void      ProcessLocalTickMulti ( /* uInt16 stnID */ );
extern uInt32    InitFBMLocalMulti ( /* uInt16 stnID */ );
extern void      SendFBMMessage ( /* SMTMessage *msg */ );
extern void      FreeMessageBuffer ( /* SMTMessage *buf */ );
extern uInt32    InitFBMMessageMulti ( /* uInt16 stnID */ );
extern uInt32    FBMGetMIBAttrMulti (	/* uInt16 stnID, uInt16 bufSize,
	   Void_p bufData */ );
extern uInt32    FBMMultiGetMIBAttrMulti (	/* uInt16 stnID, uInt16 bufSize,
											 * Void_p bufData,
	   TLVSetCountType *setCount */ );
extern uInt32    FBMChangeMIBAttrMulti (/* uInt16 stnID, uInt16 bufSize,
										 * Void_p bufData, TLVSetCountType
										 * *setCount, SMTStationIdType
	   *stationID */ );
extern uInt32    LocalRAFRequestMulti (	/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern void      LocalRAFResponseMulti (/* uInt16 stnID, Void_p memPtr,
										 * uInt16 frameLen, uInt16 MACNum,
	   uChar EACbits */ );
extern uInt32    InitRAFLocalMulti ( /* uInt16 stnID */ );
extern uInt32    InitFBMTimerMulti ( /* uInt16 stnID */ );
extern Flag      VerifyAuthorizationMulti (	/* uInt16 stnID, uChar *aBuffer,
											 * uInt16 aLen, Void_p memPtr,
	   uInt16 frameLen, uInt16 macID */ );
extern uInt16    BuildAuthorizationMulti (	/* uInt16 stnID, uChar *aBuffer,
											 * SMTFrameHdrType *frameHdr,
	   uInt16 maxLen, uInt16 macID */ );

#endif							/* __STDC__ */
#endif							/* __CEXTRACT__ */

#else	/* MULTIPLE_STATION */	/* single station I/F routines */

/*
 *   This file was automatically generated by cextract version 1.2.
 *   Manual editing not recommended.
 *
 *   Created: Thu Jan 13 15:00:55 1994
 */
#ifndef __CEXTRACT__
#ifdef __STDC__

extern void      FreeFrameBuffer (Void_p buf);
extern void      ClearFrameBuffer (Void_p buf);
extern uInt32    InitFBMFrameBuffer (Void_p * bufptr);
extern void      LocalESFAnnouncement (Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern uInt32    LocalESFRequest (Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      LocalESFResponse (Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern uInt32    InitESFLocal (void);
extern void      SendSMTFrame (Void_p frameBuffer, uInt16 frameLength, uInt16 MACNum);
extern uInt32    InitFBMFrame (void);
extern uInt32    InitFBMInterrupts (void);
extern void      LocalFBMMessages (SMTMessage * smtmsg);
extern void      LocalFBMNotification (TLVParamType * mibPtr, ECEntryType * ecPtr);
extern void      LocalFBMFrames (Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      LocalAttrNetOrder (TLVParamType * param, uInt16 netOrder, uInt16 ptype, uInt16 plen);
extern void      ProcessLocalTick (void);
extern uInt32    InitFBMLocal (void);
extern void      SendFBMMessage (SMTMessage * msg);
extern void      FreeMessageBuffer (SMTMessage * buf);
extern uInt32    InitFBMMessage (void);
extern uInt32    FBMGetMIBAttr (uInt16 bufSize, Void_p bufData);
extern uInt32    FBMMultiGetMIBAttr (uInt16 bufSize, Void_p bufData, TLVSetCountType * setCount);
extern uInt32    FBMChangeMIBAttr (uInt16 bufSize, Void_p bufData, TLVSetCountType * setCount, SMTStationIdType * stationID);
extern uInt32    LocalRAFRequest (Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern void      LocalRAFResponse (Void_p memPtr, uInt16 frameLen, uInt16 MACNum, uChar EACbits);
extern uInt32    InitRAFLocal (void);
extern uInt32    InitFBMTimer (void);
extern Flag      VerifyAuthorization (uChar * aBuffer, uInt16 aLen, Void_p memPtr, uInt16 frameLen, uInt16 macID);
extern uInt16    BuildAuthorization (uChar * aBuffer, SMTFrameHdrType * frameHdr, uInt16 maxLen, uInt16 macID);

#else							/* __STDC__ */

extern void      FreeFrameBuffer ( /* Void_p buf */ );
extern void      ClearFrameBuffer ( /* Void_p buf */ );
extern uInt32    InitFBMFrameBuffer ( /* Void_p *bufptr */ );
extern void      LocalESFAnnouncement (	/* Void_p memPtr, uInt16 frameLen,
	   uInt16 MACNum, uChar EACbits */ );
extern uInt32    LocalESFRequest (		/* Void_p memPtr, uInt16 frameLen,
	   uInt16 MACNum, uChar EACbits */ );
extern void      LocalESFResponse (		/* Void_p memPtr, uInt16 frameLen,
	   uInt16 MACNum, uChar EACbits */ );
extern uInt32    InitESFLocal ( /* void */ );
extern void      SendSMTFrame (			/* Void_p frameBuffer, uInt16
	   frameLength, uInt16 MACNum */ );
extern uInt32    InitFBMFrame ( /* void */ );
extern uInt32    InitFBMInterrupts ( /* void */ );
extern void      LocalFBMMessages ( /* SMTMessage *smtmsg */ );
extern void      LocalFBMNotification (	/* TLVParamType *mibPtr, ECEntryType
	   *ecPtr */ );
extern void      LocalFBMFrames (		/* Void_p memPtr, uInt16 frameLen,
	   uInt16 MACNum, uChar EACbits */ );
extern void      LocalAttrNetOrder (	/* TLVParamType *param, uInt16
										 * netOrder, uInt16 ptype, uInt16
	   plen */ );
extern void      ProcessLocalTick ( /* void */ );
extern uInt32    InitFBMLocal ( /* void */ );
extern void      SendFBMMessage ( /* SMTMessage *msg */ );
extern void      FreeMessageBuffer ( /* SMTMessage *buf */ );
extern uInt32    InitFBMMessage ( /* void */ );
extern uInt32    FBMGetMIBAttr ( /* uInt16 bufSize, Void_p bufData */ );
extern uInt32    FBMMultiGetMIBAttr (	/* uInt16 bufSize, Void_p bufData,
	   TLVSetCountType *setCount */ );
extern uInt32    FBMChangeMIBAttr (		/* uInt16 bufSize, Void_p bufData,
										 * TLVSetCountType *setCount,
	   SMTStationIdType *stationID */ );
extern uInt32    LocalRAFRequest (		/* Void_p memPtr, uInt16 frameLen,
	   uInt16 MACNum, uChar EACbits */ );
extern void      LocalRAFResponse (		/* Void_p memPtr, uInt16 frameLen,
	   uInt16 MACNum, uChar EACbits */ );
extern uInt32    InitRAFLocal ( /* void */ );
extern uInt32    InitFBMTimer ( /* void */ );
extern Flag      VerifyAuthorization (	/* uChar *aBuffer, uInt16 aLen,
										 * Void_p memPtr, uInt16 frameLen,
	   uInt16 macID */ );
extern uInt16    BuildAuthorization (	/* uChar *aBuffer, SMTFrameHdrType
										 * *frameHdr, uInt16 maxLen, uInt16
	   macID */ );

#endif							/* __STDC__ */
#endif							/* __CEXTRACT__ */

#endif	/* MULTIPLE_STATION */	/* end I/F routine */
