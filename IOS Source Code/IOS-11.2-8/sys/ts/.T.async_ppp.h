
async_ppp.h,714
#define __ASYNC_PPP_H__63,2265
#define PPP_FRAME_END 70,2382
#define PPP_FRAME_ESC 71,2409
#define PPP_ESCAPE_MECHANISM(PPP_ESCAPE_MECHANISM72,2436
#define PPP_XON 73,2479
#define PPP_XOFF 74,2500
#define PPPINITFCS 76,2523
#define PPPGOODFCS 77,2579
#define FCS_ACCUMULATE(FCS_ACCUMULATE81,2685
typedef unsigned short FrameCheckField;FrameCheckField84,2785
#define PPP_FCS_SIZE 86,2875
#define MAX_PPP_ENCAPSULATED_LENGTH(MAX_PPP_ENCAPSULATED_LENGTH96,3282
enum appp_outstate appp_outstate102,3391
    APPP_DATA,103,3412
    APPP_FCS_LSB,104,3427
    APPP_FCS_MSB,105,3445
    APPP_FRAME_END,106,3463
    APPP_IDLE107,3483
struct pppContext_ pppContext_110,3503
appp_get_oqueue(149,4940
