
ibmnm.h,18475
#define IBMNM_DEBUG75,2745
typedef uchar cookie_t;cookie_t77,2766
typedef struct _ibmnm_vector _ibmnm_vector84,2998
} ibmnm_vector;ibmnm_vector88,3091
#define ibmnm_vector_headstart(ibmnm_vector_headstart90,3108
#define IBMNM_SAP	92,3168
#define IBMNM_MVID_LEN 93,3193
#define IBMNM_SPECIFIC 94,3220
#define IBMNM_ATOMIC 95,3252
#define SERVER_MASK	102,3459
#define REM_SERVER	103,3490
#define RPS_SERVER	104,3520
#define CRS_SERVER	105,3550
#define CNV_SERVER	106,3580
#define LBS_SERVER	107,3610
#define LRM_SERVER	108,3640
#define ALT_SERVER	109,3670
#define COMMAND_MASK	110,3700
#define REM_REQ_STATUS	112,3733
#define REM_REP_STATUS	113,3782
#define REM_SET_PARAM	114,3831
#define REM_PARAM_SET	115,3879
#define REM_PARAM_CHANGED 116,3927
#define REM_ERROR_DECAY	117,3977
#define REM_PREWEIGH_EXC 118,4027
#define REM_WEIGHT_EXC	119,4077
#define REM_NONISO_THRESH 120,4126
#define REM_FORWARD	121,4176
#define REM_ERROR	122,4207
#define REM_RCVR_CNG	123,4251
#define REM_RCVR_CNG_END 124,4298
#define REM_BEACONING	125,4348
#define REM_BEACONEND	126,4396
#define REM_LAST	127,4444
#define RPS_REQ_STATUS	129,4475
#define RPS_REP_STATUS	130,4524
#define RPS_ERROR	131,4573
#define RPS_REP_STATION	132,4617
#define RPS_LAST	133,4667
#define CRS_REP_NEWMON	135,4698
#define CRS_REP_NAUN_CHG 136,4747
#define CRS_REP_XMIT_FWD 137,4797
#define CRS_REQ_STA_INFO 138,4847
#define CRS_REP_STA_INFO 139,4897
#define CRS_SET_STATION	140,4947
#define CRS_STATION_SET	141,4997
#define CRS_REMOVE_STA	142,5047
#define CRS_STA_REMOVED	143,5096
#define CRS_ERROR	144,5146
#define CRS_LAST	145,5190
#define CNV_PRESENT	147,5221
#define CNV_BEACONING	148,5267
#define CNV_LAST	149,5315
#define LBS_REQ_STATUS	151,5346
#define LBS_REP_STATUS	152,5395
#define LBS_SET_PARAM	153,5444
#define LBS_PARAM_SET	154,5492
#define LBS_ERROR	155,5540
#define LBS_PARAM_CHANGED 156,5584
#define LBS_PERF_THRESH	157,5634
#define LBS_TRACE_REP	158,5684
#define LBS_COUNTER_REP	159,5732
#define LBS_SPAN_STATUS	160,5782
#define LBS_LAST	161,5832
#define LRM_PARSE_ERROR	163,5861
#define LRM_REQ_STATUS	164,5911
#define LRM_REP_STATUS	165,5960
#define LRM_SET_PARAM	166,6009
#define LRM_PARAM_SET	167,6057
#define LRM_ERROR	168,6105
#define LRM_PARAM_CHANGED 169,6149
#define LRM_SET_REP_PNT	170,6199
#define LRM_MGR_ACCEPT	171,6249
#define LRM_MGR_REJECT	172,6298
#define LRM_REP_MGR_REJECT 173,6347
#define LRM_REP_NEW_LINK 174,6397
#define LRM_REP_CNTL_SHIFT 175,6447
#define LRM_REP_CNTL_BREACH 176,6497
#define LRM_CLOSE_LINK	177,6547
#define LRM_TERMINATING	178,6596
#define LRM_INVALID	179,6646
#define LRM_SET_REP_ERR	180,6692
#define LRM_CONGESTION	181,6742
#define LRM_SRVRS_PRESENT 182,6791
#define LRM_LAST	183,6841
#define ALERT_TRANS	185,6885
#define ALERT_TRANS_REC	186,6916
#define ALERT_LAST	187,6951
#define IBMNM_CORRELATOR 194,7159
#define IBMNM_ADDRESS	195,7194
#define IBMNM_NAUN	196,7227
#define IBMNM_LOCATION	197,7257
#define IBMNM_RING	198,7291
#define IBMNM_ERROR	199,7321
#define IBMNM_ALL	200,7352
#define IBMNM_ERRCODE	201,7381
#define IBMNM_ERROFFSET	202,7414
#define IBMNM_PRODUCTID	203,7449
#define IBMNM_VERSION	204,7484
#define   VERSIONLEN 205,7517
#define   BRIDGEVERSIONLEN 206,7551
#define IBMNM_PERMANENT	207,7585
#define   PERMANENT 208,7620
#define REM_SV_NOTIF_ENABLE	218,7862
#define   ENA_NOT_WEIGHT	219,7899
#define   ENA_NOT_PREWEIGHT	220,7935
#define   ENA_NOT_NONISO_THRESH	221,7974
#define   ENA_NOT_FORWARD	222,8017
#define   ENA_INT_RING	223,8054
#define   ENA_INT_AUTO	224,8089
#define REM_SV_NONISO_NOTIF	225,8124
#define REM_SV_INTEN_DATA	226,8161
#define REM_SV_ISO_TABLE	227,8196
#define REM_SV_ISOL_STATUS	228,8230
#define REM_SV_FAULT_DOM	229,8266
#define REM_SV_RESET	230,8300
#define REM_SV_SOFT_ERR_REPT	231,8331
#define REM_SV_NNIF_REPT	232,8369
#define REM_SV_MON_ERR_REPT	233,8403
#define REM_SV_RING_STATUS	234,8440
#define REM_SV_RING_STATUS_A	235,8476
#define REM_SV_BEACON_DATA	236,8514
#define REM_SV_LOST_FRAMES	237,8550
#define REM_SV_RCVR_CONGESTION	238,8586
#define REM_SV_FC_ERRORS	239,8626
#define REM_SV_FREQ_ERRORS	240,8660
#define REM_SV_TOKEN_ERRORS	241,8696
#define REM_SV_RESERVED_ERRORS	242,8733
#define REM_SV_TABLE_FULL_ERRORS 243,8773
#define REM_SV_MIN_DEC_ERRORS	244,8814
#define REM_SV_DEC_INTERVL	245,8853
#define REM_SV_BEACON_TYPE	246,8889
#define REM_SV_RING_STATE	247,8925
#define   RS_NORMAL	248,8960
#define   RS_TMP_BCN_PREMPT	249,8992
#define   RS_TMP_BCN_UNIMP	250,9031
#define   RS_TMP_BCN_BOTH_PRES	251,9069
#define   RS_TMP_BCN_ONE_PRES	252,9111
#define   RS_TMP_BCN_NONE_PRES	253,9152
#define   RS_PRM_BCN	254,9194
#define REM_SV_ENTRIES	255,9227
#define REM_SV_RECEIVER	256,9260
#define REM_SV_TRANSMITTER	257,9294
#define REM_SV_RING_INTEN	258,9330
#define REM_SV_AUTO_INTEN	259,9365
#define   REM_MM_I_LINE	260,9400
#define   REM_MM_I_INTERNAL 261,9436
#define   REM_MM_I_BURST 262,9472
#define   REM_MM_I_AC	263,9508
#define   REM_MM_I_ABORTS 264,9542
#define   REM_MM_N_LOSTFRAME 265,9578
#define   REM_MM_N_RCVRCONG 266,9614
#define   REM_MM_N_FC 267,9650
#define   REM_MM_N_FREQ 268,9686
#define   REM_MM_N_TOKEN 269,9722
#define REM_SV_FLAGS	270,9758
#define REM_SV_WEIGHT	271,9789
#define REM_SV_RCVR_CONG_TBL_FULL 272,9821
#define REM_SV_ISO_COUNTS	273,9862
#define REM_SV_NONISO_COUNTS	274,9897
#define REM_B_CORRELATOR	280,10079
#define REM_B_RING	281,10115
#define REM_B_NOTIF_ENABLE	282,10146
#define REM_B_INTEN_DATA	283,10184
#define REM_B_ISOLATING_TABLE	284,10220
#define REM_B_RING_STATUS_A	285,10261
#define REM_B_RESET	286,10300
#define REM_B_ID_RING	288,10333
#define REM_B_ID_AUTO	289,10367
#define REM_B_TOP_MASK	291,10402
#define REM_B_ID_MASK	292,10437
#define REM_R_REQ_STATUS	297,10516
#define REM_O_REQ_STATUS	298,10571
#define REM_R_SET_PARAM	301,10725
#define REM_O_SET_PARAM	302,10780
typedef struct rem_pb_ rem_pb_307,10946
} rem_pb;rem_pb317,11183
typedef struct iso_tbl_header_ iso_tbl_header_322,11247
} iso_tbl_header;iso_tbl_header327,11356
typedef struct iso_tbl_entry_ iso_tbl_entry_329,11375
} iso_tbl_entry;iso_tbl_entry341,11643
typedef struct iso_tbl_vector_ iso_tbl_vector_343,11661
} iso_tbl_vector;iso_tbl_vector346,11750
#define ISO_T_WEIGHT 348,11769
#define ISO_T_PREWEIGHT 349,11798
#define RPS_SV_TIMER	359,12038
#define RPS_SV_UCODE	360,12067
#define RPS_SV_STATUS	361,12096
#define   RPS_STAT_OK 362,12126
#define   RPS_STAT_NACK 363,12156
#define   RPS_STAT_NO_RESP 364,12186
#define RPS_B_NONE 370,12360
#define RPS_B_CORRELATOR	371,12397
#define RPS_B_RING	372,12433
#define RPS_B_ALL	373,12464
#define RPS_R_REQ_STATUS 378,12539
#define RPS_O_REQ_STATUS	379,12613
typedef struct rps_pb_ rps_pb_384,12689
} rps_pb;rps_pb388,12773
#define CRS_SV_STATUS	397,12993
#define   CRS_STAT_REMOVED	398,13023
#define   CRS_STAT_NOT_REMOVED	399,13056
#define CRS_SV_ADDRESS_INFO	400,13093
#define CRS_SV_ADDRESS_INFO_A	401,13128
#define CRS_SV_STATE_INFO	402,13165
#define CRS_SV_STATE_INFO_A	403,13198
#define CRS_SV_ATTACH_INFO	404,13233
#define CRS_SV_ATTACH_INFO_A 405,13267
#define CRS_SV_STATION_ERR	406,13306
#define CRS_SV_GROUP	407,13340
#define CRS_SV_FUNCTIONAL	408,13369
#define CRS_SV_UCODE_LEVEL	409,13402
#define CRS_SV_STA_STATUS	410,13436
#define CRS_SV_UNIQUE_ID	411,13469
#define CRS_SV_ENABLED_FUNC	412,13501
#define CRS_SV_ALLOW_PRIO	413,13536
#define CRS_SV_REASON	414,13569
#define   CRS_REASON_NOT_RECOG	415,13599
#define   CRS_REASON_NOT_COPIED	416,13636
#define   CRS_REASON_TIMEOUT	417,13674
#define   CRS_REASON_NACK	418,13709
#define   CRS_REASON_BEACONING	419,13741
#define   CRS_REASON_NONE 420,13778
#define CRS_SV_RESPONSE	421,13816
#define CRS_SV_SOFTERR	422,13848
#define CRS_SV_STATUSCODE	423,13879
#define CRS_SV_LOCALRING	424,13912
#define CRS_B_NONE 430,14088
#define CRS_B_CORRELATOR	431,14125
#define CRS_B_ADDRESS	432,14161
#define CRS_B_RING	433,14195
#define CRS_B_ALL	434,14226
#define CRS_B_LOCATION 435,14256
#define CRS_B_ADDRESS_INFO 437,14293
#define CRS_B_STATE_INFO	438,14336
#define CRS_B_ATTACH_INFO	439,14372
#define CRS_B_SOFTERR	440,14409
#define CRS_B_ENABLED_FUNC 441,14445
#define CRS_B_ALLOW_PRIO 442,14485
#define CRS_B_LOCALRING 443,14523
#define CRS_R_REQ_STA_INFO 448,14606
#define CRS_O_REQ_STA_INFO	449,14684
#define CRS_R_SET_STATION	451,14787
#define CRS_O_SET_STATION	452,14859
#define CRS_R_REMOVE_STA	455,14986
#define CRS_O_REMOVE_STA	456,15057
typedef struct crs_pb_ crs_pb_461,15145
} crs_pb;crs_pb474,15441
struct crs_data_ crs_data_480,15580
#define LBS_SV_TYPE	500,16046
#define   BRIDGE_TR_TR 501,16074
#define   BRIDGE_ETHER_ETHER	502,16116
#define   BRIDGE_ETHER_TR 503,16155
#define   BRIDGE_LOCAL 504,16197
#define   BRIDGE_REMOTE 505,16239
#define LBS_SV_PORTS	506,16281
#define LBS_SV_PORT_INFO	507,16310
#define LBS_SV_PORT_TYPE	508,16342
#define   PORT_RING_STATION	509,16374
#define LBS_SV_RING_STATUS	510,16412
#define   RING_OPERATIONAL 511,16446
#define   RING_BEACONING 512,16486
#define LBS_SV_ADAPTER_STATUS	513,16526
#define   ADAPTER_ATTACHED 514,16563
#define   ADAPTER_NOT_ATTACHED 515,16605
#define LBS_SV_RTE_ACTIVE	516,16647
#define LBS_SV_FRAME_DISC	517,16680
#define LBS_SV_LOSS_THRESH	518,16713
#define LBS_SV_B_FR_TRANS	519,16765
#define LBS_SV_NOTIF_INTERVAL	520,16798
#define LBS_SV_ROUTE_STATUS	521,16853
#define LBS_SV_ROUTE_IDENT	522,16888
#define LBS_SV_PORT_IDENT1	523,16922
#define LBS_SV_PORT_IDENT2	524,16956
#define LBS_SV_BR_IDENT	525,16990
#define LBS_SV_SRTE_ENABLED	526,17022
#define LBS_SV_HOP_COUNT	527,17057
#define LBS_SV_LARGEST_FR	528,17089
#define LBS_SV_FORW_ADDR	529,17122
#define LBS_SV_FORW_LEN	530,17154
#define LBS_SV_FORW_DATA	531,17186
#define LBS_SV_PERC_FR_LOST	532,17218
#define LBS_SV_PART_BITS	533,17253
#define LBS_SV_FR_NOT_REC	534,17285
#define LBS_SV_T_FR_DISC	535,17318
#define LBS_SV_FR_NOT_FORW	536,17350
#define LBS_SV_T_B_FR_TRANS	537,17384
#define LBS_SV_PATH_TRACE	538,17419
#define LBS_SV_B_BY_TRANS	539,17452
#define LBS_SV_T_NB_FR_TRANS	540,17485
#define LBS_SV_NB_FR_TRANS	541,17521
#define LBS_SV_T_FR_NOT_REC	542,17555
#define LBS_SV_NB_BY_TRANS	543,17590
#define LBS_SV_T_FR_NOT_FORW	544,17624
#define LBS_SV_FORW_STRIP	545,17660
#define LBS_SV_INTERNAL_STATUS	546,17693
#define LBS_SV_CALC_INT	547,17731
#define LBS_SV_T_B_BY_TRANS	548,17781
#define LBS_SV_T_NB_BY_TRANS	549,17816
#define LBS_SV_FRAME_DISC_L	550,17852
#define LBS_SV_FR_NOT_REC_L	551,17887
#define LBS_SV_FR_NOT_FORW_L	552,17922
#define LBS_SV_DATA_RATE	553,17958
#define   DATA_RATE_2	554,17990
#define   DATA_RATE_4	555,18022
#define   DATA_RATE_16	556,18054
#define LBS_SV_FR_DISC_INT	557,18087
#define LBS_SV_T_FR_DISC_INT	558,18121
#define LBS_SV_SRTE_MODE	559,18157
#define LBS_SV_BY_DISC_INT	560,18189
#define LBS_SV_ALL_LONG	561,18223
#define LBS_SV_FR_NOT_ROUTED	562,18255
#define LBS_SV_T_FR_NOT_ROUTED	563,18291
#define LBS_B_CORRELATOR	569,18473
#define LBS_B_ALL	570,18509
#define LBS_B_TEMP	571,18539
#define LBS_B_ALL_LONG	572,18570
#define LBS_B_NOTIF_INTERVAL	573,18605
#define LBS_B_LOSS_THRESH	574,18645
#define LBS_B_PORT_INFO	575,18682
#define LBS_B_ROUTE_STATUS	576,18718
#define LBS_B_INTERNAL_STATUS	577,18756
#define LBS_B_PORT_IDENT	579,18798
#define LBS_B_SRTE_ENABLED	580,18834
#define LBS_B_HOP_COUNT	581,18872
#define LBS_B_ROUTE_IDENT	583,18909
#define LBS_B_RTE_ACTIVE	584,18946
#define LBS_B_BR_IDENT	585,18982
#define LBS_B_SRTE_MODE	586,19017
#define LBS_B_LARGEST_FR	587,19053
#define LBS_B_PORT_IDENT1	589,19090
#define LBS_B_PORT_IDENT2	590,19127
#define LBS_B_TOP_MASK	592,19165
#define LBS_B_PORT_MASK	593,19207
#define LBS_B_ROUTE_MASK 594,19250
#define LBS_B_ROUTEID_MASK 595,19293
#define LBS_B_SRTE_MUTEXC	597,19337
#define LBS_R_REQ_STATUS 602,19419
#define LBS_O_REQ_STATUS	603,19468
#define LBS_R_SET_PARAM 605,19521
#define LBS_O_SET_PARAM	606,19570
#define LBS_PI_RING	617,19972
#define LBS_PI_TYPE	618,20005
#define LBS_PI_STATUS	619,20038
#define LBS_PI_HOP_COUNT 620,20073
#define LBS_PI_SET1	621,20110
#define LBS_PI_SET2	622,20143
#define LBS_PI_SRTE_ENA	623,20176
#define LBS_PI_COUNTERS_LONG 624,20213
#define LBS_PI_COUNTERS_SHORT 625,20250
#define LBS_PI_REP_STATUS 628,20289
#define LBS_PI_REP_STATUS_A 630,20423
#define LBS_PI_REP_STATUS_AL 633,20592
#define LBS_PI_SET_PARAM 636,20760
#define LBS_PI_PARAM_CHANGED 637,20826
#define LBS_PI_PERF_THRESH 638,20891
#define LBS_PI_TRACE_REP 639,20947
#define LBS_PI_COUNTER_REP 640,21010
#define LBS_PI_SPAN_STATUS 642,21124
#define LBS_RTE_REP_STATUS 644,21171
#define LBS_RTE_SET_PARAM 646,21283
#define LBS_RTE_PARAM_CHANGED 647,21365
#define LBS_RTE_TRACE_REP 648,21447
typedef struct lbs_pi_pb_ lbs_pi_pb_653,21582
} lbs_pi_pb;lbs_pi_pb657,21732
typedef struct lbs_rte_pb_ lbs_rte_pb_659,21746
} lbs_rte_pb;lbs_rte_pb665,21970
typedef struct lbs_pb_ lbs_pb_667,21985
} lbs_pb;lbs_pb681,22286
#define LRM_SV_ERROR_MVID	690,22506
#define LRM_SV_NUM_ALT_LM	691,22539
#define LRM_SV_LINK_INFO	692,22572
#define LRM_SV_LINK_ID	693,22604
#define LRM_SV_PORT_INFO	694,22636
#define LRM_SV_REP_CLASS	695,22668
#define LRM_SV_AVAIL_CLASS	696,22700
#define LRM_SV_ACTIVE_CLASS	697,22734
#define LRM_SV_REJECT_CODE	698,22769
#define   LRM_REJ_BAD_KEY 699,22803
#define   LRM_REJ_INUSE 700,22836
#define   LRM_REJ_BAD_LINKNO 701,22869
#define   LRM_REJ_CANT_ESTAB 702,22902
#define   LRM_REJ_CROSSES_ME 703,22935
#define LRM_SV_KEY	704,22968
#define LRM_SV_NEW_KEY	705,22995
#define LRM_SV_ROUTING	706,23027
#define LRM_SV_STATUS_CODE	707,23059
#define LRM_SV_CNTL_REASON	708,23093
#define	  LRM_CNTL_CLOSE 709,23127
#define	  LRM_CNTL_ABORT 710,23160
#define	  LRM_CNTL_NEW 711,23193
#define LRM_SV_PARSE_REASON	712,23226
#define	  LRM_PARSE_MISSING 713,23261
#define	  LRM_PARSE_UNKNOWN 714,23294
#define	  LRM_PARSE_BAD_LEN 715,23327
#define LRM_SV_SETREPPNT_REASON	716,23360
#define	  LRM_SETREPPNT_ERROR 717,23399
#define	  LRM_SETREPPNT_BADLEN 718,23432
#define LRM_SV_TERM_REASON	719,23465
#define   LRM_TERM_NORMAL 720,23499
#define   LRM_TERM_RING_ERR 721,23532
#define   LRM_TERM_REMOVED 722,23565
#define   LRM_TERM_INTERN_ERR 723,23598
#define   LRM_TERM_LINE_FAIL 724,23631
#define LRM_SV_ENAB_FUNC	725,23664
#define LRM_SV_INVALID_REASON	726,23696
#define   LRM_INVALID_NOT_AVAIL 727,23733
#define   LRM_INVALID_NOT_ACTIVE 728,23775
#define   LRM_INVALID_BAD_STATE 729,23817
#define LRM_B_CORRELATOR	735,24003
#define LRM_B_ALL	736,24039
#define LRM_B_PORT	737,24069
#define LRM_B_RING	738,24100
#define	LRM_B_NUM_ALT	739,24131
#define LRM_B_TEMP	740,24165
#define LRM_B_ROUTING	741,24196
#define LRM_B_RLI	742,24230
#define LRM_B_RLI_ID	743,24260
#define LRM_B_RLI_KEY	744,24293
#define LRM_B_RLI_NEWKEY	745,24327
#define LRM_B_RLI_PI	746,24363
#define LRM_B_RLI_PI_ID	747,24396
#define LRM_B_RLI_PI_CLASS	748,24432
#define LRM_B_RLI_PI_ENA	749,24470
#define LRM_B_TOP_MASK	751,24512
#define LRM_B_RLI_MASK	752,24547
#define LRM_B_RLI_PI_MASK	753,24582
#define LRM_R_REQ_STATUS	758,24664
#define LRM_O_REQ_STATUS	759,24706
#define LRM_R_SET_PARAM	760,24741
#define LRM_O_SET_PARAM	761,24816
#define LRM_R_SET_REP_PNT	764,24992
#define LRM_O_SET_REP_PNT	767,25159
#define LRM_R_CLOSE_LINK	768,25199
#define LRM_R_CLOSE_LINK	769,25229
typedef struct lrm_pi_pb_ lrm_pi_pb_771,25260
} lrm_pi_pb;lrm_pi_pb775,25348
typedef struct lrm_pb_ lrm_pb_780,25413
} lrm_pb;lrm_pb793,25676
#define LRM_PI_RINGNO	795,25687
#define LRM_PI_REP_CLASS	796,25717
#define LRM_PI_FUNCTIONAL	797,25749
#define LRM_PI_REST	798,25782
#define LRM_PI_ALL	799,25810
#define LRM_RLI_NONE	801,25838
#define LRM_RLI_LINKNO	802,25867
#define LRM_RLI_ADDRESS	803,25898
#define LRM_RLI_KEY	804,25930
#define LRM_RLI_NEWKEY	805,25958
#define LRM_RLI_REP_STATUS	807,25990
#define LRM_RLI_PARAM_CHANGED	808,26050
#define LRM_RLI_MGR_ACCEPT	810,26157
#define LRM_RLI_MGR_REJECT	811,26212
#define LRM_RLI_NEW_LINK	812,26267
#define LRM_RLI_CNTL_SHIFT	813,26325
#define LRM_RLI_CNTL_BREACH	814,26385
#define LRM_RLI_INVALID	815,26446
#define LRM_RLI_SRVRS_PRESENT	816,26499
#define LM_DEF_ANNOUNCE_COUNT 821,26605
#define LM_DEF_ANNOUNCE_TIME 822,26637
#define ERR_BAD_LEN 830,26854
#define ERR_BAD_SV_VALUE	831,26897
#define ERR_REQ_SV_MISSING	832,26933
#define ERR_LEN_TOO_SMALL	833,26971
#define ERR_UNEXP_DUP	834,27008
#define ERR_EXECUTION	835,27042
#define REQ_ERR_BAD_ATOMIC_LEN	837,27077
#define REQ_ERR_NO_SV_ALLOWED	838,27119
#define SET_ERR_TOO_HIGH	840,27161
#define SET_ERR_TOO_LOW	841,27197
#define SET_ERR_BAD_ATOMIC_SV_LEN 842,27233
#define SET_ERR_UNAUTH_REQ	843,27276
#define IBMNM_MAXBUF 851,27492
#define OFFSET(OFFSET852,27522
#define next_subvector(next_subvector853,27572
#define lnmebuginf	854,27653
#define lnmllcbuginf	855,27699
#define lnmmacbuginf	856,27749
#define lnmmacebuginf	857,27799
static inline ibmnm_vector *insert_major 866,28263
static inline ibmnm_vector *insert_header 878,28516
static inline ibmnm_vector *insert_atomic 886,28680
static inline ibmnm_vector *insert_byte 895,28867
static inline ibmnm_vector *insert_short 906,29121
static inline ibmnm_vector *insert_long 917,29389
static inline ibmnm_vector *insert_longer 928,29640
static inline ibmnm_vector *insert_macaddr 940,29959
static inline ibmnm_vector *insert_bytes 951,30225
static inline ibmnm_vector *insert_correlator 963,30504
static inline ibmnm_vector *insert_address 970,30662
static inline ibmnm_vector *insert_naun 977,30810
static inline ibmnm_vector *insert_location 984,30952
static inline ibmnm_vector *insert_ring 991,31100
static inline ibmnm_vector *insert_error 998,31234
static inline ibmnm_vector *insert_errcode 1005,31372
static inline ibmnm_vector *insert_erroffset 1012,31518
static inline ibmnm_vector *insert_productid 1019,31672
static inline ibmnm_vector *insert_version 1026,31829
static inline void finish_vector(1033,31987
static inline ibmnm_vector *finish_subvector(1044,32224
#define TR_MODIFY_NONE	1057,32628
#define TR_MODIFY_MAXRD	1058,32653
#define TR_MODIFY_BNUM	1059,32679
#define TR_MODIFY_RING	1060,32704
#define TR_MODIFY_TRING	1061,32729
#define TR_MODIFY_SPAN	1062,32755