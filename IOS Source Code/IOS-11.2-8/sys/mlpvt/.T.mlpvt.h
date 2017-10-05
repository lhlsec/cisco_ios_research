
mlpvt.h,2251
#define __MLPVT_H__98,3553
#define MLPVT_MAX_NAME 100,3574
#define MLPVT_MAJVERSION 110,3773
#define MLPVT_MINVERSION 111,3800
#define MLPVT_EDITVERSION 112,3827
#define MLPVT_MASTERSHIP_CLAIM	123,4062
#define MLPVT_MASTERSHIP_DECLINE	124,4100
enum mlpvtgroup_config mlpvtgroup_config126,4136
    MLPVTGROUP_NONE 127,4161
    MLPVTGROUP_NAME,128,4186
    MLPVTGROUP_MEMBER,129,4207
    MLPVTGROUP_QUERYBID_DEFAULT,130,4230
    MLPVTGROUP_QUERYBID_OFFLOAD,131,4263
    MLPVTGROUP_QUERYBID_NUM,132,4296
    MLPVTGROUP_QUERYBID_FORWARD_ONLY,133,4325
    MLPVTGROUP_PPP_FWD,134,4363
    MLPVTGROUP_SOURCE_IP135,4387
#define MLPVTGROUP_FAST_CRETRY_INTERVAL 138,4416
#define MLPVTGROUP_FAST_CRETRY 139,4458
#define MLPVTGROUP_DEFAULT_CRETRY	140,4511
#define MLPVTGROUP_SEED_BID	141,4558
#define MLPVTGROUP_CALIBRATE_BID 142,4590
#define MLPVTGROUP_AUTH_NONE	144,4645
#define MLPVTGROUP_AUTH_PAP	145,4676
#define MLPVTGROUP_AUTH_CHAP	146,4706
#define MLPVTGROUP_STATUS_CREATED	151,4755
#define MLPVTGROUP_STATUS_ACTIVE	152,4791
#define MLPVTGROUP_MEMBER_ILLEGAL	154,4827
#define MLPVTGROUP_MEMBER_IDLE	155,4863
#define MLPVTGROUP_MEMBER_WAIT_INFO	156,4897
#define MLPVTGROUP_MEMBER_ACTIVE	157,4935
#define MLPVTGROUP_MEMBER_AUTHOK 158,4970
#define SHOW_MLPVT	160,5015
#define MLPVT_NOTINIT	162,5039
#define MLPVT_IDLE	163,5064
#define MLPVT_ACTIVE	164,5086
#define MLPVT_ILLEGAL_CLASS	169,5136
#define MLPVT_HELLO_CLASS	170,5166
#define MLPVT_MQ_CLASS	171,5194
#define MLPVT_KEEPALIVE_CLASS 172,5220
#define MLPVT_MAX_CLASS	173,5254
#define MLPVT_HELLO_CHALLENGE 180,5313
#define MLPVT_HELLO_CHALLENGE_RESP 181,5353
#define MLPVT_HELLO_AUTHOK 182,5393
#define MLPVT_HELLO_INFO 183,5433
#define MLPVT_KEEPALIVE_TICKLE 188,5508
#define MLPVT_KEEPALIVE_ACK 189,5541
#define MLPVT_MAX_CHAPID 195,5610
#define MLPVT_VERSION	203,5755
#define MLPVT_MQ_SELECT	205,5783
#define MLPVT_PEER_VANISH	207,5849
#define MLPVT_NEW_PEER	208,5878
#define MLPVT_SEEDBID_DEFAULT 219,6022
#define MLPVT_SEEDBID_OFFLOAD 220,6056
#define MLPVT_SEEDBID_NUM 221,6090
#define MLPVT_SEEDBID_FORWARD_ONLY 222,6124
#define MLPVT_AUTHOK_RETRIES 227,6181
#define MLPVT_WAITINFO_RETRIES 228,6213
#define MLPVT_HELLO_TICKS 233,6286
