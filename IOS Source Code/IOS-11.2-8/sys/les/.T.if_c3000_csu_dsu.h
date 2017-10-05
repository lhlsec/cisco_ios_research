
if_c3000_csu_dsu.h,22194
#define __IF_C3000_CSU_DSU_H__37,1404
#define MISC_MOD_TYPE_ID3_SHIFT 44,1520
#define BOA_MOD_TYPE_ID_MASK	45,1554
#define RDY_SIGNAL_HIGH(RDY_SIGNAL_HIGH50,1651
#define ALM_SIGNAL_HIGH(ALM_SIGNAL_HIGH51,1733
#define MODULE_RESET(MODULE_RESET53,1804
#define MODULE_UNRESET(MODULE_UNRESET54,1861
#define BOA_DSU_IRQ_LEVEL	56,1922
#define MAX_SERIAL_PORTS	57,1950
#define BOA_SW56_2W_ADTRAN_DSU_ID	61,2035
#define BOA_SW56_4W_ADTRAN_DSU_ID	62,2071
#define BOA_FT1_DIGITAL_LINK_DSU_ID	63,2107
#define BOA_NO_MODULE	64,2146
enum MODULE_TYPES MODULE_TYPES66,2174
	NO_MODULE,67,2194
	SERIAL_5IN1_MODULE,68,2253
	FT1_CSU_DSU,69,2317
	SW56_4W_CSU_DSU,70,2371
	SW56_2W_CSU_DSU,71,2430
	UNRECOGNISED_MODULE	72,2489
enum {WAN_PORT_0 76,2558
      WAN_PORT_1}77,2580
#define W_BOOLEAN_ALM_TYPE 79,2600
#define SEMAPHORE_DSU0_TYPE 80,2645
#define SEMAPHORE_DSU1_TYPE 81,2707
#define T1_RDY_INTERBYTE_WAIT 86,2815
#define T1_INTERBYTE_READ_WAIT 87,2879
#define T1_INTERBYTE_WRITE_WAIT 88,2938
#define SW56_INTERBYTE_READ_WAIT 90,2999
#define SW56_INTERBYTE_WRITE_WAIT 91,3059
#define DSU_POST_COMMAND_FIXED_WAIT	93,3120
#define DSU_POST_COMMAND_WAIT 94,3180
#define DSU_WAIT_RDY_SIGNAL_HIGH	95,3240
#define DSU_MAX_RDY_SIGNAL_RETRIES	96,3293
#define DSU_MAX_POST_CMD_WAIT_RETRIES	97,3332
#define DSU_MAX_INTERBYTE_RDY_RETRIES	98,3374
#define CSU_DSU_LOCK_WAITTIME	104,3446
#define T1_RDY_MAX_REASSERT_WAIT	105,3486
#define DSU_MAX_POWERCYCLE_TIME	106,3551
#define DSU_MAX_MODULE_RESET_RETRIES	108,3655
#define DSU_RESET_HOLD_TIME	109,3694
#define DSU_RESET_WAIT_TIME	110,3727
#define DSU_SELFTEST_COMPLETION	111,3760
#define DSU_REM_LOOPBACK_START	112,3802
#define DSU_NUM_REG_TIMEOUTS_RESET	113,3843
typedef struct dsu_alarm_data_ dsu_alarm_data_118,3921
} dsu_alarm_data_t;dsu_alarm_data_t123,4069
enum T1_ALARM_EVENTS T1_ALARM_EVENTS129,4123
        T1_BPV_THRSLD_EXCEEDED,130,4146
	T1_CRC_THRSLD_EXCEEDED,131,4179
	T1_OOF_THRSLD_EXCEEDED,132,4205
        T1_CARRIER_LOSS,133,4230
	T1_FRAME_SYNC_LOSS,134,4256
	T1_RXING_AIS,135,4278
	T1_RXING_RAI,136,4294
        T1_INT_PROTOCOL_ERROR,137,4309
	T1_REMOTE_ACTIVATED_LOOPBACK,138,4340
	T1_TESTPATTERN_SYNC,139,4371
	T1_MAX_ALARM_EVENTS140,4393
enum SW56_ALARM_EVENTS SW56_ALARM_EVENTS143,4418
        SW56_RXING_OOS_OOF,144,4443
	SW56_CARRIER_LOSS,145,4472
	SW56_CURRENT_LOSS,146,4493
        SW56_FRAME_SYNC_LOSS,147,4513
	SW56_RATE_ADAPTING,148,4544
	SW56_CALL_STATUS,149,4566
        SW56_CSU_DSU_TELCO_LOOPUP,150,4585
	SW56_LOOPUP_FRM_REM_DSU,151,4621
	SW56_MAX_ALARM_EVENTS152,4647
