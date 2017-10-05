
novfast.h,6015
#define __NOVFAST_H__83,2993
#define NOVCACHE_STATS 98,3206
enum NOVCACHE_REASON NOVCACHE_REASON100,3235
/* 00 */    NOVCACHE_NULL_REASON,101,3258
/* 01 */    NOVCACHE_NETWORK_ENC,102,3328
/* 02 */    NOVCACHE_NETWORK_BUMP,103,3362
/* 03 */    NOVCACHE_BRINGUP_NET,104,3397
/* 04 */    NOVCACHE_KILL_CONN_RT,105,3431
/* 05 */    NOVCACHE_BRINGDOWN_NET,106,3466
/* 06 */    NOVCACHE_NEWSTATE_DORD_PENDING,107,3502
/* 07 */    NOVCACHE_RIP_STATIC_RT,108,3546
/* 08 */    NOVCACHE_RIP_AGER_STALE,109,3582
/* 09 */    NOVCACHE_RIP_AGER_RESORT,110,3619
/* 10 */    NOVCACHE_RIP_AGER_TRIM,111,3657
/* 11 */    NOVCACHE_RIP_EQ_PATH_STALE,112,3693
/* 12 */    NOVCACHE_RIP_EQ_PATH_FASTER1,113,3733
/* 13 */    NOVCACHE_RIP_ADD_EQ_PATH,114,3775
/* 14 */    NOVCACHE_RIP_ADD_EQ_PATH_FASTER,115,3813
/* 15 */    NOVCACHE_RIP_BETTER_METRIC,116,3858
/* 16 */    NOVCACHE_RIP_WORSE_METRIC_LAST,117,3898
/* 17 */    NOVCACHE_RIP_WORSE_METRIC,118,3942
/* 18 */    NOVCACHE_RIP_BETTER_XROUTE,119,3981
/* 19 */    NOVCACHE_FLUSH,120,4021
/* 20 */    NOVCACHE_FAST_SETUP,121,4049
/* 21 */    NOVCACHE_CLEAR,122,4082
/* 22 */    NOVCACHE_IGRP_RT_DEL,123,4110
/* 23 */    NOVCACHE_IGRP_ADD_PATH,124,4144
/* 24 */    NOVCACHE_IGRP_BETTER_METRIC,125,4180
/* 25 */    NOVCACHE_IGRP_WORSE_METRIC_LAST,126,4221
/* 26 */    NOVCACHE_IGRP_WORSE_METRIC,127,4266
/* 27 */    NOVCACHE_EXTERNAL_EVENT,128,4306
/* 28 */    NOVCACHE_RIP_NEW_ROUTE,129,4343
/* 29 */    NOVCACHE_IGRP_NEW_ROUTE,130,4379
/* 30 */    NOVCACHE_NLSP_NEW_ROUTE,131,4416
/* 31 */    NOVCACHE_NLSP_BETTER_METRIC,132,4453
/* 32 */    NOVCACHE_NLSP_PATH_CHANGE,133,4494
/* 33 */    NOVCACHE_NLSP_WORSE_METRIC,134,4533
/* 34 */    NOVCACHE_NLSP_UNREACHABLE,135,4573
	    NOVCACHE_REASON_MAX136,4612
