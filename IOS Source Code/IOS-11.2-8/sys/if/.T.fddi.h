
fddi.h,3220
#define __FDDI_H__79,3021
#define FDDI_ENCAPBYTES 83,3060
#define FDDI_8025_ENCAPBYTES 84,3099
#define FDDI_SAP_ENCAPBYTES 85,3138
#define FDDI_SNAP_ENCAPBYTES 86,3177
#define FDDI_ISO3_ENCAPBYTES	87,3216
#define FDDI_APOLLO_ENCAPBYTES 88,3252
#define FDDI_ENCAPWORDS 90,3292
#define FDDI_SAP_ENCAPWORDS 91,3330
#define FDDI_SNAP_ENCAPWORDS 92,3368
typedef struct fddi_hdr_ fddi_hdr_97,3454
} fddi_hdr;fddi_hdr102,3574
typedef struct _fddirif_t _fddirif_t104,3587
} fddirif_t;fddirif_t111,3732
typedef struct fddi_novell_ fddi_novell_119,4030
} fddi_novell;fddi_novell124,4180
typedef struct fddi_apollo_ fddi_apollo_129,4249
} fddi_apollo;fddi_apollo139,4481
#define FDDI_IP_MTU 141,4497
#define FDDI_GROUP	143,4555
#define FDDI_LOCAL	144,4580
#define FDDI_FRAME_SIZE	146,4606
#define FDDI_PREAMBLE	148,4637
#define FDDI_SD	149,4662
#define FDDI_FC	150,4682
#define FDDI_DA	151,4702
#define FDDI_SA	152,4722
#define FDDI_FCS 153,4746
#define FDDI_EFS	154,4770
#define FDDI_LLC 155,4790
#define FDDI_STATUS 156,4824
#define FDDI_INFO_SIZE 158,4859
#define FDDI_BUFFERSIZE_BYTES 166,5060
#define FDDI_OVERHEAD_BYTES 175,5258
#define FDDI_MINDGRAM	179,5376
#define FDDI_MAXDGRAM	181,5441
#define FDDI_ASYNCHRONOUS_FRAME	185,5568
#define FDDI_SYNCHRONOUS_FRAME 186,5605
#define FDDI_48BIT_ADDRESS	187,5646
#define FDDI_LLC_FRAME	188,5678
#define FDDI_PRIORITY_ZERO	189,5707
#define FDDI_LLC_FC_BYTE 191,5740
#define MAXFDDISIZE	196,5893
#define DEFAULT_T_TVX_TIME	198,5920
#define DEFAULT_T_TVX_MIN_TIME	199,5977
#define DEFAULT_T_TVX_MAX_TIME	200,6038
#define T_MIN_SYMBOLS	203,6076
#define T_MAX_SYMBOLS	204,6106
#define FDDI_SYMBOLS_SECOND	205,6137
#define FDDI_BYTES_SECOND	206,6174
#define TVX_MIN_SYMBOLS	208,6227
#define CISCO_DEFAULT_TVX	209,6300
#define DEFAULT_PHY_A_TVAL	211,6350
#define DEFAULT_PHY_B_TVAL	212,6384
#define WRAP_A_FAIL 214,6419
#define WRAP_B_FAIL 215,6454
#define THRU_A_FAIL 216,6489
#define FDDI_SHUTDOWN_DONE 217,6524
#define FDDI_RII 224,6619
#define FDDIT_RII 225,6643
#define FDDI_DUPLICATE_ADDRESS_CHK	230,6692
#define FDDI_SMT_FRAMES	231,6734
#define FDDI_LEM_SUPPORTED	232,6767
#define FDDI_CMT_ASSIST_SUPPORTED	233,6802
#define FDDI_VERSION_128	234,6843
#define FDDI_BRIDGE_CAM_SUPPORTED	235,6876
#define FDDI_PHY_GET_LS_SUPPORTED	236,6945
#define FDDI_ENCAPSULATE	237,6986
#define FDDI_FAST_CMT	238,7019
#define FDDI_FAST_CMT_ENB 239,7050
    FDDI_HW_CLAIMS=242,7105
    FDDI_HW_CLAIMS=IDB_TYPE_BASE_FDDI+242,7105
    FDDI_HW_BEACONS,243,7146
    FDDI_HW_TRACE_COUNT,244,7167
    FDDI_HW_SI_CLAIMS,246,7193
    FDDI_HW_SI_BEACONS,247,7216
    FDDI_HW_SI_TRACE_COUNT,248,7240
    FDDI_HW_CFM_STATE,250,7269
    FDDI_HW_TRT,251,7292
    FDDI_HW_TRT_NEG,252,7309
    FDDI_HW_BURST_COUNT,253,7330
    FDDI_HW_FRINC,254,7355
    FDDI_HW_TVX,255,7374
    FDDI_HW_OPERATIONAL,256,7391
    FDDI_HW_SHUTDOWN_REASONS,257,7416
    FDDI_HW_CLAIMS_STAT,259,7447
    FDDI_HW_BEACONS_STAT,260,7472
    FDDI_HW_TRACE_COUNT_STAT,261,7498
    FDDI_HW_CLEAR_STATS262,7528
#define FDDI_CAM_REFRESH_CHECK 277,8243
#define FDDI_CAM_INITIAL_REFRESH_PERIOD 278,8290
#define FDDI_CAM_REFRESH_PERIOD 279,8358
