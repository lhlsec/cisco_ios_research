
tring.h,5520
#define __TRING_H__168,6179
typedef struct tring_hdr_ tring_hdr_181,6608
} tring_hdr;tring_hdr187,6739
#define TRING_ENCAPBYTES 189,6753
#define TRING_8025_ENCAPBYTES 190,6831
#define TRING_8025_ENCAPWORDS 191,6909
#define TRING_SAP_ENCAPBYTES 192,6967
#define TRING_SNAP_ENCAPBYTES 193,7046
#define TRING_SNAP_ENCAPWORDS 194,7125
#define TRING_MAC_MULTICAST 200,7316
#define TR_MAXLLC 205,7378
#define TR_MAXINFO 206,7407
#define TR_MAXDATA 207,7493
#define TR_MAXPAK	208,7560
#define TR_MTU 209,7607
#define TR16_DEFLLC 214,7668
#define TR16_DEFINFO 215,7697
#define TR16_DEFDATA 216,7787
#define TR16_MTU 217,7856
#define TR16_MAXLLC 219,7894
#define TR16_MAXINFO 220,7924
#define TR16_MAXDATA 221,8014
#define TR16_MAXPAK	222,8083
#define TR_ACFC_SIZE 224,8135
#define TR_DA_OFFSET 225,8158
#define TR_SA_OFFSET 226,8181
#define TR_RC_SHORTS 227,8204
#define MAXTRSIZE 229,8228
#define TR_MINDATA 231,8253
#define TR_MINENCSIZE 232,8331
#define TR_MAXENCSIZE 233,8374
#define TR_OVERHEAD 234,8444
struct tr_mac_llc_t_ tr_mac_llc_t_236,8513
typedef struct _trrif_t _trrif_t241,8578
} trrif_t;trrif_t249,8727
#define AC_PRI_MASK 254,8764
#define AC_PRI0 255,8793
#define AC_PRI1 256,8822
#define AC_PRI2 257,8851
#define AC_PRI3 258,8880
#define AC_PRI4 259,8909
#define AC_PRI5 260,8938
#define AC_PRI6 261,8967
#define AC_PRI7 262,8996
#define AC_NOT_TOKEN 263,9025
#define AC_MC 266,9265
#define AC_RES_MASK 267,9294
#define AC_BADBITS 269,9324
#define FC_TYPE_MASK 274,9396
#define FC_TYPE_MAC 275,9425
#define FC_TYPE_LLC 276,9454
#define FC_TYPE_RSVD1 277,9483
#define FC_TYPE_RSVD2 278,9512
#define FC_TYPE_MAC_EXP 279,9541
#define PCF_ATTN_MASK 281,9571
#define PCF_EXPRESS 282,9600
#define PCF_BEACON 283,9629
#define PCF_CLAIMTOKEN 284,9658
#define PCF_RINGPURGE 285,9687
#define PCF_AMP 286,9716
#define PCF_SMP 287,9745
#define TRFUNC_LOCAL 295,9949
#define TRFUNC_MON 296,9996
#define TRFUNC_RPS 297,10043
#define TRFUNC_REM 298,10090
#define TRFUNC_CRS 299,10137
#define TRFUNC_NETBIOS 300,10184
#define TRFUNC_BRIDGE 301,10231
#define TRFUNC_CAU 302,10278
#define TRFUNC_LANMGR 303,10355
#define TRFUNC_IPMCAST 304,10402
#define TRFUNC_ESIS_ES 305,10469
#define TRFUNC_ESIS_IS 306,10516
#define TRFUNC_ISIS_IS 307,10563
#define TRFUNC_STANDBY 308,10610
#define TRFUNC_STANDBY_0 309,10657
#define TRFUNC_STANDBY_1 310,10704
#define TRFUNC_STANDBY_2 311,10751
#define TRFUNC_NOVELL 312,10798
#define TRFUNC_LAT 313,10845
#define TRFUNC_ATALK 314,10892
#define TRFUNC_C_DN_NODE 315,10939
#define TRFUNC_C_DN_ROUTE 316,10986
#define TRFUNC_D_DN_NODE 317,11033
#define TRFUNC_D_DN_ROUTE 318,11080
#define TRFUNC_CDP 319,11127
#define TRFUNC_LRM 320,11174
#define TRFUNC_UPPER 321,11221
#define TR_GROUP 334,11660
#define TR_LOCAL 335,11689
#define TR_FAI 336,11718
#define TR_RII 337,11747
#define TR_FCS_SIZE 339,11777
#define FS_ARIX 343,11826
#define FS_FCIX 344,11855
#define FS_ARIY 345,11884
#define FS_FCIY 346,11913
#define FS_ARIFCI_MASK 347,11942
#define FS_BOTH 348,11971
#define FS_ARI 349,12000
#define FS_FCI 350,12029
#define FS_NONE 351,12058
#define TR_ARP_GRATUITOUS_HOLD 354,12090
#define BITSWAP(BITSWAP362,12313
typedef struct tr_rstattab_t_ tr_rstattab_t_369,12417
} tr_rstattab_t;tr_rstattab_t372,12480
typedef struct tring_mac_frame_ tring_mac_frame_374,12498
} tring_mac_frame;tring_mac_frame382,12673
    TOKEN_HW_STATUS_TIME=386,12702
    TOKEN_HW_STATUS_TIME=IDB_TYPE_BASE_TOKEN+386,12702
    TOKEN_HW_LINEUP,387,12750
    TOKEN_HW_LINEUPTIMER,388,12771
    TOKEN_HW_GROUP,389,12797
    TOKEN_HW_FUNCTIONAL,390,12817
    TOKEN_HW_RING_STATUS,391,12842
    TOKEN_HW_MBUS_TIMER,392,12868
    TOKEN_HW_TEST_TIMER,393,12893
    TOKEN_HW_LAST_PANIC,394,12918
    TOKEN_HW_LAST_PANIC_TIME,395,12943
    TOKEN_HW_FAIL_COUNT,396,12973
    TOKEN_HW_LAST_FAIL,397,12998
    TOKEN_HW_LAST_FAIL_CODE,398,13022
    TOKEN_HW_LAST_FAIL_TIME,399,13051
    TOKEN_HW_NEXT_BUGINF,400,13080
    TOKEN_HW_POLLING_COUNT,401,13106
    TOKEN_HW_POLLING_FAILURE,402,13134
    TOKEN_HW_POLLING_STATE,403,13164
    TOKEN_HW_SIGNAL_LOSS,405,13193
    TOKEN_HW_HARD_ERRS,406,13219
    TOKEN_HW_SOFT_ERRS,407,13243
    TOKEN_HW_TX_BEACON,408,13267
    TOKEN_HW_WIRE_FAULT,409,13291
    TOKEN_HW_RMT_REMOVAL,410,13316
    TOKEN_HW_SINGLE_STATION,411,13342
    TOKEN_HW_RING_RECOVERY,412,13371
    TOKEN_HW_PREV_SIGNAL_LOSS,414,13400
    TOKEN_HW_PREV_HARD_ERRS,415,13431
    TOKEN_HW_PREV_SOFT_ERRS,416,13460
    TOKEN_HW_PREV_TX_BEACON,417,13489
    TOKEN_HW_PREV_WIRE_FAULT,418,13518
    TOKEN_HW_PREV_RMT_REMOVAL,419,13548
    TOKEN_HW_PREV_SINGLE_STATION,420,13579
    TOKEN_HW_PREV_RING_RECOVERY,421,13613
    TOKEN_HW_PREV_BAD_ACBITS,422,13646
    TOKEN_HW_PREV_ERR_LINE,424,13677
    TOKEN_HW_PREV_ERR_INTERNAL,425,13705
    TOKEN_HW_PREV_ERR_BURST,426,13737
    TOKEN_HW_PREV_ERR_ARIFCI,427,13766
    TOKEN_HW_PREV_ERR_ABORT,428,13796
    TOKEN_HW_PREV_ERR_LOSTFRAME,429,13825
    TOKEN_HW_PREV_ERR_RCVCONGESTION,430,13858
    TOKEN_HW_PREV_ERR_COPY,431,13895
    TOKEN_HW_PREV_ERR_FREQ,432,13923
    TOKEN_HW_PREV_ERR_TOKEN,433,13951
    TOKEN_HW_NAUN,434,13980
    TOKEN_HW_BEACON_NAUN,435,13999
    TOKEN_HW_LAST_BEACON_TYPE,436,14025
    TOKEN_HW_RINGOPENSTATUS437,14056
#define TR_OPN_PHASES 447,14303
#define TR_OPN_ERRORS 448,14327
#define TR_RSTAT_BUF_SIZE 449,14352
#define Cls_Is_Idb_Virtual(Cls_Is_Idb_Virtual459,14712
