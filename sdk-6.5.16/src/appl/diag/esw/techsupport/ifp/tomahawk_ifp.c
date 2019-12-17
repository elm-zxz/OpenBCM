/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 *
 * File:    tomahawk_ifp.c
 * Purpose: Maintains all the debug information for ifp
 *          feature for tomahawk.
*/

#include <appl/diag/techsupport.h>
#include <soc/mcm/allenum.h>

extern char * techsupport_ifp_diag_cmdlist[];
extern char * techsupport_ifp_sw_dump_cmdlist[];

/* "ifp" feature's diag command list valid only for tomahawk */
char * techsupport_ifp_tomahawk_diag_cmdlist[] = {
     NULL /* Must be the last element in this structure */
};

#ifndef BCM_SW_STATE_DUMP_DISABLE
/* "ifp" feature's software dump command list valid only for tomahawk */
char * techsupport_ifp_tomahawk_sw_dump_cmdlist[] = {
    "dump sw fp_class",
    "dump sw fp_em",
    NULL /* Must be the last element in this structure */
};
#endif /* BCM_SW_STATE_DUMP_DISABLE */


/* Structure that maintains memory list for
 * "ifp" feature for tomahawk chipset. */
static soc_mem_t techsupport_ifp_tomahawk_memory_table_list[] = {
   PORT_TABm,
   FP_UDF_OFFSET_PIPE0m,
   FP_UDF_OFFSET_PIPE1m,
   FP_UDF_OFFSET_PIPE2m,
   FP_UDF_OFFSET_PIPE3m,
   LPORT_TABm,
   FP_UDF_TCAM_PIPE0m,
   FP_UDF_TCAM_PIPE1m,
   FP_UDF_TCAM_PIPE2m,
   FP_UDF_TCAM_PIPE3m,
   IFP_RANGE_CHECK_PIPE0m,
   IFP_RANGE_CHECK_PIPE1m,
   IFP_RANGE_CHECK_PIPE2m,
   IFP_RANGE_CHECK_PIPE3m,
   TTL_FN_PIPE0m,
   TTL_FN_PIPE1m,
   TTL_FN_PIPE2m,
   TTL_FN_PIPE3m,
   TOS_FN_PIPE0m,
   TOS_FN_PIPE1m,
   TOS_FN_PIPE2m,
   TOS_FN_PIPE3m,
   TCP_FN_PIPE0m,
   TCP_FN_PIPE1m,
   TCP_FN_PIPE2m,
   IP_PROTO_MAP_PIPE0m,
   IP_PROTO_MAP_PIPE1m,
   IP_PROTO_MAP_PIPE2m,
   IP_PROTO_MAP_PIPE3m,
   SRC_COMPRESSION_PIPE0m,
   SRC_COMPRESSION_PIPE1m,
   SRC_COMPRESSION_PIPE2m,
   SRC_COMPRESSION_PIPE3m,
   DST_COMPRESSION_PIPE0m,
   DST_COMPRESSION_PIPE1m,
   DST_COMPRESSION_PIPE2m,
   DST_COMPRESSION_PIPE3m,
   EXACT_MATCH_2_ENTRY_ONLY_PIPE0m,
   EXACT_MATCH_2_ENTRY_ONLY_PIPE1m,
   EXACT_MATCH_2_ENTRY_ONLY_PIPE2m,
   EXACT_MATCH_2_ENTRY_ONLY_PIPE3m,
   EXACT_MATCH_2_PIPE0m,
   EXACT_MATCH_2_PIPE1m,
   EXACT_MATCH_2_PIPE2m,
   EXACT_MATCH_2_PIPE3m,
   EXACT_MATCH_4_ENTRY_ONLY_PIPE0m,
   EXACT_MATCH_4_ENTRY_ONLY_PIPE1m,
   EXACT_MATCH_4_ENTRY_ONLY_PIPE2m,
   EXACT_MATCH_4_ENTRY_ONLY_PIPE3m,
   EXACT_MATCH_4_PIPE0m,
   EXACT_MATCH_4_PIPE1m,
   EXACT_MATCH_4_PIPE2m,
   EXACT_MATCH_4_PIPE3m,
   EXACT_MATCH_KEY_GEN_MASK_PIPE0m,
   EXACT_MATCH_KEY_GEN_MASK_PIPE1m,
   EXACT_MATCH_KEY_GEN_MASK_PIPE2m,
   EXACT_MATCH_KEY_GEN_MASK_PIPE3m,
   EXACT_MATCH_KEY_GEN_PROGRAM_PROFILE_PIPE0m,
   EXACT_MATCH_KEY_GEN_PROGRAM_PROFILE_PIPE1m,
   EXACT_MATCH_KEY_GEN_PROGRAM_PROFILE_PIPE2m,
   EXACT_MATCH_KEY_GEN_PROGRAM_PROFILE_PIPE3m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_DATA_ONLY_PIPE0m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_DATA_ONLY_PIPE1m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_DATA_ONLY_PIPE2m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_DATA_ONLY_PIPE3m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_PIPE0m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_PIPE1m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_PIPE2m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_PIPE3m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_TCAM_ONLY_PIPE0m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_TCAM_ONLY_PIPE1m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_TCAM_ONLY_PIPE2m,
   EXACT_MATCH_LOGICAL_TABLE_SELECT_TCAM_ONLY_PIPE3m,
   IFP_KEY_GEN_PROGRAM_PROFILE2_PIPE0m,
   IFP_KEY_GEN_PROGRAM_PROFILE2_PIPE1m,
   IFP_KEY_GEN_PROGRAM_PROFILE2_PIPE2m,
   IFP_KEY_GEN_PROGRAM_PROFILE2_PIPE3m,
   IFP_KEY_GEN_PROGRAM_PROFILE_PIPE0m,
   IFP_KEY_GEN_PROGRAM_PROFILE_PIPE1m,
   IFP_KEY_GEN_PROGRAM_PROFILE_PIPE2m,
   IFP_KEY_GEN_PROGRAM_PROFILE_PIPE3m,
   IFP_LOGICAL_TABLE_SELECT_DATA_ONLY_PIPE0m,
   IFP_LOGICAL_TABLE_SELECT_DATA_ONLY_PIPE1m,
   IFP_LOGICAL_TABLE_SELECT_DATA_ONLY_PIPE2m,
   IFP_LOGICAL_TABLE_SELECT_DATA_ONLY_PIPE3m,
   IFP_LOGICAL_TABLE_SELECT_PIPE0m,
   IFP_LOGICAL_TABLE_SELECT_PIPE1m,
   IFP_LOGICAL_TABLE_SELECT_PIPE2m,
   IFP_LOGICAL_TABLE_SELECT_PIPE3m,
   IFP_LOGICAL_TABLE_SELECT_TCAM_ONLY_PIPE0m,
   IFP_LOGICAL_TABLE_SELECT_TCAM_ONLY_PIPE1m,
   IFP_LOGICAL_TABLE_SELECT_TCAM_ONLY_PIPE2m,
   IFP_LOGICAL_TABLE_SELECT_TCAM_ONLY_PIPE3m,
   EXACT_MATCH_DEFAULT_POLICY_PIPE0m,
   EXACT_MATCH_DEFAULT_POLICY_PIPE1m,
   EXACT_MATCH_DEFAULT_POLICY_PIPE2m,
   EXACT_MATCH_DEFAULT_POLICY_PIPE3m,
   EXACT_MATCH_HIT_ONLYm,
   IFP_HG_CLASSID_SELECTm,
   IFP_I2E_CLASSID_SELECTm,
   IFP_LOGICAL_TABLE_ACTION_PRIORITY_PIPE0m,
   IFP_LOGICAL_TABLE_ACTION_PRIORITY_PIPE1m,
   IFP_LOGICAL_TABLE_ACTION_PRIORITY_PIPE2m,
   IFP_LOGICAL_TABLE_ACTION_PRIORITY_PIPE3m,
   IFP_METER_TABLE_PIPE0m,
   IFP_METER_TABLE_PIPE1m,
   IFP_METER_TABLE_PIPE2m,
   IFP_METER_TABLE_PIPE3m,
   IFP_POLICY_TABLE_PIPE0m,
   IFP_POLICY_TABLE_PIPE1m,
   IFP_POLICY_TABLE_PIPE2m,
   IFP_POLICY_TABLE_PIPE3m,
   IFP_PORT_METER_MAPm,
   IFP_STORM_CONTROL_METERSm,
   IFP_TCAM_PIPE0m,
   IFP_TCAM_PIPE1m,
   IFP_TCAM_PIPE2m,
   IFP_TCAM_PIPE3m,
   IFP_TCAM_WIDE_PIPE0m,
   IFP_TCAM_WIDE_PIPE1m,
   IFP_TCAM_WIDE_PIPE2m,
   IFP_TCAM_WIDE_PIPE3m,
   EH_MASK_PROFILE_PIPE0m,
   EH_MASK_PROFILE_PIPE1m,
   EH_MASK_PROFILE_PIPE2m,
   EH_MASK_PROFILE_PIPE3m,
   EXACT_MATCH_ACTION_PROFILE_PIPE0m,
   EXACT_MATCH_ACTION_PROFILE_PIPE1m,
   EXACT_MATCH_ACTION_PROFILE_PIPE2m,
   EXACT_MATCH_ACTION_PROFILE_PIPE3m,
   EXACT_MATCH_QOS_ACTIONS_PROFILE_PIPE0m,
   EXACT_MATCH_QOS_ACTIONS_PROFILE_PIPE1m,
   EXACT_MATCH_QOS_ACTIONS_PROFILE_PIPE2m,
   EXACT_MATCH_QOS_ACTIONS_PROFILE_PIPE3m,
   IFP_LOGICAL_TABLE_ACTION_PRIORITY_PIPE0m,
   IFP_LOGICAL_TABLE_ACTION_PRIORITY_PIPE1m,
   IFP_LOGICAL_TABLE_ACTION_PRIORITY_PIPE2m,
   IFP_LOGICAL_TABLE_ACTION_PRIORITY_PIPE3m,
   IFP_REDIRECTION_PROFILEm,
   IFP_COS_MAPm,
   ING_FLEX_CTR_COUNTER_TABLE_0_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_0_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_0_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_0_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_10_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_10_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_10_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_10_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_11_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_11_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_11_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_11_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_12_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_12_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_12_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_12_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_13_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_13_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_13_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_13_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_14_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_14_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_14_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_14_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_15_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_15_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_15_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_15_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_16_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_16_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_16_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_16_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_17_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_17_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_17_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_17_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_18_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_18_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_18_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_18_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_19_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_19_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_19_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_19_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_1_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_1_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_1_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_1_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_2_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_2_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_2_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_2_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_3_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_3_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_3_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_3_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_4_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_4_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_4_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_4_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_5_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_5_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_5_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_5_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_6_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_6_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_6_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_6_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_7_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_7_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_7_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_7_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_8_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_8_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_8_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_8_PIPE3m,
   ING_FLEX_CTR_COUNTER_TABLE_9_PIPE0m,
   ING_FLEX_CTR_COUNTER_TABLE_9_PIPE1m,
   ING_FLEX_CTR_COUNTER_TABLE_9_PIPE2m,
   ING_FLEX_CTR_COUNTER_TABLE_9_PIPE3m,
   ING_FLEX_CTR_OFFSET_TABLE_0m,
   ING_FLEX_CTR_OFFSET_TABLE_1m,
   ING_FLEX_CTR_OFFSET_TABLE_2m,
   ING_FLEX_CTR_OFFSET_TABLE_3m,
   ING_FLEX_CTR_OFFSET_TABLE_4m,
   ING_FLEX_CTR_OFFSET_TABLE_5m,
   ING_FLEX_CTR_OFFSET_TABLE_6m,
   ING_FLEX_CTR_OFFSET_TABLE_7m,
   ING_FLEX_CTR_OFFSET_TABLE_8m,
   ING_FLEX_CTR_OFFSET_TABLE_9m,
   ING_FLEX_CTR_OFFSET_TABLE_10m,
   ING_FLEX_CTR_OFFSET_TABLE_11m,
   ING_FLEX_CTR_OFFSET_TABLE_12m,
   ING_FLEX_CTR_OFFSET_TABLE_13m,
   ING_FLEX_CTR_OFFSET_TABLE_14m,
   ING_FLEX_CTR_OFFSET_TABLE_15m,
   ING_FLEX_CTR_OFFSET_TABLE_16m,
   ING_FLEX_CTR_OFFSET_TABLE_17m,
   ING_FLEX_CTR_OFFSET_TABLE_18m,
   ING_FLEX_CTR_OFFSET_TABLE_19m,
   EGR_L3_NEXT_HOPm,
   EGR_PORTm,
   INVALIDm /* Must be the last element in this structure */
};

