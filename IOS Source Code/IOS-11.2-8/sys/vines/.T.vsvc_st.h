
vsvc_st.h,3433
#define VST_ERR_BADNAME	36,1174
#define VST_ERR_ORGLONG	37,1204
#define VST_ERR_DOMLONG	38,1234
#define VST_ERR_OBJLONG	39,1264
#define VST_ERR_NAMELONG	40,1294
#define VST_ERR_NOSUCHOBJ	41,1324
#define VST_ERR_INVSESHAN	42,1355
#define VST_ERR_UNKNOWN	43,1386
#define VST_OBJ_UNSPEC 46,1455
#define VST_OBJ_USER	47,1482
#define VST_OBJ_SERVICE	48,1506
#define VST_OBJ_LIST	49,1533
#define VST_OBJ_ALIAS	50,1557
#define VST_OBJ_DOMAIN	51,1582
#define VST_REC_UNKNOWN 53,1609
#define VST_REC_USER 54,1636
#define VST_REC_SERVICE 55,1662
#define VST_REC_LIST 56,1690
#define VST_REC_ALIAS 57,1716
#define VST_REC_ENUM 58,1743
#define VST_REC_LSTMEMB 59,1769
#define VST_REC_ACLREC 60,1797
#define VST_REC_ASSOCREC 61,1825
#define VST_REC_DOMREC 62,1853
#define VST_CAT_SS 64,1882
#define MAXLSTSET	66,1906
#define ENUMSET	67,1928
#define VST_CHAR_PUNCTUATION	80,2375
#define VST_CHAR_WILDCARD	81,2412
#define VST_CHAR_SEPARATOR	82,2442
#define VST_CHAR_ALLOWED	83,2473
#define VST_AREC_NONE 89,2603
#define VST_AREC_PORTS 90,2629
#define VST_AREC_DATASIZE 92,2656
#define VST_MAXTPORTS 97,2719
#define VST_SUMMARY_INTERVAL	102,2770
#define VST_EXPIRATION	103,2814
#define VST_SEARCH_INTERVAL	105,2854
#define VST_SEARCH_MAX	106,2925
#define VST_XMIT_DELAY 111,2992
#define VST_XMIT_JITTER 112,3065
#define VST_XMIT_PACING	113,3133
#define transmit_time 115,3191
#define VST_NEED_PACING 117,3224
#define VST_NEED_DELAY 118,3268
#define VST_MAX_DEST	119,3312
#define VST_MAX_HOPS	128,3567
#define VST_MISC_PRIMARY	139,3945
#define VST_MISC_PRECEDENCE	140,3977
#define VST_HIGHEST_PRECEDENCE	141,4012
#define VST_LOWEST_PRECEDENCE	142,4045
#define VST_DSEQ_INIT_VALUE	155,4493
#define VST_SUMMARY_COUNT 160,4545
#define VST_WELCOME_COUNT 161,4579
#define VST_DETAIL_COUNT 162,4628
#define VST_NEED_COUNT 163,4691
#define VST_COLDDUMP_MAX_GROUPS 164,4725
#define VST_OP_LOOKUP	172,4911
#define VST_OP_UPDATE_OBJ	173,4939
#define VST_OP_REMOVE_OBJ	174,4970
#define VST_OP_ADD_OBJ	175,5001
#define VST_OP_CREATE_DOMAIN	176,5030
#define VST_OP_CRE_DEL_DOMAIN	177,5064
#define VST_OP_ENUMERATE	178,5099
#define VST_OP_ADD_MEMBER	179,5129
#define VST_OP_DELETE_MEMBER	180,5160
#define VST_OP_MEMBERSHIP	181,5194
#define VST_OP_LIST_MEMBERS	182,5225
#define VST_OP_SET_PASSWORD	183,5258
#define VST_OP_LOGIN	184,5291
#define VST_OP_LOGOUT	185,5318
#define VST_OP_NICENAME	186,5346
#define VST_NI_SUMMARY 191,5428
#define VST_NI_DETAIL 192,5465
#define VST_NI_NEED 193,5502
#define VST_NI_WELCOME 194,5539
#define VST_NI_MAX 195,5576
enum vst_freshness vst_freshness197,5627
    VST_LOCAL,202,5747
    VST_MOVED,208,5878
    VST_CHANGED,214,6037
    VST_PERIODIC,219,6132
    VST_DUPLICATE,224,6196
    VST_OLD229,6255
typedef struct vst_groupentry_ vst_groupentry_245,6904
} vst_groupentry;vst_groupentry277,7613
typedef struct vst_msg_dest_ vst_msg_dest_283,7660
} vst_msg_dest;vst_msg_dest288,7789
typedef struct vst_aid_ vst_aid_290,7806
} vst_aid;vst_aid301,8003
typedef struct vst_handle_ vst_handle_303,8015
} vst_handle;vst_handle313,8221
#define VST_HANDLE_SHORT 315,8236
#define VST_HANDLE_NORMAL 316,8307
typedef struct vst_operation_ vst_operation_318,8364
} vst_operation;vst_operation326,8705
#define VST_OPERATION_TIME 328,8723
static inline char *vst_group2name 336,8893
static inline char *vst_make_group_name 344,9057
