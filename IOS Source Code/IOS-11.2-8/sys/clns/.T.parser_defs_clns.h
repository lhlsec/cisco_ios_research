
parser_defs_clns.h,2291
#define CLNS_NONE	38,1270
#define CLNS_NSAP	39,1291
#define CLNS_TAG	40,1312
#define	CLNS_ROUTE_DISCARD	42,1333
#define	CLNS_ROUTE_NAME	43,1363
#define	CLNS_ROUTE_INTERFACE	44,1391
#define	PROTOCOL_ISIS	45,1423
#define	PROTOCOL_ISO_IGRP	46,1449
#define	CLNS_ROUTEC	47,1478
#define	CLNS_CLUSTER_CMD	48,1502
#define	CLNS_CHECKSUM_CMD	49,1530
#define	CLNS_CNGST_THRESH	50,1559
#define	CLNS_ENABLE	51,1588
#define	CLNS_ERPDU_INTRVL	52,1612
#define	CLNS_ES_NEIGHBOR	53,1641
#define	CLNS_IS_NEIGHBOR	54,1669
#define	CLNS_MTU	55,1697
#define	CLNS_RDPDU_INTRVL	56,1718
#define	CLNS_RDPDU_MASK	57,1747
#define	CLNS_SEND_ERPDU	58,1775
#define	CLNS_SEND_RDPDU	59,1803
#define	CLNS_DEC_COMPAT	60,1831
#define	CLNS_CONFIG_TIMER	61,1859
#define	CLNS_HOST	62,1888
#define	CLNS_HOLDING_TIMER	63,1910
#define	CLNS_PACKET_LIFETIME	64,1940
#define	CLNS_ROUTE	65,1972
#define	CLNS_ROUTER	66,1995
#define	CLNS_ROUTING	67,2019
#define	CLNS_WANT_ERPDU	68,2044
#define CLNS_NET	69,2072
#define CLNS_ACCESS_GROUP 70,2093
#define CLNS_SPLIT_CMD 71,2128
#define CLNS_SECURITY_PASSTHRU 72,2163
#define CLNS_ADJ_FILTER	73,2198
#define CLNS_ESCT_TIME	74,2226
#define CLNS_CACHE_INVALIDATE 75,2253
#define	FLAG_BROAD	79,2333
#define	FLAG_OREVERSE	80,2360
#define	FLAG_IREVERSE	81,2390
#define	FLAG_WINDOW	82,2420
#define	FLAG_PACKET	83,2448
#define	FLAG_CUG	84,2476
#define	FLAG_NVC	85,2501
#define	FLAG_THROUGHPUT	86,2526
#define	FLAG_MODULO	87,2558
#define	FLAG_RPOA	88,2586
#define	FLAG_NUID	89,2612
#define	FLAG_TDELAY	90,2638
#define FLAG_NUDATA	91,2666
#define FLAG_PBP	92,2694
#define FLAG_NOPBP	93,2719
enum {CLEAR_CLNS,96,2773
      CLEAR_CLNS_CACHE,97,2791
      CLEAR_CLNS_ES_NEIGHBORS,98,2815
      CLEAR_CLNS_IS_NEIGHBORS,99,2846
      CLEAR_CLNS_NEIGHBORS,100,2877
      CLEAR_CLNS_ROUTE,101,2905
enum {SHOW_CLNS,105,2958
      SHOW_CLNS_CACHE,106,2975
      SHOW_CLNS_ES_NEIGHBORS,107,2998
      SHOW_CLNS_FILTER_EXPR,108,3028
      SHOW_CLNS_FILTER_SET,109,3057
      SHOW_CLNS_GLOBAL,110,3085
      SHOW_CLNS_INTERFACE,111,3109
      SHOW_CLNS_IS_NEIGHBORS,112,3136
      SHOW_CLNS_NEIGHBORS,113,3166
      SHOW_CLNS_PROTOCOL,114,3193
      SHOW_CLNS_REDIRECTS,115,3219
      SHOW_CLNS_ROUTE,116,3246
      SHOW_CLNS_TRAFFIC,117,3269
