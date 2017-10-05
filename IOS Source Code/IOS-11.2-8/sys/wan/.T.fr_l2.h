
fr_l2.h,4393
enum Lapf_state_types Lapf_state_types54,1875
    TEI_ASSIGNED,55,1899
    AWAITING_ESTABLISHMENT,56,1946
    AWAITING_RELEASE,57,2002
    MULTIPLE_FRAME_ESTABLISHED,58,2053
    TIMER_RECOVERY,59,2113
    LAPF_MAX_STATES	60,2162
enum Lapf_event_index Lapf_event_index69,2427
	LAPF_I_INDEX 70,2451
	LAPF_SABME_INDEX,71,2470
	LAPF_UA_INDEX,72,2489
	LAPF_DISC_INDEX,73,2505
	LAPF_DM_INDEX,74,2523
	LAPF_FRMR_INDEX,75,2539
	LAPF_RR_INDEX,76,2557
	LAPF_RNR_INDEX,77,2573
	LAPF_REJ_INDEX,78,2590
	LAPF_MAX_EVENTS	79,2607
enum Lapf_command_index Lapf_command_index82,2652
    LAPF_T200_CMD 83,2678
    LAPF_T200_CMD = LAPF_MAX_EVENTS,83,2678
    LAPF_N201_CMD,84,2715
    LAPF_N200_CMD,85,2734
    LAPF_T203_CMD,86,2753
    LAPF_K_CMD,87,2772
    LAPF_FRMR_CMD,88,2788
    LAPF_CFG_CMD,89,2829
    LAPF_RETRY_CMD,90,2895
    LAPF_TEST,91,2915
    LAPF_LAPD,92,2950
    LAPF_CLRCNT,93,2985
    LAPF_TEST_CMD94,3051
enum Lapf_sys_events Lapf_sys_events100,3141
    LAPF_HDR_CHK 101,3164
    LAPF_HDR_CHK = LAPF_TEST_CMD,101,3164
    LAPF_TEARDOWN,102,3198
    LAPF_TIMES,103,3217
    LAPF_CLR_COUNTERS,104,3233
    LAPF_SHOW_IF,105,3256
    FR_PH_DEACT,106,3304
    FR_PH_ACT,107,3321
    FR_MDL_REMOVE,108,3336
    FR_MDL_ASSIGN109,3355
enum Lapf_dl_primitives Lapf_dl_primitives123,3907
    FR_DL_EST_REQ 124,3933
    FR_DL_EST_REQ = 0xF1,124,3933
    FR_DL_EST_CNF,125,3959
    FR_DL_EST_IND,126,3978
    FR_DL_REL_REQ,127,3997
    FR_DL_REL_CNF,128,4016
    FR_DL_REL_IND,129,4035
    FR_DL_DATA_REQ,130,4054
    FR_DL_DATA_IND131,4074
enum Lapf_userCmd_key Lapf_userCmd_key134,4097
    LAPF_SHOW,135,4121
    LAPF_CFG136,4136
enum lapf_err_code lapf_err_code145,4349
    LAPF_ERR_SUP_F1 146,4370
    LAPF_ERR_DM_F1,147,4437
    LAPF_ERR_UA_F1,148,4493
    LAPF_ERR_UA_F0,149,4549
    LAPF_ERR_DM_F0,150,4605
    LAPF_ERR_PEER_SABME,151,4661
    LAPF_ERR_REXMT_SABME,152,4727
    LAPF_ERR_REXMT_DISC,153,4793
    LAPF_ERR_REXMT_RR,154,4857
    LAPF_ERR_NR,155,4922
    LAPF_ERR_FRMR,156,4963
    LAPF_ERR_UNDEFINED,157,5026
    LAPF_ERR_I_FIELD,158,5088
    LAPF_ERR_LENGTH,159,5152
    LAPF_ERR_REXMT,160,5214
    LAPF_ERR_MEMORY,162,5306
    LAPF_ERR_PEER_DISC,163,5348
    LAPF_ERR_LMI,164,5402
    LAPF_ERR_IFDOWN,165,5463
    LAPF_ERR_DISABLED,166,5525
    LAPF_ERR_INIT,167,5571
    LAPF_ERR_L3,168,5633
    LAPF_ERR_SET_REXMT,169,5682
    LAPF_ERR_NR_VA,170,5744
    LAPF_ERR_UNACK_Q,171,5801
    LAPF_ERR_I_Q,172,5862
    LAPF_ERR_MAX173,5921
enum fr_dl_returncode fr_dl_returncode179,5983
    FR_DL_PROCEED,180,6043
    FR_DL_CONFIRM,181,6096
    FR_DL_ERROR	182,6147
enum Lapf_timer_type Lapf_timer_type186,6200
    LAPF_T200,187,6223
    LAPF_T203,188,6238
    LAPF_RETRY189,6253
#define LAPF_RR	196,6299
#define LAPF_RNR	197,6321
#define LAPF_REJ	198,6343
#define LAPF_SABME	199,6365
#define LAPF_UA	200,6389
#define LAPF_DISC	201,6411
#define LAPF_DM	202,6434
#define LAPF_UI	203,6456
#define LAPF_FRMR	204,6478
#define LAPF_XID	205,6501
#define DLCI_CR_MASK	207,6524
#define LAPF_PF_MASK	208,6552
#define LAPF_U_MASK	209,6577
#define LAPF_U_PF_SET	210,6602
#define LAPF_BIT_ONE	211,6629
#define LAPF_BIT_TWO	212,6655
#define LAPF_BIT_SET	213,6681
#define LAPF_BIT_CLEAR	214,6704
#define LAPF_U_SIZE	215,6729
#define LAPF_S_SIZE	216,6751
#define LAPF_DLCI0_CMD 218,6774
#define LAPF_DLCI0_RSP 219,6804
#define DUMMY_CALL_REF_LENGTH 220,6834
#define     LAPF_DEF_T200	225,6899
#define     LAPF_DEF_T203	226,6962
#define     LAPF_DEF_K	227,7021
#define     LAPF_DEF_N201	228,7078
#define     LAPF_DEF_N200	229,7136
#define     LAPF_DEF_CLRSTATS	230,7190
#define     LAPF_RETRY_DELAY	232,7259
#define     T203_Q921	233,7327
typedef struct Lapf_o_list Lapf_o_list235,7388
} Lapf_o_list_t;Lapf_o_list_t239,7537
typedef struct lapf_control_block lapf_control_block244,7593
} Lapfcb_t;Lapfcb_t331,11797
#define LAPF_FLAGS_RESET 333,11810
#define LAPF_RCV_I	336,11897
#define LAPF_RCV_SABME	337,11921
#define LAPF_RCV_UA	338,11949
#define LAPF_RCV_DSDM	339,11974
#define LAPF_RCV_FRMR	340,12001
#define LAPF_RCV_RR	341,12028
#define LAPF_RCV_RNR	342,12053
#define LAPF_RCV_REJ	343,12079
typedef struct lapf_hdr_ lapf_hdr_346,12107
} Lapf_hdr_t;Lapf_hdr_t349,12216
typedef union lapf_id_ lapf_id_351,12231
} Lapf_id_t;Lapf_id_t357,12343
