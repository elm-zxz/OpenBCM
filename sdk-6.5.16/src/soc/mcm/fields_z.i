/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 *
 * File:        fields_z.i
 * Purpose:     Field declarations.
 */

#if defined(BCM_56770_A0) || defined(BCM_56870_A0)
soc_field_info_t soc_ZONE_ID_DOP_DOPfmt_fields[] = {
    { CAPTURE_DATAf, 150, 10, SOCF_LE },
    { RESERVEDf, 10, 0, SOCF_LE|SOCF_RES },
    { ZONE_0_EDIT_ID_DELf, 10, 60, SOCF_LE },
    { ZONE_0_EDIT_ID_INSf, 10, 10, SOCF_LE },
    { ZONE_0_EDIT_ID_RWf, 10, 110, SOCF_LE },
    { ZONE_1_EDIT_ID_DELf, 10, 70, SOCF_LE },
    { ZONE_1_EDIT_ID_INSf, 10, 20, SOCF_LE },
    { ZONE_1_EDIT_ID_RWf, 10, 120, SOCF_LE },
    { ZONE_2_EDIT_ID_DELf, 10, 80, SOCF_LE },
    { ZONE_2_EDIT_ID_INSf, 10, 30, SOCF_LE },
    { ZONE_2_EDIT_ID_RWf, 10, 130, SOCF_LE },
    { ZONE_3_EDIT_ID_DELf, 10, 90, SOCF_LE },
    { ZONE_3_EDIT_ID_INSf, 10, 40, SOCF_LE },
    { ZONE_3_EDIT_ID_RWf, 10, 140, SOCF_LE },
    { ZONE_4_EDIT_ID_DELf, 10, 100, SOCF_LE },
    { ZONE_4_EDIT_ID_INSf, 10, 50, SOCF_LE },
    { ZONE_4_EDIT_ID_RWf, 10, 150, SOCF_LE }
};
#endif

#if defined(BCM_56370_A0)
soc_field_info_t soc_ZONE_ID_DOP_DOP_BCM56370_A0fmt_fields[] = {
    { CAPTURE_DATAf, 150, 0, SOCF_LE },
    { RESERVEDf, 10, 150, SOCF_LE|SOCF_RES },
    { ZONE_0_EDIT_ID_DELf, 10, 50, SOCF_LE },
    { ZONE_0_EDIT_ID_INSf, 10, 0, SOCF_LE },
    { ZONE_0_EDIT_ID_RWf, 10, 100, SOCF_LE },
    { ZONE_1_EDIT_ID_DELf, 10, 60, SOCF_LE },
    { ZONE_1_EDIT_ID_INSf, 10, 10, SOCF_LE },
    { ZONE_1_EDIT_ID_RWf, 10, 110, SOCF_LE },
    { ZONE_2_EDIT_ID_DELf, 10, 70, SOCF_LE },
    { ZONE_2_EDIT_ID_INSf, 10, 20, SOCF_LE },
    { ZONE_2_EDIT_ID_RWf, 10, 120, SOCF_LE },
    { ZONE_3_EDIT_ID_DELf, 10, 80, SOCF_LE },
    { ZONE_3_EDIT_ID_INSf, 10, 30, SOCF_LE },
    { ZONE_3_EDIT_ID_RWf, 10, 130, SOCF_LE },
    { ZONE_4_EDIT_ID_DELf, 10, 90, SOCF_LE },
    { ZONE_4_EDIT_ID_INSf, 10, 40, SOCF_LE },
    { ZONE_4_EDIT_ID_RWf, 10, 140, SOCF_LE }
};
#endif

#if defined(BCM_56370_A0) || defined(BCM_56770_A0) || \
    defined(BCM_56870_A0)
