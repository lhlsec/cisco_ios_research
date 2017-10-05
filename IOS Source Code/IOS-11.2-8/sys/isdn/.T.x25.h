
x25.h,11091
#define CF_PKT_DTE_REJ 66,2425
#define CF_FAC_PKT_SIZE 67,2469
#define CF_FAC_WIN_SIZE 68,2513
#define CF_FAC_THRU_PUT 69,2557
#define CF_FAC_CUG 70,2601
#define CF_FAC_RCFS 71,2645
#define CF_FAC_NUI_SEL 72,2689
#define CF_FAC_CHRG_INFO_REQ 73,2733
#define CF_FAC_CHRG_INFO_SEG 74,2777
#define CF_FAC_CHRG_INFO_DUR 75,2821
#define CF_FAC_RPOA 76,2865
#define CF_FAC_CALL_DEF 77,2909
#define CF_FAC_CALL_RED_DEF_NTFY 78,2953
#define CF_FAC_ADD_MOD_NTFY 79,2997
#define CF_FAC_TRNST_DLY_IND 80,3041
#define CF_FAC_MARKER 81,3085
#define CF_FAC_STATE_P1 82,3129
#define CF_FAC_ANY_TIME 83,3173
#define CF_FAC_LCN_RNG 84,3217
#define ERR_PKT_UNIDENT 88,3296
#define ERR_PKT_BAD_GFI 89,3341
#define CALL_REQUEST 93,3440
#define INCOMING_CALL 94,3514
#define CALL_ACCEPTED 95,3558
#define CALL_CONNECTED 96,3602
#define CLEAR_REQUEST 97,3646
#define CLEAR_IND 98,3690
#define DTE_CLEAR_CONF 99,3734
#define DCE_CLEAR_CONF 100,3778
#define DTE_DATA 101,3822
#define DCE_DATA 102,3896
#define DTE_INT 103,3940
#define DCE_INT 104,3984
#define DTE_INT_CONF 105,4028
#define DCE_INT_CONF 106,4072
#define DTE_RR 107,4116
#define DCE_RR 108,4190
#define DTE_RNR 109,4234
#define DCE_RNR 110,4278
#define DTE_REJ 111,4322
#define RESET_REQUEST 112,4396
#define RESET_IND 113,4470
#define DTE_RESET_CONF 114,4515
#define DCE_RESET_CONF 115,4560
#define RESTART_REQUEST 116,4605
#define RESTART_IND 117,4679
#define DTE_RESTART_CONF 118,4724
#define DCE_RESTART_CONF 119,4769
#define DIAGNOSTIC 120,4814
#define REG_REQUEST 121,4888
#define REG_CONF 122,4962
#define CLR_CAUSE_DTE_ORIGINATED 126,5046
#define CLR_CAUSE_NUMBER_BUSY 127,5093
#define CLR_CAUSE_OUT_OF_ORDER 128,5140
#define CLR_CAUSE_REMOTE_PROC_ERROR 129,5187
#define CLR_CAUSE_REV_CHRG_ACCPT_NOT_SUB 130,5234
#define CLR_CAUSE_INCOMPATIBLE_DEST 131,5281
#define CLR_CAUSE_FAST_SEL_ACCPT_NOT_SUB 132,5328
#define CLR_CAUSE_SHIP_ABSENT 133,5375
#define CLR_CAUSE_INVALID_FAC_REQ 134,5422
#define CLR_CAUSE_ACCESS_BARRED 135,5469
#define CLR_CAUSE_LOCAL_PROC_ERROR 136,5516
#define CLR_CAUSE_NETWORK_CONGEST 137,5563
#define CLR_CAUSE_NOT_OBTAINABLE 138,5610
#define CLR_CAUSE_RPOA_OUT_OF_ORDER 139,5657
#define RST_CAUSE_DTE_ORIGINATED 143,5744
#define RST_CAUSE_OUT_OF_ORDER 144,5791
#define RST_CAUSE_REMOTE_PROC_ERROR 145,5838
#define RST_CAUSE_LOCAL_PROC_ERROR 146,5885
#define RST_CAUSE_NETWORK_CONGEST 147,5932
#define RST_CAUSE_REMOTE_DTE_OPER 148,5979
#define RST_CAUSE_NETWORK_OPER 149,6026
#define RST_CAUSE_INCOMPATIBLE_DEST 150,6073
#define RST_CAUSE_NEWORK_OUT_OF_ORDER 151,6120
#define RSTRT_CAUSE_LOCAL_PROC_ERROR 155,6205
#define RSTRT_CAUSE_NETWORK_CONGEST 156,6252
#define RSTRT_CAUSE_NETWORK_OPER 157,6299
#define RSTRT_CAUSE_REG_CANC_CONF 158,6346
#define REG_CAUSE_CANCEL_CONF 162,6448
#define REG_CAUSE_INVALID_FAC_REQ 163,6495
#define REG_CAUSE_LOCAL_PROC_ERROR 164,6542
#define REG_CAUSE_NETWORK_CONGEST 165,6589
#define DIAG_G1_NO_ADD_INFO 169,6676
#define DIAG_G1_INVALID_PS 170,6720
#define DIAG_G1_INVALID_PR 171,6764
#define DIAG_G2_PKT_INVALID 172,6808
#define DIAG_G2_STATE_R1 173,6853
#define DIAG_G2_STATE_R2 174,6898
#define DIAG_G2_STATE_R3 175,6943
#define DIAG_G2_STATE_P1 176,6988
#define DIAG_G2_STATE_P2 177,7033
#define DIAG_G2_STATE_P3 178,7078
#define DIAG_G2_STATE_P4 179,7123
#define DIAG_G2_STATE_P5 180,7168
#define DIAG_G2_STATE_P6 181,7213
#define DIAG_G2_STATE_P7 182,7258
#define DIAG_G2_STATE_D1 183,7303
#define DIAG_G2_STATE_D2 184,7348
#define DIAG_G2_STATE_D3 185,7393
#define DIAG_G3_PKT_NOT_ALLWD 186,7438
#define DIAG_G3_UNIDENT_PKT 187,7483
#define DIAG_G3_CALL_ON_ONE_WAY_CHAN 188,7528
#define DIAG_G3_INVALID_PKT_ON_PVC 189,7573
#define DIAG_G3_PKT_ON_UNASSGND_CHAN 190,7618
#define DIAG_G3_REJ_NOT_SUB 191,7663
#define DIAG_G3_PKT_TOO_SHORT 192,7708
#define DIAG_G3_PKT_TOO_LONG 193,7753
#define DIAG_G3_INVAILD_GFI 194,7798
#define DIAG_G3_BAD_NON_ZERO_BITS 195,7843
#define DIAG_G3_PKT_NOT_COMPAT 196,7888
#define DIAG_G3_UNAUTH_INT_CONF 197,7933
#define DIAG_G3_UNAUTH_INT 198,7978
#define DIAG_G3_UNAUTH_REJ 199,8023
#define DIAG_G4_TIME_EXP 200,8068
#define DIAG_G4_TIME_EXP_INC_CALL 201,8113
#define DIAG_G4_TIME_EXP_CLR_IND 202,8158
#define DIAG_G4_TIME_EXP_RST_IND 203,8203
#define DIAG_G4_TIME_EXP_RSRT_IND 204,8248
#define DIAG_G4_TIME_EXP_CALL_DEF 205,8293
#define DIAG_G5_SETUP_CLR_REG_PROB 206,8338
#define DIAG_G5_FAC_REG_CODE_NOT_ALLWD 207,8383
#define DIAG_G5_FAC_PARAM_NOT_ALLWD 208,8428
#define DIAG_G5_INVALID_CALLED_DTE 209,8473
#define DIAG_G5_INVALID_CALLING_DTE 210,8518
#define DIAG_G5_INVALID_FAC_REG_LEN 211,8563
#define DIAG_G5_INC_CALL_BARRED 212,8608
#define DIAG_G5_NO_CHAN_AVAIL 213,8653
#define DIAG_G5_CALL_COLL 214,8698
#define DIAG_G5_DUP_FAC_REQ 215,8743
#define DIAG_G5_NON_ZERO_ADD_LEN 216,8788
#define DIAG_G5_NON_ZERO_FAC_LEN 217,8833
#define DIAG_G5_FAC_NOT_PROVIDED 218,8878
#define DIAG_G5_INVALID_DTE_FAC 219,8923
#define DIAG_G5_MAX_RED_DEF_EXCEED 220,8968
#define DIAG_G6_MISC 221,9013
#define DIAG_G6_IMPROPER_CAUSE 222,9058
#define DIAG_G6_NOT_ALIGNED_OCTET 223,9103
#define DIAG_G6_INCONSISTENT_Q_BIT 224,9148
#define DIAG_G6_NUI_PROB 225,9193
#define DIAG_G7_NOT_ASSIGNED 226,9238
#define DIAG_G8_INTL_PROB 227,9283
#define DIAG_G8_REM_NETWORK_PROB 228,9329
#define DIAG_G8_INTL_PROT_PROB 229,9375
#define DIAG_G8_INTL_LINK_OUT_OF_ORDER 230,9421
#define DIAG_G8_INTL_LINK_BUSY 231,9467
#define DIAG_G8_TRAN_NETWORK_FAC_PROB 232,9513
#define DIAG_G8_REM_NETWORK_FAC_PROB 233,9559
#define DIAG_G8_INTL_ROUTE_PROB 234,9605
#define DIAG_G8_TMP_ROUTE_PROB 235,9651
#define DIAG_G8_UNKN_CALLED_DNIC 236,9697
#define DIAG_G8_MAINT_ACTION 237,9743
#define DIAG_G0_RESEVED 238,9789
#define CLASS_A 243,9923
#define CLASS_B 244,9970
#define CLASS_C 245,10017
#define CLASS_D 246,10064
#define FAC_PKT_SIZE 250,10133
#define FAC_WIN_SIZE 251,10190
#define FAC_THRU_PUT 252,10247
#define FAC_CUG 253,10304
#define FAC_EXT_CUG 254,10361
#define FAC_CUGWOA 255,10418
#define FAC_EXT_CUGWOA 256,10475
#define FAC_BCUG 257,10532
#define FAC_REV_CHRG 258,10589
#define FAC_NUI_SEL 259,10646
#define FAC_CHRG_INFO_REQ 260,10703
#define FAC_CHRG_INFO_SEG 261,10760
#define FAC_CHRG_INFO_DUR 262,10817
#define FAC_RPOA 263,10874
#define FAC_EXT_RPOA 264,10931
#define FAC_CALL_DEFLECT 265,10988
#define FAC_CALL_RED_DEF_NTFY 266,11045
#define FAC_ADD_MOD_NTFY 267,11102
#define FAC_TRNST_DLY_IND 268,11159
#define FAC_MARKER 269,11216
#define REG_STATE_P1 273,11286
#define REG_ANY_TIME 274,11343
#define REG_AVAILABILITY 275,11400
#define REG_NON_NEG 276,11457
#define REG_THRU_PUT 277,11514
#define REG_PKT_SIZE 278,11571
#define REG_WIN_SIZE 279,11628
#define REG_LCN_RNG 280,11685
#define CUG_NONE 284,11773
#define CUG_BASIC 285,11817
#define CUG_WOA 286,11861
#define CUG_BILAT 287,11905
#define x25upfPktSizeOut(x25upfPktSizeOut311,12780
#define x25upfPktSizeInc(x25upfPktSizeInc312,12848
#define x25upfWinSizeOut(x25upfWinSizeOut313,12916
#define x25upfWinSizeInc(x25upfWinSizeInc314,12967
#define x25upfThruPutOut(x25upfThruPutOut315,13018
#define x25upfThruPutInc(x25upfThruPutInc316,13087
#define x25upfCUG(x25upfCUG317,13158
#define x25upfExtCUG(x25upfExtCUG318,13225
#define x25upfCUGWOA(x25upfCUGWOA319,13292
#define x25upfExtCUGWOA(x25upfExtCUGWOA320,13359
#define x25upfExtBCUG(x25upfExtBCUG321,13426
#define x25upfRCFSRevChr(x25upfRCFSRevChr322,13493
#define x25upfRCFSRestrict(x25upfRCFSRestrict323,13554
#define x25upfRCFSFastSel(x25upfRCFSFastSel324,13615
#define x25upfNUISelLen(x25upfNUISelLen325,13676
#define x25upfNUISelPtr(x25upfNUISelPtr326,13727
#define x25upfChrgInfoReq(x25upfChrgInfoReq327,13777
#define x25upfChrgInfoSegPeriods(x25upfChrgInfoSegPeriods328,13838
#define x25upfChrgInfoSegSent(x25upfChrgInfoSegSent329,13889
#define x25upfChrgInfoSegRcvd(x25upfChrgInfoSegRcvd330,13964
#define x25upfChrgInfoDurPeriods(x25upfChrgInfoDurPeriods331,14039
#define x25upfChrgInfoDurDays(x25upfChrgInfoDurDays332,14090
#define x25upfChrgInfoDurHours(x25upfChrgInfoDurHours333,14165
#define x25upfChrgInfoDurMins(x25upfChrgInfoDurMins334,14240
#define x25upfChrgInfoDurSecs(x25upfChrgInfoDurSecs335,14315
#define x25upfRPOA(x25upfRPOA336,14390
#define x25upfExtRPOANetworks(x25upfExtRPOANetworks337,14457
#define x25upfExtRPOAid(x25upfExtRPOAid338,14508
#define x25upfCallDefReason(x25upfCallDefReason339,14583
#define x25upfCallDefAddStr(x25upfCallDefAddStr340,14634
#define x25upfCallRedDefNtfyReason(x25upfCallRedDefNtfyReason341,14709
#define x25upfCallRedDefNtfyAddStr(x25upfCallRedDefNtfyAddStr342,14760
#define x25upfAddModNtfy(x25upfAddModNtfy343,14835
#define x25upfTrnstDlyInd(x25upfTrnstDlyInd344,14886
#define x25uprStateP1SeqNum(x25uprStateP1SeqNum352,15173
#define x25uprStateP1ReXmt(x25uprStateP1ReXmt353,15234
#define x25uprStateP1DbitMod(x25uprStateP1DbitMod354,15295
#define x25uprAnyTimeChginfo(x25uprAnyTimeChginfo355,15356
#define x25uprAnyTimeThruputneg(x25uprAnyTimeThruputneg356,15417
#define x25uprAnyTimeFlowneg(x25uprAnyTimeFlowneg357,15478
#define x25uprAnyTimeRevchgacp(x25uprAnyTimeRevchgacp358,15539
#define x25uprAnyTimeFastselacp(x25uprAnyTimeFastselacp359,15600
#define x25uprAnyTimeNooutcall(x25uprAnyTimeNooutcall360,15661
#define x25uprAnyTimeNoinccall(x25uprAnyTimeNoinccall361,15722
#define x25uprAvailRevChrg(x25uprAvailRevChrg362,15783
#define x25uprAvailRevChrgAcpt(x25uprAvailRevChrgAcpt363,15844
#define x25uprAvailChrgInfoPerCall(x25uprAvailChrgInfoPerCall364,15905
#define x25uprAvailChrgInfoPerInt(x25uprAvailChrgInfoPerInt365,15966
#define x25uprAvailCldLineAddrModNtfy(x25uprAvailCldLineAddrModNtfy366,16027
#define x25uprAvailDBitMod(x25uprAvailDBitMod367,16088
#define x25uprAvailPktReXmt(x25uprAvailPktReXmt368,16149
#define x25uprAvailExtPktSeqNum(x25uprAvailExtPktSeqNum369,16210
#define x25uprAvailRPOASel(x25uprAvailRPOASel370,16271
#define x25uprAvailLCNTypeRanges(x25uprAvailLCNTypeRanges371,16332
#define x25uprAvailNonStdDefPktSiz(x25uprAvailNonStdDefPktSiz372,16393
#define x25uprAvailNonStdDefWindSiz(x25uprAvailNonStdDefWindSiz373,16454
#define x25uprAvailDefThruputClassAsgn(x25uprAvailDefThruputClassAsgn374,16515
#define x25uprNonNegLocChrgPrev(x25uprNonNegLocChrgPrev375,16576
#define x25uprThruPutOut(x25uprThruPutOut376,16637
#define x25uprThruPutInc(x25uprThruPutInc377,16706
#define x25uprPktSizeOut(x25uprPktSizeOut378,16777
#define x25uprPktSizeInc(x25uprPktSizeInc379,16845
#define x25uprWinSizeOut(x25uprWinSizeOut380,16913
#define x25uprWinSizeInc(x25uprWinSizeInc381,16964
#define x25uprLcnRngLic(x25uprLcnRngLic382,17015
#define x25uprLcnRngHic(x25uprLcnRngHic383,17078
#define x25uprLcnRngLtc(x25uprLcnRngLtc384,17141
#define x25uprLcnRngHtc(x25uprLcnRngHtc385,17204
#define x25uprLcnRngLoc(x25uprLcnRngLoc386,17267
#define x25uprLcnRngHoc(x25uprLcnRngHoc387,17332
#define x25uprLcnRngNum(x25uprLcnRngNum388,17397
