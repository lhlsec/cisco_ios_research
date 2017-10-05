
cpp.h,2940
enum cpp_protos cpp_protos26,829
    CPP_PROTO_COMP_ORDERED 27,847
    CPP_PROTO_ORDERED 28,879
    CPP_PROTO_HDLC 29,906
    CPP_PROTO_FRAG 30,930
    CPP_PROTO_COMP_FRAG 31,954
#define CPP_SUPPORTED_PROTO 37,1050
#define CPP_DEFAULT_KEEPTIME	39,1097
#define CPP_ENCAPBYTES	41,1130
#define CPP_ORDERED_ENCAPBYTES	42,1155
typedef struct remote_isdn_type remote_isdn_type44,1189
} remote_isdn_type;remote_isdn_type48,1292
struct cpp_info_type_ cpp_info_type_50,1313
#define CPP_MAX_NEGOTIATION_SENT	72,2354
#define CPP_MAX_KEEP_PERIODS_MISSED	73,2389
#define CPP_NEG_DELAY 74,2427
struct cpp_group_type_ cpp_group_type_79,2523
static inline ushort INC_CPP_SEQ 87,2695
#define CPP_SEQ_NO_MASK	91,2794
#define CPP_FLAG_MASK	92,2825
#define CPP_INBAND_SEQ_NO	93,2854
#define MAX_CPP_RX_PAK	94,2887
#define CPP_NEG_CPROTO	99,2997
#define CPP_NEG_VERSION 100,3023
#define CPP_NEG_LENGTH 101,3049
#define CPP_NEG_FIELDS 102,3075
#define CPP_NEGBYTES	103,3101
#define CPP_CPROTO 105,3125
static inline ushort GETCPPSHORT 111,3236
static inline void PUTCPPSHORT 119,3388
static inline ulong GETCPPLONG 124,3505
static inline void PUTCPPLONG 135,3713
#define CPP_NEG_PORT_1_NUMBER	145,3925
#define CPP_NEG_PORT_2_NUMBER	146,3957
#define CPP_NEG_ORIG_PORT	147,3989
#define CPP_NEG_PROTOCOL	148,4017
#define CPP_NEG_PROTO_LIST	149,4044
#define CPP_NEG_PASSWORD	150,4073
#define CPP_NEG_ETHERNET_ID	151,4100
#define CPP_NEG_DISCONNECT	152,4130
#define CPP_NEG_COMPLETE	153,4159
#define CPP_NEG_LINE_INTEGRITY	154,4186
#define CPP_NEG_RESET_COMP	155,4220
#define CPP_NEG_IP_ADDRESS	156,4250
#define CPP_NEG_PORT_1_SUBADDR	157,4280
#define CPP_NEG_PORT_2_SUBADDR	158,4314
#define CPP_NEG_REMOTE_NAME	159,4348
#define CPP_SEND_PORT_1_NUMBER	164,4438
#define CPP_SEND_PORT_2_NUMBER	165,4475
#define CPP_SEND_ORIG_PORT	166,4512
#define CPP_SEND_PROTOCOL	167,4545
#define CPP_SEND_PROTO_LIST	168,4577
#define CPP_SEND_PASSWORD	169,4611
#define CPP_SEND_ETHERNET_ID	170,4643
#define CPP_SEND_DISCONNECT	171,4678
#define CPP_SEND_COMPLETE	172,4712
#define CPP_SEND_LINE_INTEGRITY	173,4744
#define CPP_SEND_RESET_COMP	174,4782
#define CPP_SEND_IP_ADDRESS	175,4816
#define CPP_SEND_PORT_1_SUBADDR	176,4850
#define CPP_SEND_PORT_2_SUBADDR	177,4889
#define CPP_SEND_REMOTE_NAME	178,4928
#define CPP_SEND_PORTS	180,4965
#define CPP_SEND_ON_UP 183,5097
#define CPP_ERR_NO_ERR	193,5443
#define CPP_ERR_PASSWORD_BAD	194,5469
#define CPP_ERR_NO_CALLBACK_NO	195,5500
#define CPP_ERR_BAD_ETHER	196,5533
#define CPP_ERR_CALL_YOU_BACK	197,5561
#define CPP_ERR_BAD_PACKET	198,5593
#define CPP_ERR_NO_PROTOS	199,5622
#define CPP_ERR_TIMEOUT	200,5650
#define CPP_ERR_LIV	201,5677
#define CPP_ERR_UNSPECIFIED	202,5700
#define CPP_GROUP_RX_SEQUENCE	207,5762
#define CPP_INTERFACE_NEG_TIMER 208,5794
enum cpp_command_type cpp_command_type213,5858
    CPP_AUTH,214,5882
    CPP_CALLBACK,215,5896
