
if_c4000_bt8360.h,8109
#define T1_CTRL_JASEL 34,1100
#define T1_CTRL_INIT 35,1180
#define T1_CTRL_REMLOOP 36,1253
#define T1_CTRL_RLOOP 37,1320
#define T1_CTRL_LLOOP 39,1459
#define T1_CLOCK_SOURCE 40,1525
#define T1_STATUS_DPM	46,1729
#define T1_STATUS_LOS 47,1799
#define T1_FINT_STATUS 52,1934
#define T1_FINT_MAP 53,2024
#define T1_FINT_ENABLE 55,2184
#define T1_CFG_REG 63,2340
#define  T1_CFG_ESF 65,2410
#define  T1_CFG_ZBTSI 66,2480
#define  T1_CFG_B8ZS_TX 67,2552
#define  T1_CFG_B8ZS_RX 68,2626
#define  T1_CFG_VAZO 69,2700
#define  T1_CFG_T1DM 70,2779
#define  T1_CFG_INTTXCLK 71,2850
#define  T1_CFG_CLKRECVY 72,2929
#define T1_CTRL_REG 74,3006
#define  T1_CTRL_BMC 76,3078
#define  T1_CTRL_BMC_193 77,3147
#define  T1_CTRL_BMC_BURST 78,3220
#define  T1_CTRL_BMC_192 79,3285
#define  T1_CTRL_BMC_256 80,3358
#define  T1_CTRL_TXSYNC 81,3431
#define  T1_CTRL_SLIPSYNC 82,3501
#define  T1_CTRL_INFREQ 83,3573
#define  T1_CTRL_INFREQ_24 84,3644
#define  T1_CTRL_INFREQ_12 85,3709
#define  T1_CTRL_INFREQ_6 86,3774
#define  T1_CTRL_INFREQ_1 87,3839
#define  T1_CTRL_OUTFREQ 88,3904
#define  T1_CTRL_OUTFREQ_2 89,3976
#define  T1_CTRL_OUTFREQ_4 90,4041
#define  T1_CTRL_OUTFREQ_1 91,4106
#define  T1_CTRL_OUTFREQ_8 92,4171
#define T1_FRAME_REG 94,4237
#define  T1_FRAME_FBIT 96,4309
#define  T1_FRAME_CRCBIT 97,4381
#define  T1_FRAME_DLBIT 98,4452
#define  T1_FRAME_ZBIT 99,4525
#define  T1_FRAME_NETLOOP 100,4594
#define  T1_FRAME_LINELOOP 101,4665
#define  T1_FRAME_EQPMTLOOP 102,4733
#define  T1_FRAME_PYLDLOOP 103,4806
#define T1_SIGCTRL_REG 105,4878
#define  T1_SIGCTRL_REINSERT 107,4944
#define  T1_SIGCTRL_FREEZE 108,5020
#define  T1_SIGCTRL_DEBOUNCE 109,5084
#define  T1_SIGCTRL_DISABLE 110,5150
#define T1_FRAMCTRL_REG 112,5223
#define  T1_FRAMCTRL_CRCCHK 114,5295
#define  T1_FRAMCTRL_FTFRAM 115,5359
#define  T1_FRAMCTRL_SFFRAM 116,5429
#define  T1_FRAMCTRL_ESF 117,5497
#define  T1_FRAMCTRL_2OF5 118,5566
#define  T1_FRAMCTRL_2OF6 119,5631
#define  T1_FRAMCTRL_DISABLE 120,5696
#define  T1_FRAMCTRL_FORCE 121,5759
#define T1_SLIP_REG 123,5821
#define  T1_SLIP_SLPMVIP 125,5894
#define  T1_SLIP_TXMVIP 126,5963
#define  T1_SLIP_BPV 127,6036
#define  T1_SLIP_FBE 128,6107
#define  T1_SLIP_UNICODE 129,6176
#define  T1_SLIP_SHORTDLY 130,6241
#define  T1_SLIP_INTCLK 131,6314
#define  T1_SLIP_INHIBSIG 132,6387
#define T1_ALARM_REG 134,6459
#define  T1_ALARM_TXAIS 136,6536
#define  T1_ALARM_TXYELLOW 137,6597
#define  T1_ALARM_RXAIS 138,6667
#define  T1_ALARM_RXYELLOW 139,6728
#define  T1_ALARM_OOF 140,6798
#define  T1_ALARM_SFYELLOW 141,6868
#define  T1_ALARM_ZERO 142,6939
#define  T1_ALARM_MONITOR 143,7012
#define T1_ALRMINT_REG 145,7084
#define  T1_ALRMINT_LOS 147,7161
#define  T1_ALRMINT_OOF 148,7222
#define  T1_ALRMINT_AIS 149,7283
#define  T1_ALRMINT_YELLOW 150,7344
#define  T1_ALRMINT_FREEZE 151,7414
#define  T1_ALRMINT_ALATCH 152,7483
#define  T1_ALRMINT_ELATCH 153,7543
#define  T1_ALRMINT_CLATCH 154,7603
#define T1_ERRINT_REG 156,7666
#define  T1_ERRINT_PDV 158,7747
#define  T1_ERRINT_CRC 159,7818
#define  T1_ERRINT_SLIP 160,7875
#define  T1_ERRINT_SEVERR 161,7933
#define  T1_ERRINT_BPVCTR 162,8007
#define  T1_ERRINT_FBECTR 163,8075
#define  T1_ERRINT_CRCCTR 164,8143
#define  T1_ERRINT_COFACTR 165,8211
#define T1_TXCTRL_REG 167,8281
#define  T1_TXCTRL_IDLE 169,8361
#define  T1_TXCTRL_FCS 170,8418
#define  T1_TXCTRL_ABORT 171,8480
#define  T1_TXCTRL_MOP 172,8538
#define  T1_TXCTRL_MSGPTR 173,8601
#define T1_RXCTRL_REG 175,8671
#define  T1_RXCTRL_MOPINT 177,8748
#define  T1_RXCTRL_BOPINT 178,8822
#define  T1_RXCTRL_2KBSRX 179,8896
#define  T1_RXCTRL_RXUNFORM 180,8965
#define  T1_RXCTRL_G802 181,9032
#define  T1_RXCTRL_PATTERN 182,9104
#define  T1_RXCTRL_2KBSTX 183,9177
#define  T1_RXCTRL_STACKINT 184,9246
#define T1_LOOPGD_REG 186,9320
#define  T1_LOOPGD_CODEGEN 188,9400
#define  T1_LOOPGD_OVERWRITE 189,9470
#define  T1_LOOPGD_CODELEN 190,9537
#define   T1_LOOPGD_CODELEN_4 191,9607
#define   T1_LOOPGD_CODELEN_5 192,9676
#define   T1_LOOPGD_CODELEN_6 193,9745
#define   T1_LOOPGD_CODELEN_7 194,9814
#define  T1_LOOPGD_ACTDET 195,9883
#define   T1_LOOPGD_ACTDET_4 196,9958
#define   T1_LOOPGD_ACTDET_5 197,10027
#define   T1_LOOPGD_ACTDET_6 198,10096
#define   T1_LOOPGD_ACTDET_7 199,10165
#define  T1_LOOPGD_DEACTDET 200,10234
#define   T1_LOOPGD_DEACTDET_4 201,10311
#define   T1_LOOPGD_DEACTDET_5 202,10380
#define   T1_LOOPGD_DEACTDET_6 203,10449
#define   T1_LOOPGD_DEACTDET_7 204,10518
#define T1_LOOPCG_REG 206,10588
#define  T1_LOOPCG_SEQ 208,10669
#define T1_LOOPCODE_ACT_REG 210,10739
#define  T1_LOOPCODE_ACT_INT 212,10813
#define  T1_LOOPCODE_ACT_SEQ 213,10892
#define T1_LOOPCODE_DEACT_REG 215,10969
#define  T1_LOOPCODE_DEACT_INT 216,11049
#define  T1_LOOPCODE_DEACT_SEQ 217,11126
#define T1_MISCSTAT_REG 219,11202
#define  T1_MISCSTAT_RAM 221,11262
#define  T1_MISCSTAT_SLC 222,11330
#define T1_ALSSTAT_REG 224,11407
#define  T1_ALSSTAT_LOS 226,11487
#define  T1_ALSSTAT_OOF 227,11556
#define  T1_ALSSTAT_AIS 228,11623
#define  T1_ALSSTAT_YELLOW 229,11694
#define  T1_ALSSTAT_FREEZE 230,11761
#define  T1_ALSSTAT_LOOPACT 231,11832
#define  T1_ALSSTAT_LOOPDEACT 232,11911
#define  T1_ALSSTAT_SIGSTACK 233,11990
#define T1_ERRSTAT_REG 235,12071
#define  T1_ERRSTAT_PDV 237,12154
#define  T1_ERRSTAT_ZEROS 238,12226
#define  T1_ERRSTAT_B8ZS 239,12303
#define  T1_ERRSTAT_ZBTS1 240,12375
#define  T1_ERRSTAT_CRC 241,12438
#define  T1_ERRSTAT_SEVERR 242,12506
#define  T1_ERRSTAT_SLIPEV 243,12580
#define  T1_ERRSTAT_SLIPDIR 244,12645
#define T1_RXSTATUS_REG 246,12715
#define  T1_RXSTATUS_IDLE 248,12795
#define  T1_RXSTATUS_ABORT 249,12858
#define  T1_RXSTATUS_BADFCS 250,12930
#define  T1_RXSTATUS_ENDMOP 251,12999
#define  T1_RXSTATUS_MSGPTR 252,13066
#define T1_BPV_LSB 254,13137
#define T1_BPV_MSB 255,13198
#define T1_FBE_CTR 256,13258
#define T1_CRC_CTR 257,13317
#define T1_COFA_CTR 259,13377
#define  T1_COFA_CRC 261,13437
#define  T1_COFA_MASK 262,13474
#define T1_INTSRC_REG 264,13512
#define  T1_INTSRC_ALS 266,13585
#define  T1_INTSRC_ERROR 267,13657
#define  T1_INTSRC_RXDATA 268,13710
#define  T1_INTSRC_TXDATA 269,13770
#define  T1_INTSRC_BPVCTR 270,13830
#define  T1_INTSRC_FBECTR 271,13889
#define  T1_INTSRC_CRCCTR 272,13960
#define  T1_INTSRC_COFACTR 273,14025
#define T1_VERSION 275,14086
#define  T1_VERSION_VERSION 277,14151
#define  T1_VERSION_VERSION_UGA_360_1 279,14218
#define  T1_VERSION_VERSION_UGA_360_2 280,14259
#define  T1_VERSION_PART 281,14300
#define  T1_VERSION_PART_UGA_360 282,14377
#define T1_FRAMSTAT_REG 284,14422
#define  T1_FRAMSTAT_ACTIVE 286,14504
#define  T1_FRAMSTAT_ACTIVE6 287,14565
#define  T1_FRAMSTAT_TXOOF 288,14630
#define  T1_FRAMSTAT_TXYELLOW 289,14691
#define  T1_FRAMSTAT_SLIP 290,14755
#define  T1_FRAMSTAT_RXCTR 291,14828
#define  T1_FRAMSTAT_TXBCTR 292,14896
#define  T1_FRAMSTAT_TXFCTR 293,14969
#define T1_SIGCHG_REG 295,15038
#define  T1_SIGCHG_CHAN 297,15118
#define  T1_SIGCHG_BBIT 298,15180
#define  T1_SIGCHG_ABIT 299,15233
#define  T1_SIGCHG_MORE 300,15286
#define T1_RATE_CONTROL 306,15445
#define  T1_RATE_TS_ACTIVE 308,15483
#define  T1_RATE_AB_SIGNAL 309,15520
#define  T1_RATE_TX_PCM_IDLE 310,15557
#define  T1_RATE_TX_TS_INDICATE 311,15594
#define  T1_RATE_RX_PCM_IDLE 312,15631
#define  T1_RATE_RX_SIG_INSERT 313,15668
#define  T1_RATE_LOOP_TX_CH 314,15705
#define  T1_RATE_SLIP_BUFFER 315,15742
#define T1_TX_PCM_CONTROL 317,15780
#define  T1_TX_PCM_D_BIT 319,15818
#define  T1_TX_PCM_C_BIT 320,15855
#define  T1_TX_PCM_B_BIT 321,15892
#define  T1_TX_PCM_A_BIT 322,15929
#define  T1_TX_PCM_IDLE_OUT 323,15966
#define  T1_TX_PCM_SIG_LOCAL 324,16003
#define  T1_TX_PCM_LOOP 325,16040
#define  T1_TX_PCM_INSERT_SIG 326,16077
#define T1_FRAMING_TIMER 328,16115
#define T1_FRAMER_OFFSET 330,16152
#define T1_RAM_OFFSET 331,16230
#define T1_CONTROL_OFFSET 332,16308
#define T1_STATUS_OFFSET 333,16395
#define T1_INT_CONTROL_OFFSET 334,16481
#define T1_LED_OFFSET 336,16623