struct novpathtype_ novpathtype_139,4641
struct novcachetype_ novcachetype_173,6076
typedef novcachetype *novcache_hashtable_type[novcache_hashtable_type194,7084
static inline ulong update_lsb_tc(204,7443
static inline ulong update_msb_tc(241,8233
#define XNS_CSUM_OFFSET 290,9283
#define XNS_LEN_OFFSET 291,9338
#define XNS_TCPT_OFFSET 292,9391
#define XNS_DNET_OFFSET 293,9460
#define XNS_DHOST_OFFSET 294,9515
#define XNS_DSOCK_OFFSET 295,9571
#define XNS_SNET_OFFSET 296,9629
#define XNS_SHOST_OFFSET 297,9683
#define XNS_SSOCK_OFFSET 298,9738
#define ARPA_IPX_OFFSET 311,9981
#define ISO1_IPX_OFFSET 312,10055
#define ISO2_IPX_OFFSET 313,10128
#define FDDI_ISO1_IPX_OFFSET 320,10223
#define FDDI_ISO2_IPX_OFFSET 321,10310
#define FDDI_RAW_IPX_OFFSET 322,10398
#define TR_ISO1_IPX_OFFSET 329,10508
#define TR_ISO2_IPX_OFFSET 330,10586
#define HDLC_IPX_OFFSET 337,10688
#define FR_IPX_OFFSET 338,10757
#define FR_IETF_IPX_OFFSET 340,10874
#define	AIP_IPX_OFFSET(AIP_IPX_OFFSET346,11011
#define ARPA_ARPA_OFFSET 365,11332
#define ARPA_ISO1_OFFSET 366,11413
#define ARPA_ISO2_OFFSET 367,11493
#define ISO1_ARPA_OFFSET 373,11598
#define ISO1_ISO1_OFFSET 374,11672
#define ISO1_ISO2_OFFSET 375,11745
#define ISO2_ARPA_OFFSET 381,11843
#define ISO2_ISO1_OFFSET 382,11924
#define ISO2_ISO2_OFFSET 383,12004
#define ARPA_FDDI1_OFFSET 389,12103
#define ISO1_FDDI1_OFFSET 390,12176
#define ISO2_FDDI1_OFFSET 391,12249
#define ARPA_FDDI2_OFFSET 393,12323
#define ISO1_FDDI2_OFFSET 394,12404
#define ISO2_FDDI2_OFFSET 395,12484
#define FDDI1_ARPA_OFFSET 397,12566
#define FDDI1_ISO1_OFFSET 398,12646
#define FDDI1_ISO2_OFFSET 399,12725
#define FDDI2_ARPA_OFFSET 401,12806
#define FDDI2_ISO1_OFFSET 402,12893
#define FDDI2_ISO2_OFFSET 403,12979
#define FDDI1_FDDI1_OFFSET 405,13067
#define FDDI2_FDDI1_OFFSET 406,13146
#define FDDI1_FDDI2_OFFSET 407,13225
#define FDDI2_FDDI2_OFFSET 408,13305
#define FDDI1_TR1_OFFSET 409,13392
#define FDDI1_TR2_OFFSET 410,13470
#define FDDI2_TR1_OFFSET 411,13549
#define FDDI2_TR2_OFFSET 412,13634
#define ARPA_TR1_OFFSET 417,13736
#define ISO1_TR1_OFFSET 418,13815
#define ISO2_TR1_OFFSET 419,13887
#define ARPA_TR2_OFFSET 421,13967
#define ISO1_TR2_OFFSET 422,14040
#define ISO2_TR2_OFFSET 423,14113
#define TR1_ARPA_OFFSET 425,14187
#define TR1_ISO1_OFFSET 426,14263
#define TR1_ISO2_OFFSET 427,14338
#define TR2_ARPA_OFFSET 429,14415
#define TR2_ISO1_OFFSET 430,14498
#define TR2_ISO2_OFFSET 431,14580
#define TR1_FDDI1_OFFSET 433,14664
#define TR1_FDDI2_OFFSET 434,14739
#define TR2_FDDI1_OFFSET 435,14815
#define TR2_FDDI2_OFFSET 436,14890
#define TR1_TR1_OFFSET 438,14974
#define TR1_TR2_OFFSET 439,15048
#define TR2_TR1_OFFSET 440,15123
#define TR2_TR2_OFFSET 441,15204
#define ARPA_HDLC_OFFSET 447,15399
#define ISO1_HDLC_OFFSET 448,15467
#define ISO2_HDLC_OFFSET 449,15535
#define FDDI1_HDLC_OFFSET 451,15604
#define FDDI2_HDLC_OFFSET 452,15678
#define   TR1_HDLC_OFFSET 454,15753
#define   TR2_HDLC_OFFSET 455,15827
#define HDLC_ARPA_OFFSET 457,15902
#define HDLC_ISO1_OFFSET 458,15976
#define HDLC_ISO2_OFFSET 459,16056
#define HDLC_FDDI1_OFFSET 461,16131
#define HDLC_FDDI2_OFFSET 462,16204
#define HDLC_TR1_OFFSET 464,16286
#define HDLC_TR2_OFFSET 465,16365
#define FR_ARPA_OFFSET 467,16439
#define FR_ISO1_OFFSET 468,16510
#define FR_ISO2_OFFSET 469,16587
#define FR_FDDI1_OFFSET 471,16659
#define FR_FDDI2_OFFSET 472,16728
#define FR_TR1_OFFSET 474,16806
#define FR_TR2_OFFSET 475,16883
#define FR_IETF_ARPA_OFFSET 477,16955
#define FR_IETF_ISO1_OFFSET 478,17036
#define FR_IETF_ISO2_OFFSET 479,17123
#define FR_IETF_FDDI1_OFFSET 481,17205
#define FR_IETF_FDDI2_OFFSET 482,17284
#define FR_IETF_TR1_OFFSET 484,17372
#define FR_IETF_TR2_OFFSET 485,17459
#define AIP_ARPA_OFFSET 487,17541
#define AIP_ISO1_OFFSET 488,17608
#define AIP_ISO2_OFFSET 489,17681
#define AIP_FDDI1_OFFSET 491,17749
#define AIP_FDDI2_OFFSET 492,17815
#define AIP_TR1_OFFSET 494,17890
#define AIP_TR2_OFFSET 495,17962
#define NOVCACHE_HISTORY_MAX 515,18550
typedef struct ipx_shortlong_ ipx_shortlong_549,19911
} ipx_shortlong;ipx_shortlong554,19996
static inline boolean nov_fast_acct_do_work 556,20014