/* Structure that maintains register list for
 * "ifp" feature for tomahawk chipset. */
techsupport_reg_t techsupport_ifp_tomahawk_reg_list[] = {
   {IFP_CONFIG_PIPE0r, register_type_global },
   {IFP_CONFIG_PIPE1r, register_type_global },
   {IFP_CONFIG_PIPE2r, register_type_global },
   {IFP_CONFIG_PIPE3r, register_type_global },
   {IFP_ECMP_HASH_CONTROLr, register_type_global },
   {ING_CONFIGr, register_type_global },
   {SW2_IFP_DST_ACTION_CONTROLr, register_type_global },
   {IFP_ING_DVP_2_CONTROL_PIPE0r, register_type_global },
   {IFP_ING_DVP_2_CONTROL_PIPE1r, register_type_global },
   {IFP_ING_DVP_2_CONTROL_PIPE2r, register_type_global },
   {IFP_ING_DVP_2_CONTROL_PIPE3r, register_type_global },
   {IFP_LOGICAL_TABLE_CONFIG_PIPE0r, register_type_global },
   {IFP_LOGICAL_TABLE_CONFIG_PIPE1r, register_type_global },
   {IFP_LOGICAL_TABLE_CONFIG_PIPE2r, register_type_global },
   {IFP_LOGICAL_TABLE_CONFIG_PIPE3r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_CONFIG_PIPE0r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_CONFIG_PIPE1r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_CONFIG_PIPE2r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_CONFIG_PIPE3r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_DATA_CTRL_PIPE0r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_DATA_CTRL_PIPE1r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_DATA_CTRL_PIPE2r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_DATA_CTRL_PIPE3r, register_type_global },
   {IFP_METER_CONTROLr, register_type_global },
   {IFP_PARITY_CONTROLr, register_type_global },
   {IFP_SLICE_METER_MAP_ENABLE_PIPE0r, register_type_global },
   {IFP_SLICE_METER_MAP_ENABLE_PIPE1r, register_type_global },
   {IFP_SLICE_METER_MAP_ENABLE_PIPE2r, register_type_global },
   {IFP_SLICE_METER_MAP_ENABLE_PIPE3r, register_type_global },
   {ETHERTYPE_MAP_PIPE0r, register_type_global },
   {ETHERTYPE_MAP_PIPE1r, register_type_global },
   {ETHERTYPE_MAP_PIPE2r, register_type_global },
   {ETHERTYPE_MAP_PIPE3r, register_type_global },
   {L4_SRC_PORT_MAP_PIPE0r, register_type_global },
   {L4_SRC_PORT_MAP_PIPE1r, register_type_global },
   {L4_SRC_PORT_MAP_PIPE2r, register_type_global },
   {L4_SRC_PORT_MAP_PIPE3r, register_type_global },
   {L4_DST_PORT_MAP_PIPE0r, register_type_global },
   {L4_DST_PORT_MAP_PIPE1r, register_type_global },
   {L4_DST_PORT_MAP_PIPE2r, register_type_global },
   {L4_DST_PORT_MAP_PIPE3r, register_type_global },
   {EXACT_MATCH_LOGICAL_TABLE_SELECT_CONFIG_PIPE0r, register_type_global },
   {EXACT_MATCH_LOGICAL_TABLE_SELECT_CONFIG_PIPE1r, register_type_global },
   {EXACT_MATCH_LOGICAL_TABLE_SELECT_CONFIG_PIPE2r, register_type_global },
   {EXACT_MATCH_LOGICAL_TABLE_SELECT_CONFIG_PIPE3r, register_type_global },
   {EXACT_MATCH_QOS_CONTROL_PIPE0r, register_type_global },
   {EXACT_MATCH_QOS_CONTROL_PIPE1r, register_type_global },
   {EXACT_MATCH_QOS_CONTROL_PIPE2r, register_type_global },
   {EXACT_MATCH_QOS_CONTROL_PIPE3r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_CONFIG_PIPE0r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_CONFIG_PIPE1r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_CONFIG_PIPE2r, register_type_global },
   {IFP_LOGICAL_TABLE_SELECT_CONFIG_PIPE3r, register_type_global },
   {INVALIDr, register_type_global } /* Must be the last element in this structure */
};

/* Structure that maintains diag cmdlist, reg_list, mem_list  for
 * "ifp" feature for tomahawk chipset. */
techsupport_data_t techsupport_ifp_tomahawk_data = {
    techsupport_ifp_diag_cmdlist,
    techsupport_ifp_tomahawk_reg_list,
    techsupport_ifp_tomahawk_memory_table_list,
    techsupport_ifp_tomahawk_diag_cmdlist
#ifndef BCM_SW_STATE_DUMP_DISABLE
    , techsupport_ifp_sw_dump_cmdlist,
    techsupport_ifp_tomahawk_sw_dump_cmdlist
#endif /* BCM_SW_STATE_DUMP_DISABLE */
};

