
if_pas_dec21140.h,12105
#define DEC21140_MAX_PACKET	166,5864
#define DEC21140_MIN_PACKET	167,5920
#define DEC21140_CRC_SIZE	169,5975
#define DEC21140_LINK_UP	171,6005
#define DEC21140_LINK_DOWN	172,6033
#define DEC21140_STOP_DELAY	174,6064
#define DEC21140_RESET_DELAY	175,6111
#define DEC21140_DEVICE_VENDOR_ID	176,6157
#define DEC21140_MAGIC_PAK_PTR	178,6203
#define DEC21140_STARTEND	180,6254
#define DEC21140_START	181,6283
#define DEC21140_END	182,6310
#define DEC21140_MIDDLE	183,6335
#define DEC21140_REV_MASK	185,6364
#define DEC21140_IS_A_21140	186,6396
#define DEC21140_IS_A_21140A	187,6430
typedef struct dec21140_pci_regs_t_ dec21140_pci_regs_t_192,6521
} dec21140_pci_regs_t;dec21140_pci_regs_t202,6791
typedef struct dec21140_regs_t_ dec21140_regs_t_207,6870
} dec21140_regs_t;dec21140_regs_t239,7765
#define DEC21140_CSR0_TX_AUTO_POLL_200_US 246,7847
#define DEC21140_CSR0_CACHE_ALIGN_32_BYTES 247,7906
#define DEC21140_CSR0_CACHE_ALIGN_64_BYTES 248,7965
#define DEC21140_CSR0_CACHE_ALIGN_128_BYTES 249,8025
#define DEC21140_CSR0_PROG_BURST_LEN_32_BYTES 250,8085
#define DEC21140_CSR0_PROG_BURST_LEN_64_BYTES 251,8144
#define DEC21140_CSR0_PROG_BURST_LEN_128_BYTES 252,8204
#define DEC21140_CSR0_BIG_ENDIAN 253,8263
#define DEC21140_CSR0_DESCRPT_SKIP_LENGTH 254,8322
#define DEC21140_CSR0_SOFTWARE_RESET_MASK 255,8381
#define DEC21140_CSR1_TX_POLL_DEMAND	260,8453
#define DEC21140_CSR5_BUS_ERROR_BITS_MASK 265,8518
#define DEC21140_CSR5_BUS_ERROR_BITS_SHIFT	266,8576
#define DEC21140_CSR5_TX_PROCESS_STATE_MASK	267,8622
#define DEC21140_CSR5_TX_PROCESS_STATE_SHIFT	268,8677
#define DEC21140_CSR5_RX_PROCESS_STATE_MASK	269,8725
#define DEC21140_CSR5_RX_PROCESS_STATE_SHIFT	270,8780
#define DEC21140_CSR5_NORMAL_INT_SUMMARY 271,8828
#define DEC21140_CSR5_ABNORM_INT_SUMMARY 272,8887
#define DEC21140_CSR5_FATAL_BUS_ERROR	273,8946
#define DEC21140_CSR5_GP_TIMER_EXPIRED	274,8999
#define DEC21140_CSR5_RX_WATCHDOG_EXPIRED	275,9053
#define DEC21140_CSR5_RX_PROCESS_STOPPED 276,9106
#define DEC21140_CSR5_RX_BUFFER_UNAVAILABLE	277,9165
#define DEC21140_CSR5_RX_INTERRUPT_PENDING	278,9220
#define DEC21140_CSR5_RX_FIFO_UNDERFLOW	279,9274
#define DEC21140_CSR5_TX_JABBER_TIMEOUT	280,9329
#define DEC21140_CSR5_TX_BUFFER_UNAVAILABLE	281,9384
#define DEC21140_CSR5_TX_PROCESS_STOPPED 282,9439
#define DEC21140_CSR5_TX_INTERRUPT_PENDING	283,9498
#define DEC21140_CSR5_CLEAR_ALL_INTERRUPTS 284,9552
#define DEC21140_CSR6_MUST_BE_ONE	289,9627
#define DEC21140_CSR6_MEDIA_PORT_SCRAMBLE 290,9680
#define DEC21140_CSR6_MEDIA_PORT_MII_SYM_PCS 291,9739
#define DEC21140_CSR6_STORE_AND_FORWARD 292,9798
#define DEC21140_CSR6_HEARTBEAT_DISABLE 293,9857
#define DEC21140_CSR6_PORT_SELECT_MII_SYM	294,9916
#define DEC21140_CSR6_TX_TR_1024	295,9969
#define DEC21140_CSR6_TX_TR_512	296,10014
#define DEC21140_CSR6_TX_TR_256	297,10059
#define DEC21140_CSR6_TX_TR_128	298,10104
#define DEC21140_CSR6_TRANSMIT_START 299,10149
#define DEC21140_CSR6_TRANSMIT_STOP 300,10208
#define DEC21140_CSR6_OPER_MODE_MASK 302,10268
#define DEC21140_CSR6_OPER_MODE_NORMAL 303,10327
#define DEC21140_CSR6_OPER_MODE_INT_LOOPBACK 304,10386
#define DEC21140_CSR6_OPER_MODE_EXT_LOOPBACK 305,10445
#define DEC21140_CSR6_FULL_DUPLEX	307,10505
#define DEC21140_CSR6_PASS_ALL_MULTICAST 308,10551
#define DEC21140_CSR6_PROMISCUOUS_MODE 309,10610
#define DEC21140_CSR6_INVERSE_FILTERING 310,10669
#define DEC21140_CSR6_RECEIVE_START 311,10728
#define DEC21140_CSR6_RECEIVE_STOP 312,10787
#define DEC21140_CSR7_ENB_NORM_INT_SUMMARY 317,10862
#define DEC21140_CSR7_ENB_ABNORM_INT_SUMMARY 318,10921
#define DEC21140_CSR7_ENB_FATAL_BUS_ERROR_INT 319,10980
#define DEC21140_CSR7_ENB_GENL_PURP_TIMER_INT 320,11039
#define DEC21140_CSR7_ENB_RX_WATCHDOG_TO_INT 321,11098
#define DEC21140_CSR7_ENB_RX_STOPPED_INT 322,11157
#define DEC21140_CSR7_ENB_RX_BUF_UNAVAIL_INT 323,11216
#define DEC21140_CSR7_ENB_RX_INT 324,11275
#define DEC21140_CSR7_ENB_TX_UNDERFLOW_INT 325,11334
#define DEC21140_CSR7_ENB_TX_JABBER_TO_INT 326,11393
#define DEC21140_CSR7_ENB_TX_BUF_UNAVAIL_INT 327,11452
#define DEC21140_CSR7_ENB_TX_STOPPED_INT 328,11511
#define DEC21140_CSR7_ENB_TX_INT 329,11570
#define DEC21140_CSR7_DIS_GENL_PURP_TIMER_INT 331,11630
#define DEC21140_CSR7_DIS_TX_BUF_UNAVAIL_INT 332,11689
#define DEC21140_CSR7_DISABLE_ALL_INTERRUPTS	334,11749
#define DEC21140_CSR8_MISSED_FRAME_MASK 339,11821
#define DEC21140_CSR8_MISSED_FRAME_OVERFLOW 340,11880
#define DEC21140_CSR8_OVERFLOW	341,11939
#define DEC21140_CSR8_OVERFLOW_COUNT_MASK	342,11983
#define	DEC21140_CSR9_MII_READ	347,12052
#define	DEC21140_CSR9_MII_WRITE_1	348,12099
#define	DEC21140_CSR9_MII_WRITE_0	349,12145
#define	DEC21140_CSR9_MDC_CLOCK	350,12191
#define	DEC21140_CSR9_NOP	351,12239
#define	DEC21140_CSR9_READ	352,12278
#define DEC21140_CSR9_WRITE	353,12318
#define DEC21140_CSR9_SELECT_MII_PHY	354,12359
#define	DEC21140_CSR9_SELECT_SERIAL_ROM	355,12408
#define	DEC21140_CSR9_RX_BIT_SHIFT	356,12463
#define	DEC21140_CSR9_TX_BIT_SHIFT	357,12502
#define DEC21140_CSR12_GPC	362,12558
#define DEC21140_CSR12_LINK_SIGNAL_DETECT_IN	364,12599
#define DEC21140_CSR12_MICRO_TX_ENABLE	365,12655
#define DEC21140_CSR12_MICRO_TX_DISABLE	366,12709
#define DEC21140_CSR12_PA_OSC_TX_CLK_SELECT	367,12764
#define DEC21140_CSR12_PCI_TX_CLK_SEL_DEBUG	368,12819
#define DEC21140_CSR12_LED_ENABLE	369,12874
#define DEC21140_CSR12_LED_DISABLE	370,12920
#define DEC21140_CSR12_MII 372,12968
#define DEC21140_CSR12_RJ45 373,13027
#define DEC21140_CSR12_MICRO_6671_NORMAL 374,13086
#define DEC21140_CSR12_MICRO_6671_LOOPBACK 375,13145
#define DEC21140_CSR12_MOT_68836_NORMAL 376,13204
#define DEC21140_CSR12_MOT_68836_LOOPBACK 377,13263
#define DEC21140_CSR12_OUTPUT_MASK	379,13324
#define DEC21140_CSR12_INITIAL_VALUE 381,13372
#define DEC21140_CSR12_MICE_B2B_PACKET_BIT 388,13666
#define DEC21140_CSR12_MICE_FALSE_CRS_BIT 389,13725
#define DEC21140_CSR12_MICE_RD_WR_PCI 390,13784
#define DEC21140_CSR12_MICE_FALSE_CS_ENABLE 391,13843
#define DEC21140_CSR12_MICE_LED_ENABLE 392,13902
#define DEC21140_CSR12_MICE_MII 393,13961
#define DEC21140_CSR12_MICE_COUNTER_STROBE 394,14020
#define DEC21140_CSR12_MICE_ISL_ENABLE 395,14079
#define DEC21140_CSR12_MICE_OUTPUT_MASK 396,14138
#define DEC21140_CSR12_MICE_INITIAL_VALUE 398,14198
#define DEC21140_CSR12_MICE_IOFE_ISL_ENABLE	402,14356
#define DEC21140_CSR12_MICE_IOFE_DET_LEDS	403,14411
#define DEC21140_CSR12_MICE_IOFE_ISL_RESET	404,14464
#define DEC21140_CSR12_MICE_IOFE_INITIAL_VALUE 406,14519
#define DEC21140_CSR12_MICE_IOFE_DELAY	413,14781
#define MICE_ISL_CRC_MASK	418,14913
#define MICE_ISL_CRC_MASK_OFFSET	419,14948
#define	DP83840_CSR00_LOOPBACK	424,15043
#define	DP83840_CSR00_NO_LOOPBACK	425,15086
#define	DP83840_CSR00_SPEED_100MBIT	426,15128
#define	DP83840_CSR00_ISOLATE	427,15172
#define	DP83840_CSR00_NO_ISOLATE	428,15214
#define	DP83840_CSR00_FULL_DUPLEX	429,15255
#define DP83840_CSR01_LINK_STATUS	434,15348
#define DEC21140_CFCS_MASTER_OPERATION 439,15441
#define DEC21140_CFCS_IO_SPACE_ACCESS	440,15495
#define DEC21140_CFCS_MEM_SPACE_ACCESS	441,15545
#define DEC21140_CFLT_LATENCY_TIMER	442,15596
#define    DEC21140_CBIO_PCI0_IO_SPACE	447,15698
#define    DEC21140_CBIO_PCI1_IO_SPACE	448,15751
#define PA0_IO 452,15820
#define PA1_IO 453,15846
#define DEC21140_PCI_CFID_REG_OFFSET	460,15946
#define DEC21140_PCI_CFCS_REG_OFFSET	461,15993
#define DEC21140_PCI_CFRV_REG_OFFSET	462,16036
#define DEC21140_PCI_CFLT_REG_OFFSET	463,16079
#define DEC21140_PCI_CBIO_REG_OFFSET	464,16122
#define DEC21140_PCI_CBMA_REG_OFFSET	465,16165
#define DEC21140_PCI_CFIT_REG_OFFSET	466,16208
#define DEC21140_PCI_CFDA_REG_OFFSET	467,16251
#define DEC21140_SETUP_DESCRPT_STATUS	474,16414
#define DEC21140_SETUP_DESCRPT_CNTL_LEN	475,16467
#define    DEC21140_INITBLOCK_BYTES	480,16550
typedef struct dec21140_initblock_t_ dec21140_initblock_t_482,16598
} dec21140_initblock_t;dec21140_initblock_t486,16698
typedef struct dec21140_rx_desc_t_ dec21140_rx_desc_t;dec21140_rx_desc_t491,16767
struct dec21140_rx_desc_t_ dec21140_rx_desc_t_493,16823
#define DEC21140_RMD_OWN	500,17008
#define DEC21140_RMD_RX_COUNT_MASK 501,17052
#define DEC21140_RMD_MULTICAST_FRAME	502,17111
#define DEC21140_RMD_STP	503,17156
#define DEC21140_RMD_ENP	504,17193
#define DEC21140_RMD_FRAME_TYPE_MASK	506,17231
#define DEC21140_RMD_FRAME_TYPE_ETHERNET 507,17283
#define DEC21140_RMD_FRAME_TYPE_802_3	508,17337
#define DEC21140_RMD_ERR_SUMMARY	510,17387
#define DEC21140_RMD_DESCRIPTOR_ERROR	511,17434
#define DEC21140_RMD_DATA_TYPE_MASK	512,17483
#define DEC21140_RMD_RUNT_FRAME_ERROR	513,17534
#define DEC21140_RMD_FRAME_TOO_LONG_ERROR 514,17583
#define DEC21140_RMD_LATE_COLLISION_SEEN_ERROR 515,17638
#define DEC21140_RMD_RECEIVE_WATCHDOG_ERROR 516,17693
#define DEC21140_RMD_DRIBBLE_BITS_ERROR	517,17748
#define DEC21140_RMD_CRC_ERROR	518,17799
#define DEC21140_RMD_FIFO_OVERFLOW_ERROR 519,17842
#define DEC21140_RMD_ERROR_MASK 521,17897
#define DEC21140_RMD_RX_END_OF_RING 531,18282
#define DEC21140_RMD_SECOND_ADDRESS_CHAINED	532,18338
typedef struct dec21140_tx_desc_t_ dec21140_tx_desc_t;dec21140_tx_desc_t537,18440
struct dec21140_tx_desc_t_ dec21140_tx_desc_t_539,18496
#define DEC21140_TMD_OWN	549,18753
#define DEC21140_TMD_ERR_SUMMARY 551,18792
#define DEC21140_TMD_JABBER_TO 552,18847
#define DEC21140_TMD_CARRIER_LOSS 553,18902
#define DEC21140_TMD_NO_CARRIER 554,18957
#define DEC21140_TMD_LATE_COLL 555,19012
#define DEC21140_TMD_EXCESS_COLL 556,19067
#define DEC21140_TMD_HEART_FAIL 557,19122
#define DEC21140_TMD_COLL_COUNT	558,19177
#define DEC21140_TMD_COLL_SHIFT	559,19221
#define DEC21140_TMD_LINK_FAIL 560,19260
#define DEC21140_TMD_UFLO_ERR 561,19315
#define DEC21140_TMD_DEFERRED 562,19370
#define DEC21140_TMD_COMPLETION_INT	567,19508
#define DEC21140_TMD_ENP	568,19563
#define DEC21140_TMD_STP	569,19608
#define DEC21140_TMD_FT_PERFECT 570,19653
#define DEC21140_TMD_FT_HASH 571,19712
#define DEC21140_TMD_FT_INVERSE 572,19771
#define DEC21140_TMD_FT_HASHONLY 573,19830
#define DEC21140_TMD_SETUP_PACKET	575,19890
#define DEC21140_TMD_ADD_CRC_DISABLE	576,19942
#define DEC21140_TMD_TX_END_OF_RING	577,19998
#define DEC21140_TMD_SECOND_ADDRESS_CHAINED 578,20053
#define DEC21140_TMD_DISABLE_PADDING	580,20112
#define DEC21140_TMD_FILTER_BIT_ZERO	581,20167
#define DEC21140_PERF_HWAF_BROAD_ENTRY	587,20279
#define DEC21140_PERF_HWAF_UNI_ENTRY	588,20322
#define DEC21140_PERF_HWAF_NUM_ENTRIES	589,20363
#define station_uni_addr	591,20407
#define DEC21140_PERF_HWAF_ENTRY_IS_FREE(DEC21140_PERF_HWAF_ENTRY_IS_FREE593,20468
#define DEC21140_PERF_HWAF_ENTRY_IS_EQUAL(DEC21140_PERF_HWAF_ENTRY_IS_EQUAL597,20626
typedef struct dec21140_addr_entry_t_ dec21140_addr_entry_t_605,20889
} dec21140_addr_entry_t;dec21140_addr_entry_t610,20991
typedef struct dec21140_perf_hwaf_t_ dec21140_perf_hwaf_t_612,21017
} dec21140_perf_hwaf_t;dec21140_perf_hwaf_t614,21120
typedef dec21140_perf_hwaf_t dec21140_hwaf_t;dec21140_hwaf_t616,21145
typedef struct dec21140_imperf_hwaf_t_ dec21140_imperf_hwaf_t_618,21192
} dec21140_imperf_hwaf_t;dec21140_imperf_hwaf_t625,21357
typedef struct dec21140_tx_shadow_t_ dec21140_tx_shadow_t_630,21424
} dec21140_tx_shadow_t;dec21140_tx_shadow_t633,21552
typedef struct dec21140_instance_t_ dec21140_instance_t_639,21640
} dec21140_instance_t;dec21140_instance_t726,24870
#define DEC21140_ADVANCE_TX_RING_INDEX(DEC21140_ADVANCE_TX_RING_INDEX741,25218
#define DEC21140_RETRACT_TX_RING_INDEX(DEC21140_RETRACT_TX_RING_INDEX748,25413
#define DEC21140_ADVANCE_RX_RING_INDEX(DEC21140_ADVANCE_RX_RING_INDEX755,25609
#define DEC21140_RETRACT_RX_RING_INDEX(DEC21140_RETRACT_RX_RING_INDEX762,25804
#define DEC21140_RX_CONT_LENGTH(DEC21140_RX_CONT_LENGTH769,25998
static inline void dec21140_rxring_flush 780,26324
static inline void dec21140_flush_pak 791,26543
static inline void dec21140_cleanup_pak 800,26734
static inline ulong dec21140_tx_cl 817,27152
#define DEC21140_STATIC_INLINES_ONLY890,29727
