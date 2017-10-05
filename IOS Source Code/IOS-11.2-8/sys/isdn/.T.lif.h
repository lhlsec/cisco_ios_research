
lif.h,16320
#define     LIF_H 66,2373
#define MINUS_ONE 74,2647
#define PLUS_ONE 75,2670
#define ZERO 76,2689
#define     L2P_LAPD 80,2729
#define     L2P_LAPB 81,2761
#define     L2P_V120 82,2793
#define     MAIL_TO_DEST 87,2941
#define     MAIL_TO_TRACER 88,2984
#define     TRACER_PVT_ID 100,3592
#define     TRACER_ID 101,3666
#define     ME_ID 102,3740
#define     TT_ID 103,3814
#define     RT_ID 104,3888
#define     HOST_ID 106,3977
#define     HOST_ID 108,4017
#define     CC_X25_ID 110,4098
#define     CC_ID 111,4172
#define     DMI_ID 112,4246
#define     V3_ID 113,4320
#define     P3_ID 114,4394
#define     L3_ID 115,4468
#define     L2_ID 116,4542
#define     HDLC_V_ID 117,4616
#define     HDLC_B2_TX_ID 118,4690
#define     HDLC_B2_RX_ID 119,4725
#define     HDLC_B1_TX_ID 120,4760
#define     HDLC_B1_RX_ID 121,4795
#define     HDLC_D_TX_ID 122,4830
#define     HDLC_D_RX_ID 123,4865
#define     HDLC_B2_ID 124,4900
#define     HDLC_B1_ID 125,4942
#define     HDLC_D_XMT_ID 126,4984
#define     HDLC_D_ID 127,5058
#define     HDLC_GENERIC_ID 128,5132
#define     KP_ID 129,5206
#define     WD_ID 130,5280
#define     KB_ID 131,5354
#define     UART_ID 132,5428
#define     L1_ID 133,5502
#define     DPDRV_TX_ID 136,5651
#define     DPDRV_RX_ID 137,5725
#define     LOG_ID 144,5826
#define     FDL_ID 145,5900
#define     HDLC_F2_ID 146,5974
#define     HDLC_F1_ID 147,6048
#define     SCAMP_ID 148,6122
#define     TASK1_ID 154,6242
#define     TASK2_ID 157,6337
#define     TASK3_ID 160,6432
#define ALL_ISDN_INTERFACES 163,6514
#define     AL_ERR_IND 186,7277
#define     AL_STAT_REQ 187,7316
#define     AL_STAT_IND 188,7355
#define     MAL_ACT_IND 189,7394
#define     MAL_ACT_REQ 190,7433
#define     MAL_DEACT_IND 191,7472
#define     MAL_RESET_REQ 192,7511
#define     AL_CHAN_REQ 197,7694
#define     AL_CHAN_IND 198,7733
#define     AL_CHAN_CONF 199,7772
#define     AL_CHAN_DISC_REQ 200,7811
#define     AL_CHAN_DISC_IND 201,7850
#define     MCC_DATA_REQ 207,7991
#define     MCC_DATA_IND 208,8030
#define     MNL_EST_IND 212,8125
#define     MNL_EST_CONF 213,8199
#define     MNL_MIM_REQ 214,8273
#define     MNL_MIM_IND 215,8347
#define     MNL_DATA_REQ 216,8421
#define     MNL_DATA_IND 217,8460
#define     MNL_ERR_IND 218,8499
#define     MNL_RESET_REQ 219,8538
#define     MNL_ACT_IND 220,8577
#define     MNL_DEACT_IND 221,8616
#define     MDL_ASS_REQ 225,8713
#define     MDL_ASS_IND 226,8752
#define     MDL_REM_REQ 227,8791
#define     MDL_DATA_REQ 228,8830
#define     MDL_DATA_IND 229,8904
#define     MDL_UI_DATA_REQ 230,8978
#define     MDL_UI_DATA_IND 231,9017
#define     MDL_ACT_REQ 232,9056
#define     MDL_XID_REQ 233,9095
#define     MDL_XID_IND 234,9134
#define     MDL_XID_RESP 235,9173
#define     MDL_XID_CONF 236,9212
#define     MDL_ERR_IND 237,9251
#define     MDL_ERR_RESP 238,9290
#define     MDL_RESET_REQ 239,9329
#define     MPH_DATA_IND 243,9425
#define     MPH_ACT_IND 244,9464
#define     MPH_DEACT_REQ 245,9503
#define     MPH_DEACT_IND 246,9542
#define     MPH_ERR_IND 247,9581
#define     MPH_STAT_REQ 251,9688
#define     MPH_STAT_IND 252,9727
#define     MPH_IID_IND 253,9766
#define     MPH_IIC_IND 254,9805
#define     MPH_EI1_IND 255,9844
#define     MPH_EI2_IND 256,9883
#define     MPH_FI2_REQ 257,9922
#define     NL_EST_REQ 261,9987
#define     NL_EST_CONF 262,10026
#define     NL_REL_REQ 263,10065
#define     NL_REL_IND 264,10104
#define     NL_REL_CONF 265,10143
#define     NL_MAINT_REQ 266,10182
#define     NL_MAINT_IND 267,10221
#define     NL_DATA_REQ 268,10260
#define     NL_DATA_IND 269,10299
#define     NL_UI_DATA_REQ 270,10338
#define     NL_UI_DATA_IND 271,10377
#define     NL_PU_EST_IND 272,10416
#define     DL_EST_REQ 276,10491
#define     DL_EST_IND 277,10530
#define     DL_EST_RESP 278,10569
#define     DL_EST_CONF 279,10643
#define     DL_REL_REQ 280,10682
#define     DL_REL_IND 281,10721
#define     DL_REL_CONF 282,10760
#define     DL_ASS_REQ 283,10799
#define     DL_DATA_REQ 284,10838
#define     DL_DATA_IND 285,10877
#define     DL_DATA_RESP 286,10916
#define     DL_DATA_CONF 287,10990
#define     DL_UI_DATA_REQ 288,11064
#define     DL_UI_DATA_IND 289,11103
#define     PH_DATA_REQ 293,11169
#define     PH_DATA_IND 294,11208
#define     PH_ACT_REQ 295,11247
#define     PH_ACT_IND 296,11286
#define     PH_DEACT_IND 297,11325
#define     UNEXPECTED 301,11389
#define     UNDEFINED 302,11428
#define TIMER_MASK_L3 306,11486
#define TIMER_MASK_CC 307,11525
#define     I 311,11643
#define     RR 312,11682
#define     RNR 313,11721
#define     SREJ 315,11775
#define     REJ 317,11820
#define     SABME 319,11866
#define     SABM 320,11905
#define     DM 321,11944
#define     UI 322,11983
#define     DISC 323,12022
#define     UA 324,12061
#define     FRMR 325,12100
#define     XID 326,12139
#define     ALERTING 334,12286
#define     CALL_PROC 335,12360
#define     CONNECT 336,12434
#define     CONNECT_ACK 337,12508
#define     PROGRESS 338,12582
#define     SETUP 339,12656
#define     SETUP_ACK 340,12730
#define     MODIFY 344,12843
#define     MODIFY_COMP 345,12917
#define     MODIFY_REJ 346,12991
#define     RESUME 347,13065
#define     RESUME_ACK 348,13139
#define     RESUME_REJ 349,13213
#define     SUSPEND 350,13287
#define     SUSPEND_ACK 351,13361
#define     SUSPEND_REJ 352,13435
#define     USER_INFO 353,13509
#define     DETACH 357,13613
#define     DISCONNECT 358,13687
#define     RELEASE 359,13761
#define     RELEASE_COMP 360,13835
#define     RESTART 361,13909
#define     RESTART_ACK 362,13983
#define     FACILITY_1TR6 366,14087
#define     FACILITY 367,14161
#define     STATUS_1TR6 368,14235
#define     REGISTER 369,14309
#define     FACILITY_CANCEL 370,14383
#define     CANCEL_REJ 371,14457
#define     FACILITY_ACK_1TR6 372,14531
#define     FACILITY_ACK 373,14605
#define     REGISTER_ACK 374,14679
#define     INFO_1TR6 375,14753
#define     NOTIFY 377,14851
#define     CANCEL_ACK 378,14925
#define     REGISTER_REJ_1TR6 379,14999
#define     FACILITY_REJ 380,15073
#define     FACILITY_REJ_1TR6 381,15147
#define     REGISTER_REJ 382,15221
#define     STATUS_ENQ 383,15295
#define     CONG_CON 384,15369
#define     CONG_CON_1TR6 385,15443
#define     INFO 386,15517
#define     STATUS 387,15591
#define     CC_SETUP_REQ 392,15711
#define     CC_SETUP_RESP 393,15785
#define     CC_SETUP_REJ_REQ 394,15859
#define     CC_INFO_REQ 395,15933
#define     CC_DISCONNECT_REQ 396,16007
#define     CC_RELEASE_REQ 397,16081
#define     CC_ALERTING_REQ 398,16155
#define     CC_BROADCAST_RESP 399,16229
#define     CC_CALL_PROC_REQ 400,16303
#define     CC_PROGRESS_REQ 401,16377
#define     CC_NOTIFY_REQ 402,16451
#define     CC_RESUME_REQ 403,16525
#define     CC_RESUME_REJ 404,16599
#define     CC_SUSPEND_REQ 405,16673
#define     CC_SUSPEND_REJ 406,16747
#define     CC_RESET_REQ 407,16821
#define     CC_CONNECT_ACK_REQ 408,16895
#define     CC_FACILITY_REQ 409,16969
#define     CC_RESUME_REJ_REQ 410,17043
#define     CC_SUSPEND_REJ_REQ 411,17117
#define     CC_RESUME_RESP 412,17191
#define     CC_SUSPEND_RESP 413,17265
#define     CC_RESTART_REQ 414,17339
#define     CC_TONE_DISC_REQ 415,17413
#define     CC_MORE_INFO_REQ 416,17487
#define     CC_STATUS_REQ 417,17561
#define     CC_CHNG_STATE_REQ 418,17635
#define     CC_REL_COMP_REQ 419,17709
#define     CC_USER_INFO_REQ 420,17783
#define     CC_CONG_CON_REQ 421,17857
#define     CC_FAC_ACK_REQ 422,17931
#define     CC_FAC_REJ_REQ 423,18005
#define     CC_SETUP_IND 427,18124
#define     CC_SETUP_CONF 428,18198
#define     CC_SETUP_COMP_IND 429,18272
#define     CC_INFO_IND 430,18346
#define     CC_ALERTING_IND 431,18420
#define     CC_PROGRESS_IND 432,18494
#define     CC_DISCONNECT_IND 433,18568
#define     CC_RELEASE_IND 434,18642
#define     CC_RELEASE_IND_QUIET 435,18716
#define     CC_CALL_PROC_IND 436,18793
#define     CC_RELEASE_CONF 437,18867
#define     CC_STATUS_IND 438,18941
#define     CC_ERROR_IND 439,19015
#define     CC_RESUME_CONF 440,19089
#define     CC_NOTIFY_IND 441,19163
#define     CC_SUSPEND_CONF 442,19237
#define     CC_RESET_CONF 443,19311
#define     CC_FACILITY_ACK 444,19385
#define     CC_FACILITY_REJ 445,19459
#define     CC_TIMEOUT_IND 446,19533
#define     CC_USER_INFO_IND 447,19607
#define     CC_RESTART_CONF 448,19681
#define     CC_RESTART_IND 449,19755
#define     CC_FACILITY_IND 450,19829
#define     CC_MORE_INFO_IND 451,19903
#define     CC_CONG_CON_IND 452,19977
#define     CC_REGISTER_ACK 453,20051
#define     CC_REGISTER_REJ 454,20125
#define     CC_CANCEL_ACK 455,20199
#define     CC_CANCEL_REJ 456,20273
#define     CC_FAC_CANCEL_REQ 460,20392
#define     CC_DETACH_REQ 461,20466
#define     CC_REGISTER_REQ 462,20540
#define     CC_RESTART_ACK_REQ 463,20614
#define     CC_KEY_HOLD_IND 465,20749
#define     SS_MASK 471,20855
#define     MAN_INFO 475,20934
#define     MAN_REQ 476,20981
#define     SERVICE 482,21090
#define     SERVICE_ACK 483,21164
#define     KP_DIGIT_1 487,21305
#define     KP_DIGIT_2 488,21379
#define     KP_DIGIT_3 489,21453
#define     KP_DIGIT_4 490,21527
#define     KP_DIGIT_5 491,21601
#define     KP_DIGIT_6 492,21675
#define     KP_DIGIT_7 493,21749
#define     KP_DIGIT_8 494,21823
#define     KP_DIGIT_9 495,21897
#define     KP_DIGIT_0 496,21971
#define     KP_DIGIT_STAR 497,22045
#define     KP_DIGIT_POUND 498,22119
#define     KP_HOOK_FLASH 499,22193
#define     KP_ON_HOOK 500,22267
#define     KP_OFF_HOOK 501,22341
#define     TR_IDLE 505,22471
#define     TR_DIALTONE 506,22545
#define     TR_DIALING 507,22619
#define     TR_RINGING 508,22693
#define     TR_BUSY 509,22767
#define     TR_CONVERSATION 510,22841
#define     TR_RINGBACK 511,22915
#define     TR_ERROR 512,22989
#define     TR_COLLECT 513,23063
#define     TR_LOCKOUT 514,23137
#define     TR_DATA 515,23211
#define     TR_CALLWAIT 516,23285
#define     TR_ONHOLD 517,23359
#define     TR_RELEASING 518,23433
#define     TR_RECONNECT 519,23507
#define     TR_SUSPENDED 520,23581
#define     TR_ROUTING 521,23655
#define     CC_ON_HOOK 525,23784
#define     CC_OFF_HOOK 526,23858
#define KP_STOP_RING 536,24273
#define KP_START_RING 537,24308
#define KP_START_CW 538,24343
#define KP_START_DATARING 539,24378
#define KP_STOP_DATARING 540,24413
#define KP_TEST_CW_RING 541,24448
#define KP_TEST_RING 542,24483
#define KP_STOP_TONE 543,24518
#define KP_START_SPECIALDT 544,24553
#define KP_START_DIALTONE 545,24588
#define KP_START_RINGBACK 546,24623
#define KP_START_BUSYTONE 547,24658
#define KP_DISCONNECT_CHAN 548,24693
#define KP_CONNECT_B1 549,24728
#define KP_CONNECT_B2 550,24763
#define KP_DTMF_DETECT_OFF 551,24798
#define KP_DTMF_DETECT_ON 552,24833
#define STOP_RING 554,24874
#define START_RING 555,24909
#define START_CW 556,24944
#define START_DATARING 557,24979
#define STOP_DATARING 558,25014
#define TEST_CW_RING 559,25049
#define TEST_RING 560,25084
#define STOP_TONE 561,25119
#define START_SPECIALDT 562,25154
#define START_DIALTONE 563,25189
#define START_RINGBACK 564,25224
#define START_BUSYTONE 565,25259
#define KP_DISCONNECT_B1 566,25294
#define KP_DISCONNECT_B2 567,25329
#define DISCONNECT_CHAN 568,25364
#define CONNECT_B1 569,25399
#define CONNECT_B2 570,25434
#define DTMF_DETECT_OFF 571,25469
#define DTMF_DETECT_ON 572,25504
#define MOD_HANDSET_VOL 573,25539
#define HSW_OFF 579,25752
#define HSW_ON 580,25784
#define     DIGIT_COMP_TEST_0 587,25957
#define     DIGIT_COMP_TEST_1 588,26031
#define     DIGIT_COMP_TEST_2 589,26105
#define     DIGIT_COMP_TEST_3 590,26179
#define     DIGIT_COMP_TEST_4 591,26253
#define     DIGIT_COMP_TEST_5 592,26327
#define     DIGIT_COMP_TEST_6 593,26401
#define     DIGIT_COMP_TEST_7 594,26475
#define     DIGIT_COMP_TEST_8 595,26549
#define     DIGIT_COMP_TEST_9 596,26623
#define HOST_MSG 600,26783
#define CONGESTION_IE 605,26869
#define CHAN_STATUS_IE 609,26986
#define CHAN_RESTARTED 612,27082
#define CHAN_MAINTENANCE 613,27156
#define CHAN_ENQUIRY 614,27230
#define CHAN_RESULT 615,27304
#define CHAN_RESTART_REQ 616,27378
#define CHAN_RESTART_ERR 617,27452
#define CHAN_MAINT_REQ 618,27526
#define CALLED_ALERTING 622,27645
#define CALLED_ANSWER 623,27719
#define INTERNAL_ERROR 624,27793
#define MESSAGE_ERROR 625,27867
#define STATUS_REPORT 626,27941
#define MORE_DIGITS 627,28015
#define CALL_CONNECTED 628,28089
#define     HOST_CALL_REQUEST 632,28209
#define     HOST_INCOMING_CALL 633,28250
#define     HOST_ALERTING 634,28291
#define     HOST_CONNECT 635,28332
#define     HOST_DISCONNECT 636,28373
#define     HOST_DISCONNECT_ACK 637,28414
#define     HOST_PROCEEDING 638,28455
#define     HOST_MORE_INFO 639,28496
#define     HOST_PROGRESS 640,28537
#define     HOST_QUERY 641,28578
#define     HOST_QUERY_RESPONSE 642,28619
#define     HOST_INFORMATION 643,28660
#define     HOST_CALL_SENT 644,28701
#define     HOST_FACILITY 645,28742
#define     HOST_FACILITY_ACK 646,28783
#define     HOST_FACILITY_REJ 647,28824
#define     HOST_FACILITY_REGISTER 648,28865
#define     HOST_REGISTER_ACK 649,28906
#define     HOST_REGISTER_REJ 650,28947
#define     HOST_FACILITY_CANCEL 651,28988
#define     HOST_CANCEL_ACK 652,29029
#define     HOST_CANCEL_REJ 653,29070
#define     HOST_STATUS 654,29111
#define     HOST_TERM_REGISTER 655,29152
#define     HOST_TERM_REGISTER_ACK 656,29201
#define     HOST_TERM_REGISTER_NACK 657,29250
#define     HOST_KEY_HOLD 658,29299
#define CALL_ACCEPT 664,29518
#define CALL_DISC 665,29592
#define CALL_INCOMING 666,29666
#define CALL_OUTGOING 667,29740
#define CALL_PROGRESS 668,29814
#define CALL_REJECTION 669,29888
#define CALL_UUI 670,29962
#define CALL_FACILITY 671,30036
#define CALL_FACILITY_ACK 672,30110
#define CALL_FACILITY_REJ 673,30184
#define CALL_CONGESTION 674,30258
#define CALL_NOTIFY 675,30332
#define CHAN_STATUS 676,30406
#define CALL_CLEARED 677,30480
#define CALL_INFO 678,30554
#define CALL_FACILITY_REGISTER 679,30628
#define CALL_REGISTER_ACK 680,30702
#define CALL_REGISTER_REJ 681,30776
#define CALL_FACILITY_CANCEL 682,30850
#define CALL_CANCEL_ACK 683,30924
#define CALL_CANCEL_REJ 684,30998
#define CALL_RELEASE 685,31072
#define CALL_CONNECT 686,31146
#define     BROADCAST_TEI 690,31247
#define     BROADCAST_CES 691,31321
#define     Q931_SAPI 695,31434
#define     X25_SAPI 696,31508
#define     TERM_LOOP_SAPI 698,31600
#define     ME_SAPI 700,31681
#define     LAPB_SAPI 701,31755
#define     REGULAR_MAIL 705,31850
#define     UP_MAIL 706,31924
#define     DOWN_MAIL 707,31998
#define     EXPRESS_MAIL 708,32072
#define     NOW 712,32164
#define     UNASSIGNED 716,32269
#define     LAPD_OFFSET 717,32343
#define     UI_DATA_OFFSET 718,32417
#define     DATA_OFFSET 719,32491
#define     Qdot931 720,32565
#define     MaintProto 721,32639
#define     TERM_UNREGISTERED 722,32713
#define     EDITOR_PD_1TR6 724,32803
#define     TRANSACTION_PD_1TR6 725,32877
#define     EDITOR_PD_1TR6 728,32974
#define     TRANSACTION_PD_1TR6 729,33048
#define     Q931_DSL_CHAN_ID 731,33129
#define     DSS1_D_CHANNEL 732,33203
#define     SIGNALING_CES 734,33264
#define     VOICE_DEFAULT_CES 737,33374
#define     DATA_DEFAULT_CES 738,33408
} BUFFER_TYPE;BUFFER_TYPE760,33864
} INTF_STATES;INTF_STATES768,33949
struct PacketPacket778,34363
typedef struct Packet *PKT_ID, PKT;PKT786,34752
struct PrimitivePrimitive790,34855
typedef struct Primitive PRIM, *PRIM_ID;PRIM_ID807,35913
PKG, * PKG_ID;PKG_ID824,36652
#define     MTEX_ClearTimer(MTEX_ClearTimer832,36937
#define     MTEX_ReadMail(MTEX_ReadMail834,36999
#define     MTEX_ReturnBlock(MTEX_ReturnBlock835,37054
#define     MTEX_SendMail(MTEX_SendMail836,37112
#define     MTEX_SetTimer(MTEX_SetTimer841,37289
#define     LIF_AddTimer(LIF_AddTimer843,37359
#define     LIF_I_DATA_OFFSET(LIF_I_DATA_OFFSET848,37551
#define     LIF_UI_DATA_OFFSET(LIF_UI_DATA_OFFSET853,37694
#define ROUNDUP(ROUNDUP864,38139
#define BLKSIZE(BLKSIZE865,38208
#define	MY_DEF_LLD	995,43217
