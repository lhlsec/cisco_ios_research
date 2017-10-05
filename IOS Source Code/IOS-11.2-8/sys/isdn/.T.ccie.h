
ccie.h,11036
#define     CCIE_H 75,2802
#define CODESET_0 83,3127
#define CODESET_5 84,3201
#define CODESET_6 85,3275
#define CODESET_7 86,3349
#define IE_HEAD_LENGTH 91,3513
#define MAX_NUMB_INFO_FIELDS 92,3549
#define CODESET_SHIFT_IE 98,3750
#define MORE_DATA_IE 99,3824
#define SENDING_COMPLETE_IE 100,3898
#define CONGEST_LEVEL_IE 101,3972
#define REPEAT_IND_IE 102,4046
#define SEGMENTED_MSG_IE 106,4169
#define CHANGE_STATUS_IE 107,4243
#define BEARER_CAPABILITY_IE 108,4317
#define CAUSE_IE 109,4391
#define CONNECTED_NUM_IE 110,4465
#define CALL_IDENT_IE 112,4540
#define CALL_STATE_IE 113,4614
#define CHANNEL_ID_IE 114,4688
#define FACILITY_IE 115,4762
#define PROGRESS_IND_IE 116,4836
#define NETWORK_FACILITY_IE 118,4911
#define NATIONAL_FACILITY_IE 120,4996
#define ENDPOINT_ID_IE 122,5077
#define NOTIFY_IND_IE 123,5151
#define DISPLAY_IE 124,5225
#define TIME_DATE_IE 125,5299
#define KEYPAD_FACILITY_IE 126,5373
#define INFO_REQ_IE 128,5448
#define SIGNAL_IE 129,5522
#define SWITCHHOOK_IE 130,5596
#define FEATURE_ACTIV_IE 131,5670
#define FEATURE_IND_IE 132,5744
#define INFO_RATE_IE 134,5819
#define TRANSIT_DELAY_EE_IE 135,5893
#define TRANSIT_DELAY_SEL_IE 136,5967
#define PACKET_BIN_PARMS_IE 137,6041
#define PACKET_WINDOW_IE 138,6115
#define PACKET_SIZE_IE 139,6189
#define CALLER_NUMBER_IE 141,6264
#define CALLER_SUB_ADDR_IE 142,6338
#define CALLED_NUMBER_IE 144,6413
#define CALLED_SUB_ADDR_IE 145,6487
#define ORIGINAL_CALLED_NUM_IE 146,6561
#define REDIRECTING_NUM_IE 147,6635
#define REDIRECTION_NUM_IE 148,6709
#define TRANSIT_NETWORK_SEL_IE 149,6783
#define RESTART_IND_IE 150,6857
#define USER_USER_FAC_IE 151,6931
#define LOW_LAYER_COMPAT_IE 152,7005
#define HIGH_LAYER_COMPAT_IE 153,7079
#define USER_USER_IE 154,7153
#define ESCAPE_FOR_EXT_IE 155,7227
#define CONNECTED_ADDRESS_IE 158,7318
#define FACILITY_SELECT_IE 159,7384
#define DESTINATION_ADDRESS_IE 160,7458
#define ORIGINATION_ADDRESS_IE 161,7532
#define LEER_ELEMENT 164,7680
#define TIMEOUT_1TR6 165,7757
#define CAUSE_1TR6_INVALID 166,7831
#define DATE_IE_LEN 167,7905
#define CONNECTED_ADDRESS_IE 170,8002
#define FACILITY_SELECT_IE 171,8068
#define DESTINATION_ADDRESS_IE 172,8142
#define ORIGINATION_ADDRESS_IE 173,8216
#define LEER_ELEMENT 176,8364
#define TIMEOUT_1TR6 177,8441
#define CAUSE_1TR6_INVALID 178,8515
#define DATE_IE_LEN 179,8589
#define KEINE_ANGABE 180,8663
#define TLN_WIRD_GERUFEN 181,8700
#define ADVICE_OF_CHARGE_IE 187,8822
#define USER_CODE_IE 188,8896
#define TRAVEL_CLASSMARK_IE 189,8970
#define ORIG_CALL_APPEAR_IE 190,9044
#define TERMINAL_CAP_IE 191,9118
#define DISPLAY_IE 192,9192
#define OTHER_CALL_REF_IE 193,9266
#define USER_USER_FAC_IE 195,9351
#define	MODE_DE_FONCTIONNEMENT_D_USER	196,9425
#define SERVICE_INDICATOR_IE 199,9502
#define CHARGING_INFORMATION_IE 200,9574
#define DATE_IE 201,9646
#define STATUS_FACILITIES_IE 202,9716
#define STATUS_GERUF_TLN_IE 203,9786
#define ADD_TRANSMIT_ATTR_IE 204,9858
#define SERVICE_INDICATOR_IE 207,9956
#define CHARGING_INFORMATION_IE 208,10028
#define DATE_IE 209,10100
#define STATUS_FACILITIES_IE 210,10170
#define STATUS_GERUF_TLN_IE 211,10240
#define ADD_TRANSMIT_ATTR_IE 212,10312
#define CHANNEL_STATUS_IE 219,10474
#define CCITT_STANDARD 225,10600
#define CEPT_NATIONAL_STANDARD 226,10674
#define LOC_USER 231,10825
#define LOC_PRIV_NETWORK 232,10899
#define LOC_PUB_NETWORK 233,10973
#define LOC_TRANSIT_NETWRK 234,11047
#define LOC_PUB_NETWORK_REMOTE 235,11121
#define LOC_PRIV_NETWRK_REMOTE 236,11195
#define LOC_PRIV_NETWRK_BEYOND 237,11269
#define BEAR_CAP_SPEECH 249,11757
#define BEAR_CAP_UNREST_DIG 250,11831
#define BEAR_CAP_REST_DIG 251,11905
#define BEAR_CAP_3DOT1K_AUDIO 252,11979
#define BEAR_CAP_7K_AUDIO 253,12053
#define BEAR_CAP_VIDEO 254,12127
#define BEAR_RATE_XFER_CIRCUIT 259,12257
#define BEAR_RATE_64KBPS 263,12360
#define BEAR_RATE_384KBPS 264,12434
#define BEAR_RATE_1536KBPS 265,12508
#define BEAR_RATE_1920KBPS 266,12582
#define CALL_STATE_MASK 270,12734
#define CALL_STATE_LENGTH 271,12808
#define EN_BLOC_NUMBER 277,12979
#define UNKNOWN_NUMBER 278,13053
#define INTL_NUMBER 279,13127
#define NAT_NUMBER 280,13201
#define LOC_NUMBER 281,13275
#define OVERLAP_NUMBER 282,13349
#define UNKNOWN_NUMB_PLAN 286,13446
#define ISDN_NUMB_PLAN 287,13520
#define TELEPHONY_NUMB_PLAN 288,13594
#define PRIVATE_NUMB_PLAN 289,13668
#define PRESENTATION_ALLOWED 293,13773
#define USER_PROVIDED 297,13875
#define OSI_SUB_ADDR 301,14027
#define USER_SPECIFIC_SUB_ADDR 302,14101
#define IA_5_FORMAT 303,14175
#define MAX_SUB_ADDR_LEN 305,14264
#define MAX_SUB_ADDR_LEN 307,14343
#define CAUSE_LENGTH 312,14502
#define DIAG_LEN 313,14576
#define NO_DIAG 314,14650
#define UNASSIGNED_NUMBER 322,14953
#define NO_ROUTE 323,15027
#define CHANNEL_UNACCEPTABLE 324,15101
#define NORMAL_CLEARING 325,15175
#define USER_BUSY 326,15249
#define NO_USER_RESPONDING 327,15323
#define CALL_REJECTED 328,15397
#define NUMBER_CHANGED 329,15471
#define DEST_OUT_OF_ORDER 330,15545
#define INVALID_NUMBER_FORMAT 331,15619
#define FACILITY_REJECTED 332,15693
#define RESP_TO_STAT_ENQ 333,15767
#define UNSPECIFIED_CAUSE 334,15841
#define NO_CIRCUIT_AVAILABLE 335,15915
#define NETWORK_OUT_OF_ORDER 336,15989
#define TEMPORARY_FAILURE 337,16063
#define NETWORK_CONGESTION 338,16137
#define ACCESS_INFO_DISCARDED 339,16211
#define REQ_CHANNEL_NOT_AVAIL 340,16285
#define PRE_EMPTED 341,16359
#define FACILITY_NOT_SUBSCRIBED0x32 342,16433
#define OUTGOING_CALL_BARRED 343,16507
#define INCOMING_CALL_BARRED 344,16581
#define BEAR_CAP_NOT_AVAIL 345,16655
#define SERVICE_NOT_AVAIL 346,16729
#define CAP_NOT_IMPLEMENTED 347,16803
#define CHAN_NOT_IMPLEMENTED 348,16877
#define FACILITY_NOT_IMPLEMENT 349,16951
#define INVALID_CALL_REF 350,17025
#define CHAN_DOES_NOT_EXIST 351,17099
#define INCOMPATIBLE_DEST 352,17173
#define INVALID_MSG_UNSPEC 353,17247
#define MANDATORY_IE_MISSING 354,17321
#define NONEXISTENT_MSG 355,17395
#define WRONG_MESSAGE 356,17469
#define BAD_INFO_ELEM 357,17543
#define INVALID_ELEM_CONTENTS 358,17617
#define WRONG_MSG_FOR_STATE 359,17691
#define TIMER_EXPIRY 360,17765
#define MANDATORY_IE_LEN_ERR 361,17839
#define PROTOCOL_ERROR 362,17913
#define INTERWORKING_UNSPEC 363,17987
#define USER_BUSY_1TR6 366,18078
#define OUT_OF_ORDER_1TR6 367,18152
#define CALL_REJECTED_1TR6 368,18226
#define USER_BUSY_1TR6 371,18323
#define OUT_OF_ORDER_1TR6 372,18397
#define CALL_REJECTED_1TR6 373,18471
#define INVALID_MODEM_STATE 385,18763
#define INVALID_MODEM_INFO 386,18799
#define NULL_MODEM_INFO 387,18835
#define UNDEFINED_B_IDB 388,18871
#define UNKNOWN_MODEM_ERROR 389,18907
#define UNFOUND_B_CHANNEL 390,18943
#define INTERFACE_PREF 394,19057
#define CHANNEL_PREF 395,19131
#define CHANGE_STATUS_LENGTH 396,19205
#define NO_CHANNEL 403,19417
#define B1_CHANNEL 404,19491
#define B2_CHANNEL 405,19565
#define ANY_CHANNEL 406,19639
#define CHANNELS_LISTED 407,19713
#define CHANNEL_NUMBERS 408,19787
#define CHANNEL_SLOT_MAP 409,19861
#define NO_CHANNEL_UNITS 410,19935
#define B_CHANNEL_UNITS 411,20009
#define H0_CHANNEL_UNITS 412,20083
#define H11_CHANNEL_UNITS 413,20157
#define H12_CHANNEL_UNITS 414,20231
#define CHANNEL_ID_LEN_BRI 415,20305
#define CHANNEL_ID_LEN_PRI 416,20379
#define SLOT_MAP 417,20453
#define PRI_INTERFACE 418,20528
#define NOT_CONGESTED 423,20682
#define CONGESTED 424,20756
#define DISPLAY_IE_LEN 427,20905
#define ENDPOINT_ID_LENGTH 431,21019
#define NATIONAL_INTERPRETATION 437,21173
#define CCITT_CEPT_INTERPRETATION 438,21247
#define PROFILE_PRESENTATION 439,21321
#define TELEPHONY_SERVICE 443,21421
#define GR3_FAX_SERVICE 444,21495
#define TELETEX_MIXED_SERVICE 445,21569
#define GR4_FAX_SERVICE 446,21643
#define TELETEX_CHAR_SERVICE 447,21717
#define ALPHA_MOS_VID_SERVICE 448,21791
#define TELEX_SERVICE 449,21865
#define MHS_SERVICE 450,21939
#define OSI_APPL_SERVICE 451,22013
#define UNKNOWN_SERVICE 455,22112
#define AUDIOSCRIPT_SERVICE 459,22224
#define AUDIOVIDEOTEX_SERVICE 460,22298
#define NON_STD_APPL_SERVICE 461,22372
#define HIGH_LAYER_LENGTH 463,22447
#define KEYPAD_FACILITY_LENGTH 468,22600
#define PROG_IND_LENGTH 473,22753
#define CALL_NOT_END_TO_END_ISDN 477,22850
#define IN_BAND_INFO 478,22924
#define BASIC_RATE_INTERFACE 483,23077
#define CHANNEL_NUMBER_PTR 484,23151
#define RESTART_SINGLE 485,23225
#define ALL_CHANNELS 486,23299
#define RESTART_SINGLE_INTERFACE 487,23373
#define RESTART_ALL 488,23447
#define RESTART_IND_LENGTH 489,23521
#define SIGNAL_IE_LENGTH 494,23674
#define DIAL_TONE_ON 498,23769
#define RINGBACK_ON 499,23805
#define INTCPT_TONE_ON 500,23841
#define REORDER_TONE_ON 501,23877
#define BUSY_TONE_ON 502,23913
#define CONFIRM_TONE_ON 503,23949
#define ANSWER_TONE_ON 504,23985
#define CW_TONE_ON 505,24021
#define OFFHOOK_WARN_TONE_ON 506,24057
#define CUSTOM_TONE_ON 507,24093
#define RECALL_DIAL_TONE_ON 508,24129
#define BUSY_VERIFY_TONE_ON 509,24165
#define ERROR_TONE_ON 510,24201
#define STUTTER_DT_TONE_ON 511,24237
#define EXPEN_ROUTE_TONE_ON 512,24273
#define TONES_OFF 513,24309
#define ALERT_ON_PATT_0 514,24345
#define ALERT_ON_PATT_1 515,24381
#define ALERT_ON_PATT_2 516,24417
#define ALERT_ON_PATT_3 517,24453
#define ALERT_ON_PATT_4 518,24489
#define ALERT_ON_PATT_5 519,24525
#define ALERT_ON_PATT_6 520,24561
#define RESERVED_SIGNAL 521,24597
#define ALERTING_OFF 522,24633
#define SIGNAL_RESERVED 523,24669
#define UNSPECIFIED_TONE 524,24705
#define ONHOOK_IDLE 531,24854
#define OFFHOOK 532,24928
#define BELL 534,25024
#define DIAL_ONHOOK 535,25098
#define SWITCHHOOK_LENGTH 536,25172
#define NATIONAL_FUNCTION 541,25325
#define TYPE_2_STIMULUS 542,25399
#define TERMINAL_CAP_LENGTH 543,25473
#define USER_SPEC_PROTO 548,25626
#define OSI_HIGH_LAYER_PROTO 549,25700
#define X244_PROTO 550,25774
#define MAINT_MGMT_PROTO 551,25848
#define IA5_CHAR_PROTO 552,25922
#define V120_RATE_ADPT_PROTO 553,25996
#define Q931_USER_NET_PROTO 554,26070
#define NT2_NT2_FAC_PROTO 555,26144
#define MINI_MSG_SERV_PROTO 556,26218
#define MAX_UUI_LEN 557,26292
#define AUTHORIZATION_CODE 560,26442
#define ADDRESS_DIGITS 561,26511
#define TERMINAL_ID 562,26582
#define SEMI_PERMANENT_LINK 565,26727
#define ACTIVATE_USE_OF_LINK 566,26800
#define ALL_SERVICES 567,26876
#define NO_ADDITIONAL_INFO 568,26953
#define CALL_REF_LEN_OFFSET 574,27167
#define CODESET_LEN 575,27241
#define CODESET_SHIFT 576,27315
#define EXTENSION_MASK 577,27389
#define FIXED_L3_MSG_HEADER_LEN 578,27463
#define NON_LOCKING_SHIFT_MASK 579,27537
#define SINGLE_BYTE_DATA_LEN 580,27611
#define SINGLE_BYTE_DATA_LOC 581,27685
#define SINGLE_BYTE_ID_LEN 582,27759
#define SINGLE_BYTE_ID_LOC 583,27833
#define SINGLE_BYTE_TYPE_2 584,27907
    } IE_HEAD;IE_HEAD599,28491
    } *CALL_STATE_ELEM;CALL_STATE_ELEM607,28736
#define GLOBAL_CALL_REF(GLOBAL_CALL_REF618,29209
