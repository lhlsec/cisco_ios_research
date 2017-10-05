
c7100_pcmap.h,4958
#define __C7100_PCMAP_H__158,5660
#define ADRSPC_K0BASE 163,5727
#define ADRSPC_K0SIZE 164,5765
#define ADRSPC_K1BASE 165,5803
#define ADRSPC_K1SIZE 166,5841
#define ADRSPC_KSBASE 167,5879
#define ADRSPC_KSSIZE 168,5917
#define ADRSPC_K3BASE 169,5955
#define ADRSPC_K3SIZE 170,5993
#define ADRSPC_KUBASE 171,6031
#define ADRSPC_KUSIZE 172,6069
#define KSEG_MSB_ADDR 173,6107
#define ADRSPC_NVRAM	182,6236
#define NVRAM_MAGIC_OFFSET	183,6291
#define NVRAM_START_OFFSET	185,6377
#define ADRSPC_NVRAM_END	187,6476
#define ADRSPC_CALENDAR	188,6549
#define ADRSPC_PCISRAM	193,6651
#define PHY_ADRSPC_PCISRAM	195,6714
#define PCISRAM_ADDRESS_MASK	197,6788
#define PCISRAM_SWAP_MASK	200,6892
#define PCIDRAM_SWAP_MASK	201,6951
#define PCIMEM_CWT_MASK	203,7015
#define ADRSPC_CACHED_IODRAM	208,7153
#define CONVERT_ADDR_CWT(CONVERT_ADDR_CWT213,7269
#define ADRSPC_PROM	218,7366
#define ADRSPC_BFLASH	223,7440
#define ADRSPC_FLASH_BASE	224,7491
#define ADRSPC_PCMCIA_SLOT0 229,7564
#define ADRSPC_PCMCIA_ATTR0	230,7607
#define ADRSPC_PCMCIA_WIN0_BASE	231,7657
#define ADRSPC_PCMCIA_SLOT1 233,7720
#define ADRSPC_PCMCIA_ATTR1	234,7763
#define ADRSPC_PCMCIA_WIN1_BASE	235,7813
#define ADRSPC_PCMCIA_REGS 237,7876
#define PCMCIA_REGS_OFFSET 238,7919
#define PHY_ADRSPC_PCMCIA_REGS	239,7962
#define ADRSPC_PCMCIA_INDEX_REG	241,8005
#define ADRSPC_PCMCIA_DATA_REG	242,8079
#define PCMCIA_REV2_GT64010_OFS	244,8153
#define ADRSPC_CPUIO	249,8205
#define ADRSPC_IO_FPGA	254,8287
#define ADRSPC_MP_FPGA	259,8381
#define ADRSPC_BAY0_ISTAT_REG	265,8550
#define ADRSPC_BAY1_ISTAT_REG	266,8620
#define ADRSPC_BAY2_ISTAT_REG	267,8690
#define ADRSPC_BAY3_ISTAT_REG	268,8760
#define ADRSPC_BAY4_ISTAT_REG	269,8830
#define ADRSPC_BAY5_ISTAT_REG	270,8900
#define ADRSPC_BAY6_ISTAT_REG	271,8970
#define ADRSPC_BITBUCKET	276,9062
#define ADRSPC_MB0_RESET	281,9149
#define ADRSPC_BAY0	286,9230
#define ADRSPC_BAY1	287,9286
#define ADRSPC_BAY2	288,9330
#define ADRSPC_BAY3	289,9374
#define ADRSPC_BAY4	290,9418
#define ADRSPC_BAY5	291,9462
#define ADRSPC_BAY6	292,9506
#define PHY_ADRSPC_BAY0	297,9587
#define PHY_ADRSPC_BAY1	298,9647
#define PHY_ADRSPC_BAY2	299,9695
#define PHY_ADRSPC_BAY3	300,9743
#define PHY_ADRSPC_BAY4	301,9791
#define PHY_ADRSPC_BAY5	302,9839
#define PHY_ADRSPC_BAY6	303,9887
#define PCI_IO_BIT32	305,9936
#define ADRSPC_GT64010	310,9999
#define LVL2_CACHE_TAGLINES_10	315,10112
#define PCI_BAY_SEPARATION 321,10270
#define PCI_DEV_MEM_MAPPED_IO_SEPARATION 322,10347
#define ACTIVE_LOW(ACTIVE_LOW327,10486
#define REASON_PERIPH	332,10541
#define REASON_SWNMI	333,10569
#define REASON_PBNMI	334,10596
#define REASON_WATCHDOG	335,10623
#define REASON_ALL	336,10653
#define GT64010_PCI_IO_LOW_INIT	342,10813
#define GT64010_PCI_IO_HIGH_INIT	343,10877
#define GT64010_PCI_MEM_LOW_INIT	344,10941
#define GT64010_PCI_MEM_HIGH_INIT	345,11005
#define GT64010_PCI_RAS10_INIT	347,11071
#define GT64010_PCI_RAS32_INIT	348,11126
#define GT64010_PCI_CS20_INIT	350,11182
#define GT64010_PCI_CS3_BOOT_INIT	351,11243
#define GT64010_PCI_CMD_INIT	353,11308
#define GT64010_PCI_TIMEOUT_INIT_REV1 356,11396
#define GT64010_PCI_TIMEOUT_INIT 357,11471
#define GT64010_STAT_CMD_INIT	359,11547
#define GT64010_CACHE_LINE	361,11610
#define PHY_TO_KSEG1(PHY_TO_KSEG1367,11748
#define PHY_TO_KSEG0(PHY_TO_KSEG0368,11792
#define PHY_ADDR(PHY_ADDR369,11836
#define ROM_OFFSET(ROM_OFFSET370,11880
#define KSEG1_TO_KSEG0(KSEG1_TO_KSEG0371,11924
#define MON_INIT_SP 376,12024
#define MON_FREE_MEM 377,12072
#define PHY_ADRSPC_RAM	383,12191
#define PHY_ADRSPC_RAM_END 384,12245
#define PHY_ADRSPC_BFLASH 386,12326
#define PHY_ADRSPC_FLASH_BASE	387,12406
#define PHY_ADRSPC_PROM	389,12455
#define PHY_ADRSPC_PROM_END	390,12512
#define PHY_ADRSPC_NVRAM	392,12589
#define PHY_ADRSPC_NVRAM_END	393,12646
#define PHY_ADRSPC_IO_REGS 395,12718
#define PHY_ADRSPC_DUART 397,12790
#define PHY_ADRSPC_BAD_ADDR 399,12862
#define PHY_ADRSPC_PRED_FPGA 402,12998
#define PHY_ADRSPC_GT64010_INTERNAL_SPC_DECODE_INIT 404,13079
#define PHY_ADRSPC_GT64010_BASE 406,13146
#define PHY_ADRSPC_MP_FPGA	408,13190
#define KSEG1_ADRSPC_RAM 414,13386
#define KSEG1_ADRSPC_RAM_END 415,13450
#define KSEG1_ADRSPC_BFLASH 417,13519
#define KSEG1_ADRSPC_BFLASH_BASE 418,13586
#define KSEG1_ADRSPC_FLASH_BASE	419,13653
#define KSEG1_ADRSPC_BFLASH_END 420,13724
#define KSEG1_ADRSPC_PROM	422,13796
#define KSEG1_ADRSPC_PROM_END	423,13855
#define KSEG1_ADRSPC_BAD_ADDR 424,13922
#define KSEG1_ADRSPC_NVRAM	426,13992
#define KSEG1_ADRSPC_NVRAM_END 427,14053
#define KSEG1_ADRSPC_IO_REGS	429,14124
#define KSEG1_ADRSPC_DUART 431,14190
#define KSEG1_ADRSPC_PRED_FPGA 433,14257
#define KSEG1_ADRSPC_GT64010_INTERNAL_SPC_DECODE_INIT 435,14328
#define KSEG1_ADRSPC_GT64010_BASE 438,14448
#define KSEG1_ADRSPC_MP_FPGA	440,14522
#define MON_TIMER_VAL_20MS 442,14588
#define RESET_VEC_OFFSET 444,14655