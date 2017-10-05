
ec.h,4180
#define EC_IO	34,1114
#define ECM_NOTPRESENT	36,1150
#define ECM_PRES_NODATA	37,1176
#define ECM_PRES_AND_DATA	38,1203
#define ECM_7000	39,1231
#define ECM_OK 41,1252
#define ECM_QUIT 42,1272
#define ECM_ERROR 43,1292
#define EC_SWREV(EC_SWREV46,1383
#define EC_HWREV(EC_HWREV47,1422
#define EC_SWREV_1_1 48,1466
#define EC_SWREV_1_2 49,1535
#define EC_HWREV_2 50,1604
#define EC_HWREV_4 51,1683
#define LEVEL_EC 55,1795
#define EC_MBSIZE 57,1851
#define ECTEST_T_AMB 60,1992
#define ECTEST_T_AIR 61,2062
#define ECTEST_RES_0 62,2132
#define ECTEST_RES_1 63,2202
#define ECTEST_V_P5 64,2272
#define ECTEST_V_P12 65,2342
#define ECTEST_V_N12 66,2412
#define ECTEST_V_N5 67,2482
#define ECTESTPTS 68,2552
#define ECVALIDTESTS 69,2622
#define ECSHOWBUFLEN 70,2692
#define ECSTATBUFLEN 71,2762
#define TESTPOINTLEN	73,2833
#define WARNLEN	74,2857
#define SHLEN 75,2876
} ectest_t;ectest_t83,3272
struct ecshow_t_ ecshow_t_86,3364
} echdr_t;echdr_t101,4192
} eccnt_t;eccnt_t120,4563
} ec_t;ec_t143,5965
#define EC_STATE_NODEV 146,6000
#define EC_STATE_GETREV 147,6070
#define EC_STATE_MBINIT 148,6140
#define EC_STATE_IDLE 149,6210
#define EC_STATE_OUTPUT 150,6280
#define EC_STATE_INPUT 151,6350
#define EC_STATE_CMD 152,6420
#define EC_STATE_FLASH 153,6490
#define EC_STATE_ERROR 154,6560
#define EC_STATE_MAX 155,6630
#define ECCTL_CLRINT 180,7616
#define ECCTL_REV 181,7693
#define ECCTL_MBADDR 182,7770
#define ECCTL_WARN 183,7847
#define ECCTL_SHUT 184,7924
#define ECCTL_RESET 185,8001
#define ECCTL_LOOP_IND 186,8078
#define ECCTL_LOOP_REQ 187,8155
#define ECCTL_MBLOOP_IND 188,8232
#define ECCTL_MBLOOP_REQ 189,8309
#define ECCTL_MON_IND 190,8386
#define ECCTL_MON_REQ 191,8463
#define ECCTL_BCMD 192,8540
#define ECCTL_UNDEF1 193,8617
#define ECCTL_UNDEF2 194,8694
#define ECCTL_FINISH 195,8771
#define ECCTL_FLASH_VPP 196,8848
#define ECCTL_FLASH_RESET 197,8925
#define ECCTL_FLASH_INFO 198,9003
#define ECCTL_FLASH_READ 199,9081
#define ECCTL_FLASH_SEEK 200,9159
#define ECCTL_FLASH_ERASE 201,9237
#define ECCTL_FLASH_ZERO 202,9315
#define ECCTL_FLASH_IND 203,9393
#define ECCTL_FLASH_REQ 204,9473
#define ECCTL_MAX 205,9551
#define ECCTL_CLRINT 207,9586
#define ECCTL_REV 208,9663
#define ECCTL_MBADDR 209,9740
#define ECCTL_CHKSUM 210,9817
#define ECCTL_FLINFO 211,9894
#define ECCTL_FLASH_SEEK 212,9971
#define ECCTL_UNDEF1 213,10048
#define ECCTL_FLASH_ERASE 214,10125
#define ECCTL_FLASH_IND 215,10202
#define ECCTL_FLASH_REQ 216,10281
#define ECCTL_MON_IND 217,10358
#define ECCTL_MON_REQ 218,10435
#define ECCTL_WARN 219,10512
#define ECCTL_SHUT 220,10589
#define ECCTL_BCMD 221,10666
#define ECCTL_FINISH 222,10743
#define ECCTL_LOOP_IND 223,10820
#define ECCTL_LOOP_REQ 224,10897
#define ECCTL_MBLOOP_IND 225,10974
#define ECCTL_MBLOOP_REQ 226,11051
#define ECCTL_FLASH_VPP 227,11128
#define ECCTL_FLASH_ZERO 228,11205
#define ECCTL_FLASH_RESET 229,11282
#define ECCTL_FLASH_INFO 230,11360
#define ECCTL_FLASH_READ 231,11438
#define ECCTL_MAX 232,11516
#define EC_OK 241,11736
#define ENVMERR_V_5 242,11764
#define ENVMERR_V_M5 243,11840
#define ENVMERR_V_12 244,11916
#define ENVMERR_V_M12 245,11992
#define ENVMERR_TEMP 246,12068
#define ENVMERR_FAN 247,12144
#define ENVMERR_BAD_CTL 248,12220
#define ENVMERR_BATTERY 249,12296
#define ENVMERR_CALB 250,12372
#define ENVMERR_SHUT 251,12448
#define ENVMERR_HEATER 252,12524
#define ENVMERR_UNKNOWN 253,12600
#define ENVMERRMAX 254,12628
#define ECERRMIN 257,12713
#define ECERR_ENVM 258,12792
#define ECERR_BUSY 259,12871
#define ECERR_SWREV 260,12950
#define ECERR_HWREV 261,13029
#define ECERR_UNEXP_INTR 262,13108
#define ECERR_BCMD 263,13187
#define ECERR_WRLEN_MIN 264,13266
#define ECERR_WRACK_CTL 265,13345
#define ECERR_WRACK_MOD 266,13424
#define ECERR_RDLEN_MIN 267,13503
#define ECERR_RDACK 268,13582
#define ECERR_RDACK_TIME 269,13661
#define ECERR_CHKSUM 270,13740
#define ECERR_CHKSUM_TIME 271,13819
#define ECERR_CLRINT 272,13898
#define ECERR_FLSEEK_TIME 273,13977
#define ECERR_FLER_TIME 274,14056
#define ECERR_UNKNOWN 275,14135
#define ECERRMAX 276,14214