soc_field_info_t soc_ZONE_L2_TAGS_ACTIONSfmt_fields[] = {
    { CNTAG_ACTIONf, 2, 16, SOCF_LE },
    { ETAG_ACTIONf, 2, 14, SOCF_LE },
    { ITAG_DE_ACTIONf, 2, 10, SOCF_LE },
    { ITAG_PCP_ACTIONf, 2, 8, SOCF_LE },
    { ITAG_TPID_ACTIONf, 3, 23, SOCF_LE },
    { ITAG_VID_ACTIONf, 2, 6, SOCF_LE },
    { OTAG_DE_ACTIONf, 2, 4, SOCF_LE },
    { OTAG_PCP_ACTIONf, 2, 2, SOCF_LE },
    { OTAG_TPID_ACTIONf, 3, 20, SOCF_LE },
    { OTAG_VID_ACTIONf, 2, 0, SOCF_LE },
    { SUBPORT_TAG_ACTIONf, 2, 18, SOCF_LE },
    { VNTAG_ACTIONf, 2, 12, SOCF_LE }
};
#endif

#if defined(BCM_56370_A0) || defined(BCM_56770_A0) || \
    defined(BCM_56870_A0)
soc_field_info_t soc_ZONE_L2_TAGS_BUSfmt_fields[] = {
    { L2_TAGS_ACTIONSf, 26, 183, SOCF_LE },
    { L2_TAGS_STATUSf, 6, 209, SOCF_LE },
    { L2_TAGS_VALUESf, 183, 0, SOCF_LE }
};
#endif

#if defined(BCM_56370_A0) || defined(BCM_56770_A0) || \
    defined(BCM_56870_A0)
soc_field_info_t soc_ZONE_L2_TAGS_STATUSfmt_fields[] = {
    { CNTAG_STATUSf, 1, 4, 0 },
    { ETAG_STATUSf, 1, 3, 0 },
    { ITAG_STATUSf, 1, 1, 0 },
    { OTAG_STATUSf, 1, 0, 0 },
    { SUBPORT_TAG_STATUSf, 1, 5, 0 },
    { VNTAG_STATUSf, 1, 2, 0 }
};
#endif

#if defined(BCM_56370_A0) || defined(BCM_56770_A0) || \
    defined(BCM_56870_A0)
soc_field_info_t soc_ZONE_L2_TAGS_VALUESfmt_fields[] = {
    { CNTAGf, 16, 167, SOCF_LE },
    { ETAGf, 59, 60, SOCF_LE },
    { ITAGf, 30, 30, SOCF_LE },
    { OTAGf, 30, 0, SOCF_LE },
    { SUBPORT_TAGf, 16, 151, SOCF_LE },
    { VNTAGf, 32, 119, SOCF_LE }
};
#endif

#if defined(BCM_56370_A0) || defined(BCM_56770_A0) || \
    defined(BCM_56870_A0)
soc_field_info_t soc_ZONE_OBJECTSfmt_fields[] = {
    { DEST_TYPEf, 3, 34, SOCF_LE },
    { DEST_VALUEf, 16, 18, SOCF_LE },
    { FWD_DOMAIN_TYPEf, 2, 16, SOCF_LE },
    { FWD_DOMAIN_VALUEf, 16, 0, SOCF_LE },
    { SRC_TYPEf, 3, 53, SOCF_LE },
    { SRC_VALUEf, 16, 37, SOCF_LE }
};
#endif

#if defined(BCM_56370_A0) || defined(BCM_56770_A0) || \
    defined(BCM_56870_A0)
soc_field_info_t soc_ZONE_PRUNING_OBJECTSfmt_fields[] = {
    { DEST_DOMAIN_IDf, 3, 0, SOCF_LE },
    { DEST_TYPEf, 3, 20, SOCF_LE },
    { DEST_VALUEf, 17, 3, SOCF_LE },
    { SPLIT_HORIZON_PRUNING_DISABLEf, 1, 47, 0 },
    { SRC_DOMAIN_IDf, 3, 23, SOCF_LE },
    { SRC_PRUNING_DISABLEf, 1, 46, 0 },
    { SRC_TYPEf, 3, 43, SOCF_LE },
    { SRC_VALUEf, 17, 26, SOCF_LE },
    { VPLAG_PRUNING_ENABLEf, 1, 48, 0 }
};
#endif

