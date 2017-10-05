
tbridge_public.h,2093
#define MAC_HASH1 212,8114
#define MAC_HASH2 213,8151
#define ISMULTICAST(ISMULTICAST215,8189
enum TBRIDGE_IRB_RETVAL TBRIDGE_IRB_RETVAL220,8276
    TBRIDGE_IRB_FORWARD,221,8302
    TBRIDGE_IRB_RECEIVE,222,8356
    TBRIDGE_IRB_DISCARD,223,8411
enum TBRIDGE_FWD_RETVAL TBRIDGE_FWD_RETVAL229,8524
    TBRIDGE_FWD_DONE,230,8550
    TBRIDGE_FWD_FLOOD,231,8600
    TBRIDGE_FWD_SLOWSWITCH,232,8653
    TBRIDGE_FWD_RECEIVE,233,8727
enum TBRIDGE_TLB_RETVAL TBRIDGE_TLB_RETVAL239,8867
    TBRIDGE_TLB_DONE,240,8893
    TBRIDGE_TLB_NO_TXBUF,241,8944
    TBRIDGE_TLB_EXCEEDS_MTU,242,9006
    TBRIDGE_TLB_UNSUPPORTED,243,9073
    TBRIDGE_TLB_DEFERRED,244,9134
enum TBRIDGE_PAKMEM TBRIDGE_PAKMEM254,9391
    TBRPAK_RSP,255,9413
    TBRPAK_BFR,259,9531
    TBRPAK_MCI,260,9578
    TBRPAK_VBR,261,9625
enum TBRIDGE_TRANSLATE TBRIDGE_TRANSLATE269,9832
    TLB_BFR_TO_BFR,276,9975
    TLB_WITHIN_MCI,284,10148
    TLB_MCI_TO_MCI,285,10210
    TLB_BFR_TO_MCI,289,10319
typedef struct tbridge_dlli_type_ tbridge_dlli_type_295,10460
} tbridge_dlli_type;tbridge_dlli_type311,11311
enum DLLI_ATTRIBUTE_BIT DLLI_ATTRIBUTE_BIT313,11333
    DLLI_IRBPKT_BIT	314,11359
    DLLI_IPMCAST_BIT	315,11385
#define DLLI_IRBPKT	318,11416
#define DLLI_IPMCAST	319,11460
typedef struct tbmgd_type_ tbmgd_type_378,14067
} tbmgd_type;tbmgd_type385,14342
#define TBMGD_ATTRIBUTE_SIZE	387,14357
enum TBMGD_ATTRIBUTE_BIT TBMGD_ATTRIBUTE_BIT389,14407
    TBMGD_IGMP_RPT_SUPPRESS_BIT	390,14434
    TBMGD_IGMP_QRY_CURRENT_BIT	391,14472
#define TBMGD_IGMP_RPT_SUPPRESS	394,14513
#define TBMGD_IGMP_QRY_CURRENT	395,14581
struct tbifd_type_ tbifd_type_401,14760
#define TBIFD_ATTRIBUTE_SIZE	416,15200
enum TBIFD_ATTRIBUTE_BIT TBIFD_ATTRIBUTE_BIT418,15250
    TBIFD_FLOOD_BIT	426,15583
    TBIFD_AUTO_FLOOD_BIT	427,15610
    TBIFD_IPMCAST_GROUP_BIT	428,15641
    TBIFD_IPMCAST_ROUTER_BIT	429,15675
#define TBIFD_NO_FLOOD	432,15714
#define TBIFD_FLOOD	433,15743
#define TBIFD_AUTO_FLOOD	434,15788
#define TBIFD_IPMCAST_GROUP	435,15842
#define TBIFD_IPMCAST_ROUTER	436,15902
