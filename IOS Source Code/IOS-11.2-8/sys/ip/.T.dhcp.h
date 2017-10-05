
dhcp.h,3383
#define __DHCP_H__84,3305
#define DHCPC_STATUS_RUN 90,3382
#define DHCPC_STATUS_INVOKE 91,3456
#define DHCP_TEST_ALLOCATE 97,3578
#define DHCP_TEST_RELEASE 98,3635
#define DHCP_TEST_RENEW 99,3698
#define DHCPS_DEFAULT 108,3917
#define DHCPS_CONFIG 110,4005
#define DHCPS_VALID 112,4116
#define MAX_DHCP_SERVERS 115,4180
#define DHCPS_DEFAULT_VALID 117,4252
#define DHCP_default_server 119,4311
typedef struct dhcp_server_stats_ dhcp_server_stats_121,4376
} dhcp_server_stats;dhcp_server_stats128,4567
typedef struct dhcp_server_struct_ dhcp_server_struct_130,4589
} dhcp_server_type;dhcp_server_type135,4730
#define DHCP_SCAN_OK 138,4752
#define DHCP_SCAN_BAD 139,4781
#define DHCP_SCAN_UNKNOWN 140,4810
#define DHCP_OFFER_WAIT_SECS 146,4892
#define DHCP_ACK_WAIT_SECS 147,4959
#define DHCP_PURGE_WAIT_SECS 148,5025
#define DHCP_RELEASE_WAIT_SECS 149,5092
#define DHCP_HOLD_WAIT_SECS 150,5160
#define DHCP_MAX_REQUEST_RETRY 156,5315
#define DHCP_MAX_DISCOVER_RETRY 158,5462
#define DHCP_MAX_RELEASE_RETRY 173,6097
#define DHCPC_MIN_LEASE_LENGTH 174,6169
#define DHCPC_DEF_RENEWAL_CONST 175,6226
#define DHCPC_DEF_REBIND_CONST 176,6295
#define DHCP_MAX_STR 178,6363
typedef enum DHCP_LEASE_ADDR_STATES DHCP_LEASE_ADDR_STATES180,6437
} dhc_state_type;dhc_state_type190,6636
typedef struct ip_lease_type_ ip_lease_type_196,6747
} iplease_type;iplease_type210,7601
#define MAX_IPLEASE_ADDR 212,7618
#define MAX_IPLEASE_SECS 213,7687
#define DHCP_FIXED_SIZE 214,7766
#define MAX_DHCP_PAKS 215,7835
#define DHCP_SLEEP_INTERVAL 216,7913
#define DHCP_SLEEP_SMALL 217,7991
#define	DHCPS_PORT	218,8060
#define	DHCPC_PORT	219,8117
typedef struct dhcptype_ dhcptype_221,8175
#define	DHCP_BOOTREQUEST DHCP_BOOTREQUEST223,8243
#define	DHCP_BOOTREPLY DHCP_BOOTREPLY224,8313
} dhcptype;dhcptype240,9060
#define DHCP_FLAG_BROADCAST 245,9100
#define DHCO_LEN_OCTET 251,9175
#define DHCO_LEN_SHORT 252,9250
#define DHCO_LEN_LONG 253,9310
#define DHCP_MAGIC_COOKIE 256,9372
#define DHCO_PAD 258,9440
#define DHCO_END 259,9473
#define DHCO_IPADDR 260,9506
#define DHCO_LEASE 261,9539
#define DHCO_OVERLOAD 262,9572
#define DHCO_MSG_TYPE 263,9605
#define DHCO_SRVR_ID 264,9638
#define DHCO_PARAM_REQ_LIST 265,9671
#define DHCO_MESSAGE 266,9704
#define DHCO_MAX_MSG 267,9737
#define DHCO_RENEWAL_TIME 268,9770
#define DHCO_REBIND_TIME 269,9803
#define DHCO_CLASS_ID 270,9836
#define DHCO_CLIENT_ID 271,9869
#define DHCO_CLIENT_ID_TYPE 276,9961
#define DHCO_OVERFLOW_FILE 281,10022
#define DHCO_OVERFLOW_SNAME 282,10056
#define DHCO_OVERFLOW_ALLFLAGS 283,10090
#define DHCP_MIN_OPTION_FIELD 285,10166
#define DHCP_MIN_MSG_SIZE_OPTION 286,10205
#define DHCP_MAX_MSG_SIZE_OPTION 287,10244
#define DHCPM_DISCOVER 293,10315
#define DHCPM_OFFER 294,10348
#define DHCPM_REQUEST 295,10381
#define DHCPM_DECLINE 296,10414
#define DHCPM_ACK 297,10447
#define DHCPM_NAK 298,10480
#define DHCPM_RELEASE 299,10513
#define DHCP_RET_OK 304,10596
#define DHCP_RET_FAIL 305,10629
#define DHCP_SEND_BROADCAST 310,10708
#define DHCP_SEND_UNICAST 311,10741
typedef struct dhcp_values_ dhcp_values_320,11029
} dhcp_values;dhcp_values330,11393
#define DHCP_GETLONG(DHCP_GETLONG333,11410
#define DHCP_GETSHORT(DHCP_GETSHORT340,11547
#define DHCP_PUTSHORT(DHCP_PUTSHORT344,11624
#define DHCP_PUTLONG(DHCP_PUTLONG349,11708
