
parser_defs_atm.h,2355
enum	ATM_CMD	ATM_CMD89,3395
	ATM_CMD_PVC,90,3410
	ATM_CMD_IDLETIMEOUT,91,3446
	ATM_CMD_AAL,92,3512
	ATM_CMD_ADDRESS,93,3547
	ATM_CMD_TXBUFF,94,3597
	ATM_CMD_RXBUFF,95,3636
	ATM_CMD_EXCQ,96,3675
	ATM_CMD_MTU,97,3724
	ATM_CMD_STATIC,98,3762
	ATM_CMD_VC,99,3818
	ATM_CMD_RATEQ,100,3853
	ATM_CMD_RAWQ,101,3896
	ATM_CMD_VC_PER_VP,102,3938
	ATM_CMD_VPFILTER,103,3985
	ATM_CMD_NSAP,104,4036
	ATM_CMD_ESI,105,4085
	ATM_CMD_E3FRAMING,106,4132
	ATM_CMD_DS3FRAMING,107,4178
	ATM_CMD_CLOCKING,108,4226
	ATM_CMD_SONET,109,4271
	ATM_CMD_SMDS,110,4325
	ATM_CMD_MULTICAST,111,4375
	ATM_CMD_MID_PER_VC,112,4439
	ATM_CMD_DS3SCRAMBLE,113,4487
	ATM_CMD_1577EXT,114,4545
	ATM_CMD_ARPSERV,115,4601
	ATM_CMD_ADDREG,116,4653
	ATM_CMD_ILMIPOLL_INTERVAL,117,4719
	ATM_CMD_MTP_INTERVAL,118,4787
	ATM_CMD_UNI_VERSION,119,4859
	ATM_CMD_MTP_SIG,120,4906
	ATM_CMD_MTUREJECT,121,4959
        ATM_CMD_CLASS,122,5032
	ATM_CMD_SIG_TRAF_SHAPE,123,5107
#define ATM_MAP_VC 127,5183
#define ATM_MAP_NSAP 128,5206
#define	ATM_MAP_SMDS 129,5229
#define ATM_MAP_MIN 131,5253
#define ATM_MAP_MAX 132,5276
#define ATM_MAP_RATE_MIN 136,5404
#define ATM_MAP_RATE_MAX 137,5431
#define ATM_MAP_BROAD 139,5465
#define ATM_MAP_FWPK0 140,5490
#define ATM_MAP_BKPK0 141,5515
#define ATM_MAP_FWPK1 142,5540
#define ATM_MAP_BKPK1 143,5565
#define ATM_MAP_FWST0 144,5590
#define ATM_MAP_BKST0 145,5615
#define ATM_MAP_FWST1 146,5640
#define ATM_MAP_BKST1 147,5665
#define ATM_MAP_FWMX0 148,5690
#define ATM_MAP_BKMX0 149,5716
#define ATM_MAP_FWMX1 150,5742
#define ATM_MAP_BKMX1 151,5768
#define ATM_MAP_TRFMGT 152,5794
#define ATM_MAP_AAL5MUX 153,5820
#define ATM_MAP_LAYER2ID 154,5847
#define ATM_FRAMING_DEFAULT	156,5876
#define ATM_FRAMING_E3G751PLCP	157,5906
#define ATM_FRAMING_E3G832ADM	158,5980
#define ATM_FRAMING_E3G751ADM	159,6053
#define ATM_FRAMING_DS3CBITADM 160,6119
#define ATM_FRAMING_DS3CBITPLCP	161,6188
#define ATM_FRAMING_DS3M23ADM	162,6253
#define ATM_FRAMING_DS3M23PLCP	163,6319
#define	ATM_CLOCK_INTERNAL	165,6383
#define	ATM_CLOCK_LINE	166,6448
#define	ATM_SONET_STS3C	168,6500
#define	ATM_SONET_STM1	169,6553
#define ATM_MAX_TIMER 171,6605
    SHOW_ATM_ARPSERVER,176,6699
    SHOW_ATM_ILMI,177,6723
    SHOW_ATM_INT,178,6742
    SHOW_ATM_MAP,179,6760
    SHOW_ATM_TRAFFIC,180,6778
    SHOW_ATM_VC,181,6800
