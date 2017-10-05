
tring_common.h,6812
#define __TRING_COMMON_H__44,1555
#define FIXSWAP(FIXSWAP55,1949
#define FIXLSWAP(FIXLSWAP56,1970
#define FIXSWAP(FIXSWAP58,1998
#define FIXLSWAP(FIXLSWAP59,2052
typedef struct _cmd_block_t _cmd_block_t105,4237
} cmd_block_t;cmd_block_t112,4465
typedef struct _cmd_fifo_t _cmd_fifo_t123,4801
} cmd_fifo_t;cmd_fifo_t130,4938
#define CFIFO_VALID 135,5015
#define CFIFO_CRITICAL 136,5044
#define CFIFO_NONCRITICAL 137,5081
#define RINGMODE_LOOPBACK	253,9163
#define RINGMODE_NO_RINGSTAT	254,9196
#define RINGMODE_ALL_FRAMES	255,9232
#define RINGMODE_ALL_LLC	256,9267
#define RINGMODE_BRIDGE	257,9299
#define RINGMODE_REM	258,9349
#define RINGMODE_RPS	259,9406
#define RINGMODE_NETMGR	260,9466
#define RINGMODE_TBRIDGE	261,9528
#define RINGMODE_CONTENDER	262,9590
#define RINGMODE_RS	263,9653
#define RINGMODE_ALL_MAC	264,9725
#define RINGMODE_ETR	265,9788
#define RINGMODE_NEED_MAC	267,9844
#define OPN_PHASE_MASK	275,10174
#define OPN_CODE_MASK	276,10204
#define BF_NONE	285,10521
#define BF_LOCAL	286,10545
#define BF_BRIDGE	287,10569
#define BF_MAC_PKT	288,10594
#define	BF_MYMAC	289,10620
#define BF_MYGROUP	290,10644
#define BF_MYFUNC	291,10670
#define BF_BROAD	292,10695
#define BF_EXPLORER	293,10719
#define BF_MULTI	294,10746
#define	BF_XIDTEST	295,10770
#define BF_SBECHECKED	296,10825
#define BF_TBRIDGE	297,10854
#define BF_EAVES	298,10920
#define BF_MYMULTI	299,10944
#define SBE_INVALID	301,11000
#define SBE_IGNORE	302,11052
#define SBE_VALID	303,11107
#define RNG_SIGNAL_LOSS	306,11163
#define RNG_HARD_ERROR	307,11203
#define RNG_SOFT_ERROR	308,11242
#define RNG_BEACON	309,11281
#define RNG_WIRE_FAULT	310,11316
#define RNG_HW_REMOVAL	311,11355
#define RNG_RMT_REMOVAL	312,11394
#define RNG_CNT_OVRFLW	313,11434
#define RNG_SINGLE	314,11473
#define RNG_RECOVERY	315,11508
#define RNG_UNDEFINED	316,11545
#define RNG_FATAL	318,11584
#define RNG_AUTOFIX	319,11618
#define RNG_UNUSEABLE	320,11654
#define	CB_CMD_VALID	326,11721
#define CB_CMD_INVALID	327,11750
#define CB_NOP	329,11779
#define CB_M2T_SOFT_RESET	330,11803
#define CB_M2T_START	331,11836
#define	CB_M2T_STOP	332,11865
#define CB_M2T_START_BRIDGE	333,11893
#define CB_M2T_SMT_STATS	335,11929
#define CB_M2T_MEMTEST	336,11961
#define CB_T2M_RING_STAT	342,12069
#define CB_T2M_DEBUG_INFO	343,12101
#define CB_T2M_PANIC_INFO	344,12134
#define CB_ASYNC_GENERAL	348,12186
#define CB_ASYNC_NOP50	349,12218
#define CB_ASYNC_GET_VERSION	350,12249
#define CB_ASYNC_MODIFY	351,12285
#define CB_ASYNC_UPDATE_COUNTS	352,12317
#define CB_ASYNC_START_GDB	353,12370
#define CB_ASYNC_BLAST	354,12419
#define CB_ASYNC_SOFT_RESET	355,12465
#define CB_ASYNC_SET_FUNCTIONAL	356,12515
#define CB_ASYNC_SET_GROUP	357,12554
#define CB_ASYNC_SET_OPTIONS	358,12588
#define CB_ASYNC_ENABLE 359,12624
#define CB_ASYNC_READL_MEMX 360,12671
#define CB_ASYNC_WRITEL_MEMX 361,12722
#define CB_ASYNC_READS_MEMX 362,12774
#define CB_ASYNC_WRITES_MEMX 363,12825
#define	CB_ASYNC_STOP	364,12877
#define	RSLT_VALID	370,12978
#define	RSLT_PENDING	371,13005
#define	RSLT_INVALID	372,13034
#define RSLT_NONE	374,13061
#define RSLT_OK	375,13087
#define RSLT_ABUSE	376,13112
#define RSLT_TOOSMALL	377,13139
#define RSLT_TOOBIG	378,13169
#define RSLT_ADDR_RANGE	379,13197
#define RSLT_ADDR_ALIGN	380,13229
#define RSLT_ADDR_ERR	381,13261
#define RSLT_CMD_FORMAT	382,13291
#define RSLT_UNIMPL	383,13323
#define RSLT_BAD_CMD	384,13351
#define RSLT_ERR_INTERNAL	385,13380
#define RSLT_TBUF_COPIED	386,13413
#define	RSLT_RBUF_COPIED	387,13445
#define RSLT_NO_RBUFS	388,13477
#define RSLT_ALRDY_SET	389,13507
#define RSLT_NOT_SET	390,13538
#define RSLT_START_FAIL	391,13567
#define RSLT_START_FAIL_RESET	392,13599
#define RSLT_START_FAIL_INIT	393,13636
#define RSLT_START_FAIL_OPEN	394,13672
#define RSLT_START_FAIL_ADDR	395,13708
#define RSLT_MODIFY_BAD_CELL	396,13744
#define RSLT_MODIFY_BAD_DATA	397,13780
#define RSLT_MODIFY_BRIDGE_OFF	398,13816
#define RSLT_BRIDGE_BAD_PARAM	399,13854
#define RSLT_MODE_FAILED	400,13891
#define RSLT_BAD_FUNCTIONAL	401,13923
#define RSLT_BUSY	402,13958
#define RSLT_CFGBR_FAILED	403,13984
#define RSLT_FAIL_SOFT_RESET	404,14032
#define RSLT_FAIL_MEMTEST	405,14083
#define RSLT_FAIL_BOARD_RESET	406,14131
#define RSLT_FAIL_NOMEMORY	407,14183
#define RSLT_FAIL_HARD_RESET	408,14217
#define RSLT_NOTSTOPPED	410,14269
#define RSLT_NOTRUNNING	411,14301
#define RSLT_NOTFOUND	412,14333
#define RSLT_DBG_RUNNING	413,14363
#define RSLT_DBG_NOTACTIVE	414,14395
#define SCA_FAIL_NONE	421,14534
#define SCA_FAIL_BAD_EXIT	422,14559
#define SCA_FAIL_STK_OVERFLOW	423,14587
#define	SCA_FAIL_STK_UNDERFLOW	424,14619
#define SCA_FAIL_STK_GUARD	425,14652
#define SCA_FAIL_UNEXPECT_INT	426,14681
#define	SCA_FAIL_PARITY	427,14713
#define SCA_FAIL_TIMEOUT	428,14740
#define SCA_FAIL_MBACCESS	429,14767
#define SCA_FAIL_SCAPROTO	430,14795
#define SCA_FAIL_ALIGN	431,14823
#define SCA_FAIL_SEGWRAP	432,14851
#define	SCA_FAIL_ADDRRANGE	433,14880
#define	SCA_FAIL_DBGPROTO	434,14911
#define SCA_FAIL_MEMTRASH	435,14941
#define	SCA_FAIL_T2MTRASH	436,14971
#define SCA_FAIL_T2MSEQ	437,15001
#define SCA_FAIL_T2MCLOG	438,15031
#define SCA_FAIL_T2MBUSY	439,15061
#define SCA_FAIL_BADRBUF_CMPLT	440,15091
#define SCA_FAIL_RLIST_TRASH	441,15127
#define SCA_FAIL_TLIST_TRASH	442,15161
#define SCA_FAIL_BAD380INT	443,15195
#define SCA_FAIL_380CMDFAIL	444,15227
#define SCA_FAIL_380CHECK	445,15260
#define SCA_FAIL_380BADRECV	446,15291
#define SCA_FAIL_380BADTXMT	447,15324
#define SCA_FAIL_380BADCLOSE	448,15357
#define SCA_FAIL_380TXINT	449,15391
#define SCA_FAIL_380RXINT	450,15422
#define SCA_FAIL_RXPTR_TRASH	451,15453
#define SCA_FAIL_TXPTR_TRASH	452,15487
#define SCA_FAIL_MBMEM_TEST	453,15521
#define SCA_FAIL_RECOVERY	455,15568
#define SCA_RECOVERY_INFO	456,15599
#define SCA_FAIL_TIUCODE	458,15637
#define SCA_FAIL_BADARBCMD	459,15682
#define SCA_FAIL_BADSRBCMD	460,15729
#define SCA_FAIL_BADSSBCMD	461,15776
#define SCA_FAIL_OPEN_TIMEOUT	462,15823
#define SCA_FAIL_CHGMODE_TIMEOUT	463,15877
#define SCA_FAIL_CFGBRIDGE_TIMEOUT	464,15933
#define SCA_FAIL_SET_ADDR_TIMEOUT	465,15991
#define SCA_FAIL_READ_ERROR_LOG_TIMEOUT	466,16048
#define LAST_SCA_FAIL	467,16111
#define DI_AUTOFIXING	472,16168
#define DI_AUTOFIXED	473,16196
#define DI_PANIC	474,16223
#define TR_MODIFY_NONE 480,16321
#define TR_MODIFY_MAXRD 481,16347
#define TR_MODIFY_BNUM 482,16373
#define TR_MODIFY_RING 483,16399
#define TR_MODIFY_TRING 484,16425
#define TR_MODIFY_SPAN 485,16451
#define MAC_VERS_LEN 491,16507
#define MVID_DEST_CLASS_MASK 497,16582
#define RNG_STATION 499,16617
#define LLC_MGR 500,16644
#define NET_MGR 501,16671
#define RNG_PARAM_SVR 502,16698
#define RNG_ERR_MON 503,16725
