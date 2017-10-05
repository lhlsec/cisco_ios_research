
tcp.h,3588
#define __TCP_H__196,6860
#define TCPF_ENQUEUING 207,6990
#define NUMTCPQUEUES	213,7099
#define RETRANSQUEUE	214,7167
#define SEGQUEUE	215,7216
#define SAVEQUEUE	216,7253
enum tcp_timers tcp_timers222,7343
    RETRANSTIMEOUT	223,7362
    TMEWAITTIMEOUT	224,7417
    ACKTIMEOUT	225,7476
    SNDWNDTIMEOUT	226,7536
    KEEPALIVETIMEOUT	227,7593
    GIVEUPTIMEOUT 228,7647
    PMTUTIMEOUT 229,7716
    NUMTCPTIMEOUTS	230,7777
#define MAXTCPWINDOW	236,7881
#define TCP_MAXMD5KEYLEN	238,7929
typedef void (*tcp_notify_cb)tcp_notify_cb245,8027
typedef void (*tcp_notify_cb)(tcbtype tcbtype245,8027
typedef void (*tcp_activate_cb)tcp_activate_cb246,8077
typedef void (*tcp_activate_cb)(tcbtype tcbtype246,8077
typedef void (*tcp_listen_cb)tcp_listen_cb247,8129
typedef void (*tcp_listen_cb)(tcbtype tcbtype247,8129
enum tcp_state tcp_state257,8348
    CLOSED	258,8365
    LISTEN	259,8381
    SYNSENT 260,8397
    SYNRCVD 261,8415
    ESTAB	262,8433
    FINWAIT1	263,8448
    FINWAIT2	264,8466
    CLOSEWAIT	265,8484
    LASTACK	266,8503
    CLOSING	267,8520
    TIMEWAIT	268,8537
struct tcbtype_ tcbtype_271,8559
#define TCPEV_IS_CLOSED	409,14618
#define TCPEV_MAYBE_OPEN	410,14648
#define TCPEV_NOT_LISTEN	411,14678
#define TCPEV_NOT_ESTAB	412,14708
#define TCPEV_MAYBE_CONNECTED	413,14738
#define TCPEV_FROM_ESTAB	414,14773
#define TCPEV_WINDOW	415,14803
#define TCPEV_RTQUEUE	416,14830
#define TCB_PASSIVEOPEN	423,14942
#define TCB_ACTIVE	424,15007
#define TCB_HIGHERPRC	425,15070
#define TCB_IDLEUSER	426,15137
#define TCB_RTRANSTMO	427,15207
#define TCB_SENDURGENT	428,15273
#define TCB_KEEPALIVE	429,15341
#define TCB_RETXMIT	430,15410
#define TCB_ALIAS	431,15484
#define TCB_TIMINGOUT	432,15554
#define TCB_OUTPUTPENDING 433,15629
#define TCB_SYNCCLOSE	434,15701
#define TCB_NAGLE	435,15769
#define TCB_APP_CLOSED	436,15829
#define TCB_ALWAYSPUSH	437,15898
#define TCB_SYNCLISTEN	438,15969
#define TCB_FULLSEGS	439,16039
#define TCB_PMTUDISC	440,16111
#define TCB_GENTCBS	441,16178
#define TCB_MD5	442,16251
#define TCB_EDITURG	443,16318
#define TCB_PMTUAGER	444,16389
#define TCB_ACTIVE_OPEN_FLAGS	446,16455
#define TCB_PASSIVE_OPEN_FLAGS	447,16517
#define TCB_INT_PRIMITIVES	452,16621
#define TCB_INT_WAITING	453,16659
#define TCB_INT_NOFREE	454,16695
#define TCB_INT_MSG_NOTIFY 455,16730
#define TCB_INT_WAIT_ESTAB 456,16772
enum TCP_MSG_ID TCP_MSG_ID462,16873
    TCP_PASSTCB_MSG 463,16891
    TCP_PASSTCB_MSG = 0x80000000463,16891
    TCP_WINDOW_SIZE,472,16959
    TCP_NO_DELAY,473,17006
    TCP_COND_ACCEPT,474,17068
    TCP_TTY,475,17120
    TCP_IPOPTIONS,476,17163
    TCP_MD5KEY,477,17216
    TCP_ACCESS_CHECK,478,17268
    TCP_ADDRESS_TYPE,479,17343
    TCP_PID,480,17408
    TCP_MSG_NOTIFY,481,17469
    TCP_SYNWAIT 482,17543
#define PORTINTERVAL	490,17728
#define LINEBASE	492,17796
#define ROTARYBASE	493,17843
#define STREAMLINEBASE	494,17894
#define STREAMROTARYBASE	495,17948
#define BINARYLINEBASE	496,18005
#define BINARYROTARYBASE	497,18070
#define XREMOTEBASE	498,18138
#define REVERSE_XREMOTE_LINE_BASE	499,18190
#define REVERSE_XREMOTE_ROTARY_BASE	500,18268
#define MAXPRIVEDPORT	503,18367
#define MAXPACKETDATALENGTH	508,18463
#define TcpPkt(TcpPkt510,18534
    TCP_SUCCESS,517,18638
    TCP_SUCCESS, TCP_NO_TTY,517,18638
    TCP_SUCCESS, TCP_NO_TTY, TCP_ACCESS_DENIED,517,18638
    TCP_SUCCESS, TCP_NO_TTY, TCP_ACCESS_DENIED, TCP_NO_RESOURCES517,18638
typedef struct tcp_traffic_t_ tcp_traffic_t_523,18738
} tcp_traffic_t;tcp_traffic_t534,18960
