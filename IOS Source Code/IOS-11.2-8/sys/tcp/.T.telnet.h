
telnet.h,2735
#define __TELNET_H__74,2362
#define TN_EOR 84,2513
#define TN_SE 85,2553
#define TN_NOP 86,2597
#define TN_DM 87,2636
#define TN_BREAK 88,2671
#define TN_IP 89,2723
#define TN_AO 90,2766
#define TN_AYT 91,2804
#define TN_EC 92,2845
#define TN_EL 93,2886
#define TN_GA 94,2922
#define TN_SB 95,2956
#define TN_WILL 96,3004
#define TN_WONT 97,3046
#define TN_DO 98,3089
#define TN_DONT 99,3132
#define TN_IAC 100,3176
#define TNO_BINARY 105,3287
#define TNO_ECHO 106,3332
#define TNO_SUPRGA 107,3373
#define TNO_TIMEMARK 108,3420
#define TNO_TTYLOC 109,3463
#define TNO_TTYTYPE 110,3515
#define TNO_SENDEOR 111,3564
#define TNO_TN3270REG 112,3614
#define TNO_NAWS 113,3659
#define TNO_TTYSPEED 114,3714
#define TNO_LFLOW 115,3765
#define TNO_XDISPLAY 116,3812
#define TNO_AUTH 117,3867
#define	TNQ_IS	119,3927
#define	TNQ_SEND	120,3964
#define TNQ_REPLY	125,4051
#define TNQ_NAME	126,4090
#define KERBEROS_V5	127,4127
#define KRB5_AUTH	129,4150
#define AUTH_REJECT	130,4171
#define AUTH_ACCEPT	131,4194
#define AUTH_RESPONSE	132,4217
#define AUTH_FORWARD	133,4242
#define AUTH_FORWARD_ACCEPT	134,4266
#define AUTH_FORWARD_REJECT	135,4296
#define AUTH_WHO_MASK	140,4374
#define AUTH_CLIENT_TO_SERVER	141,4399
#define AUTH_SERVER_TO_CLIENT	142,4431
#define AUTH_HOW_MASK	143,4463
#define AUTH_HOW_ONE_WAY	144,4488
#define AUTH_HOW_MUTUAL	145,4515
#define ST_CMD	152,4645
#define ST_SB	153,4692
#define	ST_SE	154,4747
#define ST_OPT	155,4805
#define ST_DM	156,4861
#define ST_FLUSH	157,4921
#define STATE_MASK 158,4984
#define ST_LASTINCR 160,5072
#define ST_LASTOUTCR 161,5135
#define ST_SENDTM 163,5218
#define ST_IACHACK 164,5289
#define STO_ECHO	182,6029
#define STO_SUPRGA	183,6074
#define STO_BINARY	184,6135
#define	STO_TTYTYPE	185,6189
#define	STO_TTYLOC	186,6244
#define STO_EDIT	187,6302
#define STO_LINE	188,6359
#define STO_TTYSPEED	189,6414
#define STO_LFLOW	190,6471
#define STO_SENDEOR	191,6534
#define STO_XDISPLAY	192,6597
#define STO_AUTH	193,6663
#define	STO_NAWS	195,6748
#define STH_ECHO	199,6839
#define STH_SUPRGA	200,6888
#define STH_BINARY	201,6953
#define	STH_TTYTYPE	202,7011
#define	STH_TTYLOC	203,7070
#define STH_EDIT	204,7132
#define STH_LINE	205,7193
#define STH_TTYSPEED	206,7234
#define STH_LFLOW	207,7295
#define STH_SENDEOR	208,7362
#define STH_XDISPLAY	209,7417
#define STH_AUTH	210,7487
#define	STH_NAWS	212,7576
#define ST_TN_UNIMPLEMENTED 213,7635
#define READLINE_BLOCK 217,7723
#define READLINE_DONE 218,7748
#define SERVERTELNET(SERVERTELNET220,7774
#define OPENFL_STREAM 227,8020
#define OPENFL_DEBUG 228,8049
#define OPENFL_LINE 229,8077
#define OPENFL_TN3270 230,8104
#define OPENFL_ROTOR 231,8133
