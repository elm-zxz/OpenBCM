/****************************************************************************
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 *
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 *
 */

#include <phymod/phymod.h>

#define TBHMOD_TS_TABLE_SIZE  40
#define TBHMOD_TS_MPP_MEM_TABLE_CNT 4
#define TBHMOD_TS_ENTRY_SIZE  3
#define TBHMOD_TS_PSLL_BASED_ENTRY_SIZE  4

typedef enum {
    TBHMOD_SPEED_10G_IEEE_KR1 = 0,
    TBHMOD_SPEED_10G_IEEE_KR1_CL74,
    TBHMOD_SPEED_25G_IEEE_KS1_CS1,
    TBHMOD_SPEED_25G_IEEE_KS1_CS1_CL74,
    TBHMOD_SPEED_25G_IEEE_KR1_CR1,
    TBHMOD_SPEED_25G_IEEE_KR1_CR1_CL74,
    TBHMOD_SPEED_25G_IEEE_KR1_CR1_RS528,
    TBHMOD_SPEED_40G_IEEE_KR4_CL74,
    TBHMOD_SPEED_40G_IEEE_KR4,
    TBHMOD_SPEED_40G_IEEE_CR4_CL74,
    TBHMOD_SPEED_40G_IEEE_CR4,
    TBHMOD_SPEED_50G_IEEE_KR1_CR1,
    TBHMOD_SPEED_100G_IEEE_KR4,
    TBHMOD_SPEED_100G_IEEE_CR4,
    TBHMOD_SPEED_100G_IEEE_KR2_CR2,
    TBHMOD_SPEED_200G_IEEE_KR4_CR4,
    TBHMOD_SPEED_400G_IEEE_X8,
    TBHMOD_SPEED_20G_BRCM_CR1_CL74,
    TBHMOD_SPEED_20G_BRCM_CR1,
    TBHMOD_SPEED_20G_BRCM_KR1_CL74,
    TBHMOD_SPEED_20G_BRCM_KR1,
    TBHMOD_SPEED_25G_BRCM_CR1,
    TBHMOD_SPEED_25G_BRCM_CR1_CL74,
    TBHMOD_SPEED_25G_BRCM_CR1_RS528,
    TBHMOD_SPEED_25G_BRCM_KR1_RS528,
    TBHMOD_SPEED_25G_BRCM_KR1_CL74,
    TBHMOD_SPEED_25G_BRCM_KR1,
    TBHMOD_SPEED_40G_BRCM_CR2,
    TBHMOD_SPEED_40G_BRCM_KR2,
    TBHMOD_SPEED_50G_BRCM_CR2_KR2_NO_FEC,
    TBHMOD_SPEED_50G_BRCM_CR2_KR2_RS_FEC,
    TBHMOD_SPEED_50G_BRCM_FEC_544_CR2_KR2,
    TBHMOD_SPEED_50G_BRCM_NO_FEC_CR1_KR1,
    TBHMOD_SPEED_50G_BRCM_FEC_528_CR1_KR1,
    TBHMOD_SPEED_200G_BRCM_NO_FEC_KR4_CR4,
    TBHMOD_SPEED_200G_BRCM_KR4_CR4,
    TBHMOD_SPEED_100G_BRCM_KR4_CR4,
    TBHMOD_SPEED_100G_BRCM_FEC_528_KR2_CR2,
    TBHMOD_SPEED_100G_BRCM_NO_FEC_KR2_CR2,
    TBHMOD_SPEED_100G_BRCM_NO_FEC_X4,
    TBHMOD_SPEED_MODE_COUNT
}tbhmod_1588_table_index_t;                                                                                                    

typedef struct tbhmod_1588_lkup_table_entry_s {
  uint32_t mapped_spd_table_index; /* The index for the default speed entry */
  phymod_fec_type_t fec_type;
  tbhmod_1588_table_index_t ts_table_index; /* The index of the 1588 table */
} tbhmod_1588_lkup_table_entry_t;

typedef uint32_t ts_table_entry[TBHMOD_TS_TABLE_SIZE][TBHMOD_TS_ENTRY_SIZE];

int tbhmod_1588_table_index_get(uint32_t speed_index, phymod_fec_type_t fec, int *ts_table_index);
int tbhmod_tbl_entry_to_psll_entry_map(uint32_t* tbl_entry, uint32_t* psll_entry);
int tbhmod_psll_entry_to_tbl_entry_map(uint32_t* psll_entry, uint32_t* tbl_entry);
int tbhmod_ts_tx_table_get(int index, int is_sfd, ts_table_entry** tbl);
int tbhmod_ts_rx_table_get(int index, int is_sfd, ts_table_entry** tbl);