#define MAX_ALARM_EVENTS	155,4674
typedef struct csu_dsu_instance csu_dsu_instance_t;csu_dsu_instance_t157,4720
struct csu_dsu_instance csu_dsu_instance158,4772
static inline csu_dsu_instance_t *csu_dsu_get_instance(288,9290
enum REG_ACCESS_RESULTS REG_ACCESS_RESULTS305,9697
	DSU_REQUEST_COMPLETE,306,9723
	DSU_REQUEST_TIMEOUT,307,9746
	DSU_BAD_INSTANCE,308,9768
	DSU_BEING_RESET,309,9787
	DSU_LOCK_OBTAIN_TIMEOUT,310,9805
	DSU_NO_MEMORY,311,9831
	DSU_WRONG_MODULE_TYPE,312,9847
	DSU_WRONG_FORMAT,313,9871
	DSU_INTERMEDIATE_REG_RW_FAILURE,314,9890
	DSU_MAX_REG_ACCESS_RESULTS315,9924
#define READ_REGISTER	318,9956
#define WRITE_REGISTER	319,9985
#define DSU_CLOCKSOURCE_INTERNAL 328,10200
#define DSU_CLOCKSOURCE_NETWORK 329,10238
#define DSU_UNIT_TYPE_REG	333,10312
#define DSU_UNIT_TYPE_LEN	334,10343
#define DIGITAL_LINK_FT1_MODULE	335,10372
#define ADTRAN_SW56_4W_MODULE	336,10410
#define ADTRAN_SW56_2W_MODULE	337,10446
#define DSU_HW_REVISION_REG	341,10541
#define DSU_HW_REVISION_LEN	342,10574
#define DSU_SW_REVISION_REG	346,10663
#define DSU_SW_REVISION_LEN	347,10696
#define DSU_INT_PROTOCOL_REV_REG	351,10787
#define DSU_INT_PROTOCOL_REV_LEN	352,10824
#define DIGITAL_LINK_FT1_HIGHEST_REV	353,10859
#define ADTRAN_SW56_4W_HIGHEST_REV	354,10903
#define ADTRAN_SW56_2W_HIGHEST_REV	355,10945
#define DSU_INT_PROTOCOL_LOWEST_REV	356,10987
#define DSU_IMAGE_CKSUM_REG	359,11088
#define DSU_IMAGE_CKSUM_LEN	360,11121
#define T1_ALARM_UNITSTATUS_REG	364,11225
#define T1_ALARM_UNITSTATUS_LEN	365,11263
struct t1_alarm_unitstatus t1_alarm_unitstatus368,11369
struct t1_alarm_status t1_alarm_status376,11537
#define B_FT1_UNIT_STATUS_LOSS_RTS_OR_DTR 382,11683
#define B_FT1_UNIT_STATUS_SENDING_YELLOW 383,11735
#define B_FT1_UNIT_STATUS_SENDING_AIS 384,11787
#define B_FT1_UNIT_STATUS_UNAVAIL_SIGNAL_STATE 385,11839
#define B_FT1_UNIT_STATUS_EXCESS_ZEROS 386,11891
#define B_FT1_UNIT_STATUS_FERR 387,11943
#define B_FT1_UNIT_STATUS_IN_TEST 388,11995
#define T1_UNIT_STATUS_REG	391,12085
#define T1_UNIT_STATUS_LEN	392,12118
enum T1_STATUS_BITMAP T1_STATUS_BITMAP393,12148
	T1_STATUS_LOSS_DTE_PORT,394,12172
	T1_STATUS_LOSS_DTE_PORT, T1_STATUS_TXING_YELLOW,394,12172
	T1_STATUS_LOSS_DTE_PORT, T1_STATUS_TXING_YELLOW, T1_STATUS_TXING_KEEPALIVE,394,12172
      	T1_STATUS_UNAVAILABLE_STATE,395,12250
      	T1_STATUS_UNAVAILABLE_STATE, T1_STATUS_EXCESS_ZEROES,395,12250
      	T1_STATUS_UNAVAILABLE_STATE, T1_STATUS_EXCESS_ZEROES, T1_STATUS_NO_CLOCK,395,12250
      	T1_STATUS_FRAME_ERR,396,12331
      	T1_STATUS_FRAME_ERR, T1_STATUS_TEST_MODE,396,12331
      	T1_STATUS_FRAME_ERR, T1_STATUS_TEST_MODE, T1_STATUS_MAX396,12331
#define B_FT1_RX_STATUS_CARRIER_LOSS 400,12456
#define B_FT1_RX_STATUS_LOSS_OF_SYNC 401,12501
#define B_FT1_RX_STATUS_YELLOW 402,12546
#define B_FT1_RX_STATUS_BLUE 403,12591
#define B_FT1_RX_STATUS_SET_CODE 404,12636
#define B_FT1_RX_STATUS_RESET_CODE 405,12681
#define T1_RECEIVER_STATUS_REG	408,12768
#define T1_RECEIVER_STATUS_LEN	409,12805
enum T1_RECEIVER_STATUS_BITMAP T1_RECEIVER_STATUS_BITMAP410,12839
	T1_STATUS_CARRIER_LOSS,411,12872
	T1_STATUS_CARRIER_LOSS, T1_STATUS_SIGNAL_LOSS,411,12872
	T1_STATUS_CARRIER_LOSS, T1_STATUS_SIGNAL_LOSS, T1_STATUS_RXING_RAI,411,12872
     	T1_STATUS_RXING_AIS,412,12941
     	T1_STATUS_RXING_AIS, T1_STATUS_RXING_LOOPUP,412,12941
     	T1_STATUS_RXING_AIS, T1_STATUS_RXING_LOOPUP, T1_STATUS_RXING_LOOPDOWN412,12941
struct sw56_alarm_loopstatus sw56_alarm_loopstatus415,13021
#define B_FT1_ALARM_STATUS_BPV_THRESHOLD_EXCEEDED 421,13146
#define B_FT1_ALARM_STATUS_CRC_THRESHOLD_EXCEEDED 422,13223
#define B_FT1_ALARM_STATUS_OOF_THRESHOLD_EXCEEDED 423,13300
#define B_FT1_ALARM_STATUS_NET_CARRIER_LOSS 424,13377
#define B_FT1_ALARM_STATUS_NET_SYNC_LOSS 425,13436
#define B_FT1_ALARM_STATUS_NET_AIS_RECEIVED 426,13495
#define B_FT1_ALARM_STATUS_NET_YELLOW_RECEIVED 427,13554
#define B_FT1_ALARM_STATUS_ACCESS_ERROR 428,13613
#define B_FT1_ALARM_STATUS_NET_PAYLOAD_LOOPBACK 429,13723
#define B_FT1_ALARM_STATUS_PATTERN_IN_SYNC 430,13782
#define T1_ALARM_STATUS_REG	433,13902
#define T1_ALARM_STATUS_LEN	434,13936
#define SW56_LOOP_STATUS_REG	435,13967
#define	SW56_LOOP_STATUS_LEN 436,14019
#define DSU_NO_ALARMS	439,14094
#define T1_INT_PROTOCOL_ERR_REG	442,14156
#define T1_INT_PROTOCOL_ERR_LEN	443,14194
enum T1_INT_PROTOCOL_ERR_BITMAP T1_INT_PROTOCOL_ERR_BITMAP444,14229
	T1_INVALID_REG_ADDR,445,14263
	T1_INVALID_REG_ADDR, T1_INVALID_REG_DATA_VAL,445,14263
	T1_INVALID_REG_ADDR, T1_INVALID_REG_DATA_VAL, T1_INVALID_REG_OVERFLOW,445,14263
	T1_MAX_ACCESS_ERRORS446,14335
#define B_SW56_DIAL_STATUS_DIALLING 450,14410
#define B_SW56_DIAL_STATUS_CONNECTION_ACTIVE 451,14461
#define B_SW56_DIAL_STATUS_SWITCH_BUSY 452,14512
#define B_SW56_DIAL_STATUS_REMOTE_END_BUSY 453,14563
#define B_SW56_DIAL_STATUS_NO_ANSWER 454,14614
#define SW56_DIAL_STATUS_REG	457,14712
#define SW56_DIAL_STATUS_LEN	458,14747
enum SW56_DIAL_STATUS_BITMAP SW56_DIAL_STATUS_BITMAP459,14779
	SW56_STATUS_DIALLING,460,14810
	SW56_STATUS_DIALLING, SW56_STATUS_CONNECTION_ACTIVE,460,14810
	SW56_STATUS_DIALLING, SW56_STATUS_CONNECTION_ACTIVE, SW56_STATUS_SWITCH_BUSY,460,14810
	SW56_STATUS_REMOTE_END_BUSY,461,14889
	SW56_STATUS_REMOTE_END_BUSY, SW56_STATUS_NO_ANSWER,461,14889
	SW56_STATUS_REMOTE_END_BUSY, SW56_STATUS_NO_ANSWER, SW56_MAX_DIAL_STATUS461,14889
#define T1_CURRENT_CLK_SRC_REG	466,15030
#define T1_CURRENT_CLK_SRC_LEN	467,15067
#define SW56_CURRENT_LINE_RATE_REG	471,15146
#define SW56_CURRENT_LINE_RATE_LEN	472,15186
enum DDS_LOOP_RATES DDS_LOOP_RATES473,15223
	SW56_LINE_RATE_AUTO,474,15245
	SW56_LINE_RATE_AUTO, SW56_LINE_RATE_2400,474,15245
	SW56_LINE_RATE_AUTO, SW56_LINE_RATE_2400, SW56_LINE_RATE_4800,474,15245
	SW56_LINE_RATE_9600,475,15310
	SW56_LINE_RATE_9600, SW56_LINE_RATE_19200,475,15310
	SW56_LINE_RATE_9600, SW56_LINE_RATE_19200, SW56_LINE_RATE_38400,475,15310
        SW56_LINE_RATE_56K,476,15376
        SW56_LINE_RATE_56K, SW56_LINE_RATE_64K476,15376
#define T1_ALARM_STATUS_MASK_REG 484,15586
#define T1_ALARM_STATUS_MASK_LEN 485,15631
#define SW56_LOOP_STATUS_MASK_REG 486,15673
#define SW56_LOOP_STATUS_MASK_LEN 487,15743
#define T1_USER_REPORTABLE_ALARMS	489,15786
#define T1_ALARM_STATUS_MASK_DEF	490,15827
#define T1_ALARM_STATUS_MASK_NORMAL	491,15867
#define T1_ALL_SUPPORTED_ALARMS_MASK 492,15910
#define SW56_USER_REPORTABLE_ALARMS 496,16002
#define SW56_4W_ALL_ALARMS_MASK 497,16047
#define SW56_2W_ALL_ALARMS_MASK 498,16084
#define SW56_4W_ALARM_MASK_DDS 499,16121
#define SW56_4W_ALARM_MASK_SWITCHED 500,16166
#define SW56_2W_ALARM_MASK_SWITCHED 501,16211
#define T1_BPV_THRESHOLD_REG	505,16312
#define T1_CRC_THRESHOLD_REG	506,16347
#define T1_OOF_THRESHOLD_REG	507,16382
#define T1_THRESHOLD_REG_LEN	508,16417
#define DSU_SELF_TEST_RESULTS_REG	512,16492
#define DSU_SELF_TEST_RESULTS_LEN	513,16531
enum SELFTEST_STATUS_BITMAP SELFTEST_STATUS_BITMAP514,16567
	DSU_FLASH_CHKSUM_FAILED,515,16597
	DSU_FLASH_CHKSUM_FAILED, DSU_EEROM_CHKSUM_FAILED,515,16597
	DSU_FLASH_CHKSUM_FAILED, DSU_EEROM_CHKSUM_FAILED, DSU_RAM_TEST_FAILED,515,16597
        DSU_ROM_CHKSUM_FAILED,516,16670
        DSU_ROM_CHKSUM_FAILED, DSU_DTE_LOOP_FAILED,516,16670
        DSU_ROM_CHKSUM_FAILED, DSU_DTE_LOOP_FAILED, DSU_DTE_LOOP_WITH_TP_FAILED,516,16670
	DSU_MAX_SELF_TESTS517,16751
#define DSU_SELF_TEST_PASSED	520,16775
#define DSU_POWER_ON_DEFAULT_REG	523,16884
#define DSU_POWER_ON_DEFAULT_LEN	524,16922
#define DSU_DEFAULTS_ENABLE	525,16957
#define DSU_TEST_TYPE_SELECT_REG	529,17022
#define DSU_TEST_TYPE_SELECT_LEN	530,17060
enum TEST_TYPES TEST_TYPES531,17095
	DSU_LOOPBACK_NONE,532,17113
	DSU_LOOPBACK_NONE, DSU_DTE_LOOPBACK,532,17113
	DSU_LOOPBACK_NONE, DSU_DTE_LOOPBACK, DSU_NA_TEST,532,17113
	DSU_LOOPBACK_NONE, DSU_DTE_LOOPBACK, DSU_NA_TEST, DSU_LOCAL_PAYLOAD_LOOPBACK,532,17113
	DSU_LOCAL_NET_LOOPBACK,533,17192
	DSU_LOCAL_NET_LOOPBACK, DSU_SEND_TEST_PATTERN_TEST,533,17192
	DSU_LOCAL_NET_LOOPBACK, DSU_SEND_TEST_PATTERN_TEST, DSU_REMOTE_LOOPUP,533,17192
  	DSU_REMOTE_LOOPUP_SEND_PATTERN,534,17264
  	DSU_REMOTE_LOOPUP_SEND_PATTERN, DSU_REMOTE_LOOPDOWN,534,17264
  	DSU_REMOTE_LOOPUP_SEND_PATTERN, DSU_REMOTE_LOOPDOWN, DSU_SELF_TEST,534,17264
  	DSU_SMART_JACK_LOOPUP,535,17336
  	DSU_SMART_JACK_LOOPUP, DSU_SMART_JACK_LOOPUP_SEND_PATTERN,535,17336
  	DSU_SMART_JACK_LOOPUP, DSU_SMART_JACK_LOOPUP_SEND_PATTERN, DSU_SMART_JACK_LOOPDOWN,535,17336
	DSU_LAMP_TEST536,17423
enum REM_LPBACK_STATUS REM_LPBACK_STATUS540,17479
        DSU_NO_LPBACK,541,17504
        DSU_ATTEMPTING_LOOPUP,542,17527
        DSU_ATTEMPTING_LOOPDOWN,543,17558
        DSU_FAILED_REMOTE_LOOP,544,17591
        DSU_IN_LOOPBACK,545,17623
        DSU_TEST_STATUS_UNREADABLE546,17648
#define DSU_TEST_PATTERN_SELECT_REG	550,17722
#define DSU_TEST_PATTERN_SELECT_LEN	551,17763
enum T1_TEST_PATTERN_TYPES T1_TEST_PATTERN_TYPES553,17802
	T1_QRW,554,17831
	T1_QRW, T1_1IN8,554,17831
	T1_QRW, T1_1IN8, T1_3IN24,554,17831
	T1_QRW, T1_1IN8, T1_3IN24, T1_1IN1,554,17831
	T1_QRW, T1_1IN8, T1_3IN24, T1_1IN1, T1_ALL_1,554,17831
	T1_QRW, T1_1IN8, T1_3IN24, T1_1IN1, T1_ALL_1, T1_ALL_0,554,17831
	T1_QRW, T1_1IN8, T1_3IN24, T1_1IN1, T1_ALL_1, T1_ALL_0, T1_1IN2,554,17831
	T1_QRW, T1_1IN8, T1_3IN24, T1_1IN1, T1_ALL_1, T1_ALL_0, T1_1IN2, T1_1IN4,554,17831
     	T1_USER_TEST_PATTERN_1,555,17906
     	T1_USER_TEST_PATTERN_1, T1_USER_TEST_PATTERN_2555,17906
enum SW56_TEST_PATTERN_TYPES SW56_TEST_PATTERN_TYPES558,17963
	SW56_2047,559,17994
	SW56_2047, SW56_511,559,17994
	SW56_2047, SW56_511, SW56_STRESS_PATTERN_1,559,17994
	SW56_2047, SW56_511, SW56_STRESS_PATTERN_1, SW56_STRESS_PATTERN_2,559,17994
        SW56_STRESS_PATTERN_3,560,18063
        SW56_STRESS_PATTERN_3, SW56_STRESS_PATTERN_4560,18063
#define DSU_TEST_STATUS_REG	564,18147
#define DSU_TEST_STATUS_LEN	565,18181
enum T1_TEST_STATUS T1_TEST_STATUS566,18212
	ATTEMPTING_REMOTE_TEST,567,18234
	ATTEMPTING_REMOTE_TEST, PASSED_REMOTE_TEST,567,18234
	ATTEMPTING_REMOTE_TEST, PASSED_REMOTE_TEST, FAILED_REMOTE_TEST 567,18234
#define NO_REMOTE_TEST	569,18302
#define SW56_LOCAL_TEST	571,18348
#define SW56_TELCO_TEST	572,18379
#define	SW56_LOCAL_DTE_LOOP_TEST	573,18410
#define SW56_ATTEMPTING_REMOTE_LOOP	574,18448
#define SW56_PASSED_REMOTE_LOOP	575,18489
#define SW56_LOOPUP_FROM_REMOTE	576,18527
#define SW56_SENDING_TEST_PATTERN	577,18565
#define SW56_SYNCED_ON_TEST_PATTERN	578,18604
#define DSU_BERT_REG	581,18720
#define DSU_BERT_LEN	582,18748
#define SW56_INJECT_BITERR_REG	586,18821
#define SW56_INJECT_BITERR_LEN	587,18858
#define SW56_INJECT_BITERR_ENABLE	588,18892
#define SW56_REM_LOOP_DISABLE_REG	592,18974
#define SW56_REM_LOOP_DISABLE_LEN 593,19013
#define SW56_DISABLE_REM_LOOPBACK	594,19050
#define SW56_ENABLE_REM_LOOPBACK	595,19086
#define SW56_REM_LOOP_DISABLE_DEF	596,19121
#define T1_USER_TEST_PATTERN1_REG	600,19212
#define T1_USER_TEST_PATTERN2_REG	601,19251
#define T1_USER_TEST_PATTERN1_LEN	602,19290
#define T1_USER_TEST_PATTERN2_LEN	603,19326
#define T1_USER_TEST_PATTERN1_DEF	604,19362
#define T1_USER_TEST_PATTERN2_DEF	605,19407
#define T1_TEST_TIME_SELECT_REG	609,19486
#define T1_TEST_TIME_SELECT_LEN	610,19524
enum T1_TEST_TIME_SELECTIONS T1_TEST_TIME_SELECTIONS611,19559
	T1_TEST_TIME_1MIN,612,19590
	T1_TEST_TIME_1MIN, T1_TEST_TIME15MIN,612,19590
	T1_TEST_TIME_1MIN, T1_TEST_TIME15MIN, T1_TEST_TIME1HR,612,19590
        T1_TEST_TIME_UNLIMITED613,19648
#define T1_TEST_TIME_SELECT_DEF	615,19682
#define T1_TEST_FRACTION_REG	619,19772
#define T1_TEST_FRACTION_LEN	620,19807
enum T1_TEST_FRACTIONS T1_TEST_FRACTIONS621,19838
	T1_TEST_FRACTION_FULL_BW,622,19863
	T1_TEST_FRACTION_FULL_BW, T1_TEST_FRACTION_ALLOCATED_FRACTION622,19863
#define T1_TEST_FRACTION_DEF 624,19929
#define T1_FULL_BW_LOOPCODE_REG	628,20049
#define T1_FRACTIONAL_LOOPCODE_REG	629,20087
#define T1_TEST_LOOPCODE_LEN	630,20127
enum T1_TEST_LOOPCODES T1_TEST_LOOPCODES631,20159
	T1_STANDARD_LOOPCODE,632,20184
	T1_STANDARD_LOOPCODE, T1_ALTERNATE_LOOPCODE,632,20184
	T1_STANDARD_LOOPCODE, T1_ALTERNATE_LOOPCODE, T1_DISABLE_REM_LOOP,632,20184
	T1_V54_FRACTIONAL_LOOPCODE633,20252
#define T1_FULL_BW_LOOPCODE_DEF	635,20283
#define T1_FRACTIONAL_LOOPCODE_DEF	636,20337
#define T1_DACS_MODE_ENABLE_REG	640,20453
#define T1_DACS_MODE_ENABLE_LEN	641,20491
#define T1_DACS_MODE_DISABLED	642,20526
#define T1_DACS_MODE_ENABLED	643,20559
#define T1_DACS_MODE_ENABLE_DEF	644,20591
#define SW56_NETWORK_TYPE_REG	645,20645
#define SW56_NETWORK_TYPE_LEN	646,20681
enum SW56_NETWORK_TYPES SW56_NETWORK_TYPES647,20714
	SW56_DDS_MODE,648,20740
	SW56_DDS_MODE, SW56_ATT_MODE,648,20740
	SW56_DDS_MODE, SW56_ATT_MODE, SW56_SPRINT_MODE648,20740
#define DSU_CLOCK_SOURCE_REG	652,20816
#define DSU_CLOCK_SOURCE_LEN	653,20851
#define DSU_CLOCK_SOURCE_DEF	654,20883
#define T1_BACKUP_CLOCK_SOURCE_REG	658,20970
#define T1_BACKUP_CLOCK_SOURCE_LEN	659,21010
#define T1_BACKUP_CLOCK_SOURCE_DEF	660,21047
#define DSU_DATA_TRANSMIT_OPTIONS_REG	664,21141
#define DSU_DATA_TRANSMIT_OPTIONS_LEN	665,21184
enum DATA_TRANSMIT_OPTS DATA_TRANSMIT_OPTS666,21224
	DSU_TRANSMIT_NORMAL,667,21250
	DSU_TRANSMIT_NORMAL, DSU_TRANSMIT_INVERTED_SCRAMBLED,667,21250
	T1_TRANSMIT_56KBPS668,21306
#define DSU_DATA_TRANSMIT_OPTIONS_DEF	671,21331
#define SW56_REMOTE_CONFIG_DISABLE_REG	675,21440
#define SW56_REMOTE_CONFIG_DISABLE_LEN	676,21484
#define SW56_REMOTE_CONFIG_DISABLED	677,21525
#define SW56_REMOTE_CONFIG_ENABLED	678,21563
#define SW56_REMOTE_CONFIG_DEF	679,21600
#define SW56_REMOTE_CONFIGURATION_REG	682,21703
#define SW56_REMOTE_CONFIGURATION_LEN	683,21746
#define SW56_REMOTE_CONFIG_TERMINATE	684,21786
#define SW56_REMOTE_CONFIG_INITIATE	685,21825
#define SW56_V35_CONFIG_REG_LEN	691,21925
enum SW56_V35_OPTIONS SW56_V35_OPTIONS692,21960
enum SW56_V35_OPTIONS {SW56_CTS_OPTION_REG 692,21960
		       SW56_DSR_OPTION_REG,693,22011
		       SW56_DCD_OPTION_REG,694,22041
		       SW56_DTR_OPTION_REG,695,22071
		       SW56_RTS_TO_CTS_DELAY_REG696,22101
enum SW56_CTS_OPTIONS SW56_CTS_OPTIONS701,22181
	SW56_CTS_ALWAYS_ON,702,22205
	SW56_CTS_ALWAYS_ON, SW56_CTS_FOLLOWS_RTS,702,22205
	SW56_CTS_ALWAYS_ON, SW56_CTS_FOLLOWS_RTS, SW56_CTS_FOLLOWS_DCD,702,22205
	SW56_CTS_FOLLOWS_DCD_OR_RTS703,22270
#define SW56_CTS_OPTION_LEN	705,22302
#define SW56_CTS_OPTION_DEF	706,22355
enum SW56_DSR_OPTIONS SW56_DSR_OPTIONS710,22448
	SW56_DSR_ALWAYS_ON,711,22472
	SW56_DSR_ALWAYS_ON, SW56_DSR_OFF_WITH_OOS,711,22472
	SW56_DSR_ALWAYS_ON, SW56_DSR_OFF_WITH_OOS, SW56_DSR_OFF_WITH_TEST,711,22472
	SW56_DSR_OFF_WITH_OOS_OR_TEST712,22540
#define SW56_DSR_OPTION_LEN	714,22574
#define SW56_DSR_OPTION_DEF	715,22627
enum SW56_DCD_OPTIONS SW56_DCD_OPTIONS719,22734
	SW56_DCD_ALWAYS_ON,720,22758
	SW56_DCD_ALWAYS_ON, SW56_DCD_ON_WITH_DATA720,22758
#define SW56_DCD_OPTION_LEN 722,22804
#define SW56_DCD_OPTION_DEF	723,22858
enum SW56_DTR_OPTIONS SW56_DTR_OPTIONS727,22957
	SW56_DTR_IGNORED,728,22981
	SW56_DTR_NORMAL	729,23001
#define SW56_DTR_OPTION_LEN	731,23101
#define SW56_DTR_OPTION_DEF	732,23154
enum SW56_RTS_CTS_DELAY_OPTIONS SW56_RTS_CTS_DELAY_OPTIONS736,23237
	SW56_SHORT_RTS_CTS_DELAY,737,23271
	SW56_SHORT_RTS_CTS_DELAY, SW56_LONG_RTS_CTS_DELAY737,23271
#define SW56_RTS_TO_CTS_DELAY_DEF 739,23325
#define T1_LINE_TYPE_REG	743,23432
#define T1_LINE_TYPE_LEN	744,23463
#define T1_LINE_TYPE_B8ZS	745,23491
#define T1_LINE_TYPE_AMI	746,23520
#define T1_LINE_TYPE_DEF	747,23548
#define T1_FRAMING_TYPE_REG	751,23621
#define T1_FRAMING_TYPE_LEN	752,23655
#define T1_FRAMING_TYPE_ESF	753,23686
#define T1_FRAMING_TYPE_SF	754,23717
#define T1_FRAMING_TYPE_DEF	755,23747
#define T1_LBO_REG	759,23824
#define T1_LBO_LEN	760,23850
enum {T1_LBO_0DB,761,23873
enum {T1_LBO_0DB, T1_LBO_7_5DB,761,23873
enum {T1_LBO_0DB, T1_LBO_7_5DB, T1_LBO_15DB}761,23873
#define T1_LBO_DEF	762,23919
#define T1_YELLOW_ALARM_OPTION_REG	766,23991
#define T1_YELLOW_ALARM_OPTION_LEN	767,24031
#define T1_YELLOW_ALARM_DISABLED	768,24069
#define T1_YELLOW_ALARM_ENABLED	769,24105
#define T1_YELLOW_ALARM_OPTION_DEF	770,24141
#define T1_LOSS_OF_DTE_OPTION_REG	774,24236
#define T1_LOSS_OF_DTE_OPTION_LEN	775,24275
enum {T1_RTS_LOW,776,24311
enum {T1_RTS_LOW, T1_DTR_LOW,776,24311
enum {T1_RTS_LOW, T1_DTR_LOW, T1_NONE,776,24311
enum {T1_RTS_LOW, T1_DTR_LOW, T1_NONE, T1_RTS_OR_DTR_LOW}776,24311
#define T1_LOSS_OF_DTE_DEF	777,24370
#define T1_FRACTION_TIMESLOTS_REG	781,24451
#define T1_FRACTION_TIMESLOTS_LEN	782,24491
#define T1_FRACTION_TIMESLOTS_DEF	783,24527
#define T1_FRACTION_MAX_TIMESLOTS	784,24593
#define SW56_DDS_LINE_RATE_REG 787,24673
#define SW56_DDS_LINE_RATE_LEN 788,24716
#define SW56_DDS_LINE_RATE_DEF	790,24786
#define SW56_V25BIS_DIAL_REG	794,24877
#define SW56_V25BIS_DIAL_LEN	795,24913
enum {DISABLE_V25BIS_COMMANDS,796,24946
enum {DISABLE_V25BIS_COMMANDS, DIAL_REG_RESERVED1,796,24946
enum {DISABLE_V25BIS_COMMANDS, DIAL_REG_RESERVED1, ENABLE_V25BIS_COMMANDS}796,24946
#define SW56_V25BIS_DIAL_DEF	797,25022
#define SW56_VLL_ENABLE_REG	801,25137
#define SW56_VLL_ENABLE_LEN	802,25172
#define SW56_VLL_DISABLED	803,25203
#define SW56_VLL_ENABLED	804,25232
#define SW56_VLL_ENABLE_DEF	805,25268
#define SW56_V25BIS_RESULT_REG	809,25357
#define SW56_V25BIS_RESULT_LEN	810,25395
#define SW56_V25BIS_NUMERIC_REPLY	811,25429
#define SW56_V25BIS_VERBOSE_REPLY	812,25465
#define SW56_V25BIS_RESULT_DEF	813,25502
#define SW56_DIAL_COMMAND_REG	817,25588
#define SW56_DIAL_COMMAND_LEN	818,25625
#define SW56_DIAL_NUMBER	819,25658
#define SW56_AUTO_ANSWER_MODE_REG	823,25718
#define SW56_AUTO_ANSWER_MODE_LEN	824,25758
#define SW56_AUTO_ANSWER_DISABLED	825,25794
#define SW56_AUTO_ANSWER_ENABLED	826,25830
#define SW56_AUTO_ANSWER_MODE_DEF	827,25865
#define SW56_ANS_CALL_CMD_REG	830,25960
#define SW56_ANS_CALL_CMD_LEN	831,25997
#define SW56_ANSWER_INCOMING_CALL	832,26030
#define SW56_HANGUP_CALL_CMD_REG	836,26101
#define SW56_HANGUP_CALL_CMD_LEN 837,26140
#define SW56_HANGUP_CALL	838,26182
#define SW56_DIAL_NUMBER_REG	842,26253
#define SW56_DIAL_NUMBER_LEN	843,26289
typedef struct t1_interval_user_data_ t1_interval_user_data_848,26397
} t1_interval_user_data;t1_interval_user_data860,26602
typedef struct t1_current_interval_user_data_ t1_current_interval_user_data_862,26628
} t1_current_interval_user_data;t1_current_interval_user_data868,26829
typedef struct t1_total_user_data_ t1_total_user_data_870,26863
} t1_total_user_data;t1_total_user_data883,27081
#define T1_CURRENT_INTERVAL_DATA_REG	885,27104
#define	T1_CURRENT_INTERVAL_DATA_LEN	886,27147
#define T1_1406_INTERVAL_DATA_LEN	887,27188
#define T1_CURRENT_INTERVAL_SECONDS_REG	889,27226
#define T1_CURRENT_INTERVAL_SECONDS_LEN	890,27272
#define T1_TOTAL_DATA_REG	892,27315
#define T1_TOTAL_DATA_LEN	893,27348
#define T1_TOTAL_DATA_ACCESS_MSECS	894,27378
#define T1_SELECTED_INTERVAL_DATA_REG	896,27417
#define T1_VALID_INTERVALS_REG	898,27462
#define T1_VALID_INTERVALS_LEN	899,27500
#define T1_INTERVAL_SELECTOR_REG	901,27535
#define T1_INTERVAL_SELECTOR_LEN	902,27574
#define T1_MAX_PERFORMANCE_INTERVALS 903,27609
#define T1_WHOLE_24HR_ARCHIVE_REG	905,27659
#define T1_WHOLE_24HR_ARCHIVE_BASE_LEN	906,27699
#define T1_WHOLE_24HR_ARCHIVE_ACCESS_MSECS	907,27741
#define T1_CURRENT_INTERVAL_DATA_NEW_REG	910,27828
#define T1_VALID_INTERVALS_NEW_REG	911,27898
#define T1_INTERVAL_SELECTOR_NEW_REG	912,27957
#define T1_TOTAL_DATA_NEW_REG	913,28020
