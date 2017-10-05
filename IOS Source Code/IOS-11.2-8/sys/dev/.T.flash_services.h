
flash_services.h,1113
#define __FLASH_SERVICES_H__57,2063
#define	MAX_FLASH_READ_COUNT	62,2147
#define FLASH_DIR_DISPLAY	64,2245
#define FLASH_GOT_PARTITION_NUM	65,2274
#define FLASH_LOOP_FOR_ANSWER	66,2309
#define FLASH_DUMMY_CHAR 72,2405
enum RELOC_TABLES RELOC_TABLES75,2483
    TEXT_F_TEXT,76,2503
    DATA_F_TEXT,77,2553
    BSS_F_TEXT,78,2602
    TEXT_F_DATA,79,2619
    DATA_F_DATA,80,2636
    BSS_F_DATA,81,2654
    NUM_RELOC 82,2671
enum STATES STATES86,2733
    HEADER_DOWNLOAD,87,2747
    HEADER_PIC_DOWNLOAD,88,2814
    PIC_DOWNLOAD,89,2874
    PIC_RELOC_DOWNLOAD,90,2938
    RELOC_DOWNLOAD,91,3010
    RELOC_TEXT_DOWNLOAD,92,3071
    TEXT_DOWNLOAD,93,3145
    TEXT_DATA_DOWNLOAD,94,3206
    DATA_DOWNLOAD,95,3280
    DATA_TC_DOWNLOAD,96,3338
    LAST_BLOCK_DOWNLOAD,97,3405
    UNKNOWN_STATE98,3463
enum CHECKSUMS CHECKSUMS101,3487
    OLD_IMG_CKSUM,102,3504
    RELOC_IMG_CKSUM,103,3565
    OLD_TXT_CKSUM,104,3626
    RELOC_TXT_CKSUM,105,3645
    ORIG_TXT_CKSUM,106,3666
    NUM_CKSUMS108,3765
struct reloc_args reloc_args111,3785
struct flash_write_args flash_write_args133,4494