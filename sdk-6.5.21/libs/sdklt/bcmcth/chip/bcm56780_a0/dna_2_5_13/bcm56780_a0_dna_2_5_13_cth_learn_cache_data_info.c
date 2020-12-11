/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by npl-info-tbl-gen from NPL output files
 * for device bcm56780_a0 and variant dna_2_5_13.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/npl-info-tbl-gen
 * Resource YML: LearnCacheDataInfoTblGen.yml
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <shr/shr_debug.h>
#include <bcmcth/bcmcth_learn_drv.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmptm/bcmptm_internal.h>
#include <bcmimm/bcmimm_int_comp.h>
#include <bcmcth/bcmcth_info_table_entry.h>

/*! Total enum fields. */
#define BCM56780_A0_DNA_2_5_13_ENUM_FIELD_TOTAL 9

/*! Structure holding initialization value. */
static bcmcth_info_table_enum_entry_t
bcm56780_a0_dna_2_5_13_cth_learn_cache_data_info_enum_data[][9] = {
    {
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_LEARN_CACHE_DATA_INFO_IDf,
            "LEARN_DISABLE",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD0f,
            "PKT_FWD_FIELD_BUS_MAC_DA_SA_15_0",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD1f,
            "PKT_FWD_FIELD_BUS_MAC_DA_SA_31_16",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD2f,
            "PKT_FWD_FIELD_BUS_MAC_DA_SA_47_32",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD3f,
            "ING_OBJ_BUS_MAPPED_VFI",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD4f,
            "ING_OBJ_BUS_L2_LEARN_SRC_OBJECT",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD5f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD6f,
            "ING_CMD_BUS_L2_LEARN_SRC_TYPE",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD7f,
            "ING_CMD_BUS_VALUE_ZERO",
        },
    },
    {
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_LEARN_CACHE_DATA_INFO_IDf,
            "LEARN_L2_VIEW",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD0f,
            "PKT_FWD_FIELD_BUS_MAC_DA_SA_15_0",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD1f,
            "PKT_FWD_FIELD_BUS_MAC_DA_SA_31_16",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD2f,
            "PKT_FWD_FIELD_BUS_MAC_DA_SA_47_32",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD3f,
            "ING_OBJ_BUS_MAPPED_VFI",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD4f,
            "ING_OBJ_BUS_L2_LEARN_SRC_OBJECT",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD5f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD6f,
            "ING_CMD_BUS_L2_LEARN_SRC_TYPE",
        },
        {
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt,
            BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt_CACHE_FIELD7f,
            "ING_CMD_BUS_VALUE_ZERO",
        },
    },
};


/*******************************************************************************
 * Private functions
 */

static int
bcm56780_a0_dna_2_5_13_cth_learn_cache_data_info_get_variant_data(int unit, bcmcth_info_table_t *data)
{
    data->table_id = BCM56780_A0_DNA_2_5_13_LEARN_CACHE_DATA_INFOt;
    sal_memcpy(&data->table_name[0], "LEARN_CACHE_DATA_INFO", sizeof("LEARN_CACHE_DATA_INFO"));
    data->max_policy_supported = 4;
    data->enum_cnt = BCM56780_A0_DNA_2_5_13_ENUM_FIELD_TOTAL;
    data->profile_cnt = sizeof(bcm56780_a0_dna_2_5_13_cth_learn_cache_data_info_enum_data) /
                        (sizeof(bcmcth_info_table_enum_entry_t) * BCM56780_A0_DNA_2_5_13_ENUM_FIELD_TOTAL);

    data->enum_info = &bcm56780_a0_dna_2_5_13_cth_learn_cache_data_info_enum_data[0][0];
    data->policy_info = NULL;

    return SHR_E_NONE;
}

static bcmcth_learn_info_drv_t
bcm56780_a0_dna_2_5_13_cth_learn_cache_data_info_drv = {
    .get_data  = bcm56780_a0_dna_2_5_13_cth_learn_cache_data_info_get_variant_data,
};

/*******************************************************************************
 * Public functions
 */
bcmcth_learn_info_drv_t * bcm56780_a0_dna_2_5_13_cth_learn_cache_data_info_drv_get(int unit)
{
    return &bcm56780_a0_dna_2_5_13_cth_learn_cache_data_info_drv;
}
