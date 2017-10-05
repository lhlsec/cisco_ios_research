
dialer.h,2550
#define __DIALER_H__218,8557
#define LINK_ALL 220,8579
#define DIALER_MAX_P2P_CALLS 221,8613
#define DIALER_MAX_X25_CALLS	222,8691
#define DIALER_MAX_FR_CALLS	223,8763
#define MAXSTR	225,8834
typedef struct dialer_hdr_ dialer_hdr_230,8948
} dialer_hdr;dialer_hdr232,8995
#define DIALER_ENCAPBYTES 234,9010
#define V25BIS_FLAGS 235,9057
enum DIALERS DIALERS240,9116
    DIALER_NONE,241,9131
    DIALER_ISDN,242,9148
    DIALER_INBAND_SYNC,243,9165
    DIALER_INBAND_ASYNC,244,9189
    DIALER_DTR_SYNC,245,9214
    DIALER_PROFILE,246,9235
    DIALER_MAX247,9255
enum DIALER_STATE DIALER_STATE253,9299
    DIALER_READY,254,9319
    DIALER_PENDING,255,9381
    DIALER_CONNECTED,256,9431
    DIALER_OPERATIONAL,257,9481
    DIALER_DISCONNECTING,258,9534
    DIALER_WAITING,259,9607
    DIALER_SHUTDOWN	260,9673
enum DIALER_THRESHOLD_DIRECTION DIALER_THRESHOLD_DIRECTION263,9724
    DIALER_THRESH_OUTBOUND 264,9758
    DIALER_THRESH_EITHER,265,9804
    DIALER_THRESH_INBOUND266,9830
enum CALLBACK_TYPE CALLBACK_TYPE269,9861
    CALLBACK_NONE,270,9882
    CALLBACK_CLIENT,271,9901
    CALLBACK_SERVER272,9922
enum DIALER_DISCONNECT_REASON DIALER_DISCONNECT_REASON275,9946
    NO_DISCONNECT,276,9978
    DISCONNECT_IDLE277,9997
typedef dialerdbtype * (dialer_state_t)dialer_state_t280,10021
typedef dialerdbtype * (dialer_state_t) (dialerdbtype *, dialerpaktype dialerpaktype280,10021
struct dialerplisttype_ dialerplisttype_285,10159
struct dialer_stat_ dialer_stat_293,10294
struct dialerdbtype_ dialerdbtype_304,10547
#define SET_PAK_DIALER_INPUT(SET_PAK_DIALER_INPUT382,15416
#define GET_NETIDB(GET_NETIDB384,15517
#define HUNTGROUP_MEMBER(HUNTGROUP_MEMBER385,15568
#define HUNTGROUP_LEADER(HUNTGROUP_LEADER386,15634
#define IN_HUNTGROUP(IN_HUNTGROUP387,15690
#define DIALER_UP(DIALER_UP388,15770
#define DIALER_CALLUP(DIALER_CALLUP389,15844
#define DIALER_CALLING(DIALER_CALLING391,15949
#define DIALER_INPROGRESS(DIALER_INPROGRESS392,16020
#define DIALER_SHUT(DIALER_SHUT393,16095
#define DIALER_FREE(DIALER_FREE394,16167
#define DIALER_ENABLING(DIALER_ENABLING395,16236
#define DIALPOOL_MEMBER(DIALPOOL_MEMBER396,16307
static inline dialerdbtype *get_dialerdb(402,16400
static inline dialergrouptype *get_dialergroup 407,16489
static inline enum FSTYPE get_dialerfstype 418,16685
static inline boolean dialer_encap 433,16947
static inline boolean in_huntgroup 444,17253
static inline idbtype *get_netcfg_idb 461,17658
static inline hwidbtype *get_netidb 478,18000