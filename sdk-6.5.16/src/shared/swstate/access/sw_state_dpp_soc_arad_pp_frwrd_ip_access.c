/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#include <sal/core/libc.h>
#include <shared/swstate/sw_state.h>
#include <shared/error.h>
#include <shared/swstate/sw_state_defs.h>
#include <shared/bsl.h>
#include <shared/swstate/access/sw_state_access.h>
#include <shared/swstate/access/sw_state_dpp_soc_arad_pp_frwrd_ip_access.h>

#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_alloc(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip,
        sizeof(ARAD_FRWRD_IP),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.soc.arad.pp->frwrd_ip);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_route_key_to_entry_id_set(int unit, SOC_SAND_HASH_TABLE_PTR route_key_to_entry_id){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.route_key_to_entry_id.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->route_key_to_entry_id,
        route_key_to_entry_id,
        SOC_SAND_HASH_TABLE_PTR,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_route_key_to_entry_id_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_route_key_to_entry_id_get(int unit, SOC_SAND_HASH_TABLE_PTR *route_key_to_entry_id){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.route_key_to_entry_id.verify( unit));
    *route_key_to_entry_id = sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->route_key_to_entry_id;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_route_key_to_entry_id_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_set(int unit, int location_tbl_idx_0, CONST ARAD_SW_KBP_HANDLE *location_tbl){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.verify( unit, location_tbl_idx_0));
    SHR_SW_STATE_MEMSET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->location_tbl[location_tbl_idx_0],
        location_tbl,
        ARAD_SW_KBP_HANDLE,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_get(int unit, int location_tbl_idx_0, ARAD_SW_KBP_HANDLE *location_tbl){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.verify( unit, location_tbl_idx_0));
    *location_tbl = sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->location_tbl[location_tbl_idx_0];
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_alloc(int unit, int nof_instances_to_alloc){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->location_tbl,
        nof_instances_to_alloc * sizeof(ARAD_SW_KBP_HANDLE),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->location_tbl,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->location_tbl,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_verify(int unit, int location_tbl_idx_0){
    uint32 allocated_size = 0;
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->location_tbl);
    _SOC_IF_ERR_EXIT(shr_sw_state_allocated_size_get (unit, (uint8*)sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->location_tbl, &allocated_size));
    SW_STATE_OUT_OF_BOUND_CHECK( location_tbl_idx_0, allocated_size /
        sizeof(*(sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->location_tbl)) - 1, "location_tbl");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_db_entry_set(int unit, int location_tbl_idx_0, kbp_entry_handle db_entry){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.db_entry.verify( unit, location_tbl_idx_0));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->location_tbl[location_tbl_idx_0].db_entry,
        db_entry,
        kbp_entry_handle,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_db_entry_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_db_entry_get(int unit, int location_tbl_idx_0, kbp_entry_handle *db_entry){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.db_entry.verify( unit, location_tbl_idx_0));
    *db_entry = sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->location_tbl[location_tbl_idx_0].db_entry;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_db_entry_verify(int unit, int location_tbl_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.verify( unit, location_tbl_idx_0);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_cache_mode_set(int unit, uint8 kbp_cache_mode){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_cache_mode.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->kbp_cache_mode,
        kbp_cache_mode,
        uint8,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_cache_mode_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_cache_mode_get(int unit, uint8 *kbp_cache_mode){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_cache_mode.verify( unit));
    *kbp_cache_mode = sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->kbp_cache_mode;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_cache_mode_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_set(int unit, CONST ARAD_SW_KBP_DIAG_FLAGS *kbp_diag_flag){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_diag_flag.verify( unit));
    SHR_SW_STATE_MEMSET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->kbp_diag_flag,
        kbp_diag_flag,
        ARAD_SW_KBP_DIAG_FLAGS,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_get(int unit, ARAD_SW_KBP_DIAG_FLAGS *kbp_diag_flag){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_diag_flag.verify( unit));
    *kbp_diag_flag = sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->kbp_diag_flag;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_entry_flag_set(int unit, uint8 entry_flag){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_diag_flag.entry_flag.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->kbp_diag_flag.entry_flag,
        entry_flag,
        uint8,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_entry_flag_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_entry_flag_get(int unit, uint8 *entry_flag){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_diag_flag.entry_flag.verify( unit));
    *entry_flag = sw_state[unit]->dpp.soc.arad.pp->frwrd_ip->kbp_diag_flag.entry_flag;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_entry_flag_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_diag_flag.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 


int
sw_state_dpp_soc_arad_pp_frwrd_ip_access_cb_init(int unit){
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.alloc = sw_state_dpp_soc_arad_pp_frwrd_ip_alloc;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.is_allocated = sw_state_dpp_soc_arad_pp_frwrd_ip_is_allocated;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.free = sw_state_dpp_soc_arad_pp_frwrd_ip_free;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.verify = sw_state_dpp_soc_arad_pp_frwrd_ip_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.route_key_to_entry_id.set = sw_state_dpp_soc_arad_pp_frwrd_ip_route_key_to_entry_id_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.route_key_to_entry_id.get = sw_state_dpp_soc_arad_pp_frwrd_ip_route_key_to_entry_id_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.route_key_to_entry_id.verify = sw_state_dpp_soc_arad_pp_frwrd_ip_route_key_to_entry_id_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.set = sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_set;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.get = sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_get;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.alloc = sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_alloc;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.is_allocated = sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_is_allocated;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.free = sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_free;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.verify = sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_verify;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.db_entry.set = sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_db_entry_set;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.db_entry.get = sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_db_entry_get;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.location_tbl.db_entry.verify = sw_state_dpp_soc_arad_pp_frwrd_ip_location_tbl_db_entry_verify;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_cache_mode.set = sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_cache_mode_set;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_cache_mode.get = sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_cache_mode_get;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_cache_mode.verify = sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_cache_mode_verify;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_diag_flag.set = sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_set;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_diag_flag.get = sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_get;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_diag_flag.verify = sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_verify;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_diag_flag.entry_flag.set = sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_entry_flag_set;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_diag_flag.entry_flag.get = sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_entry_flag_get;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
#if defined(INCLUDE_KBP)
    sw_state_access[unit].dpp.soc.arad.pp.frwrd_ip.kbp_diag_flag.entry_flag.verify = sw_state_dpp_soc_arad_pp_frwrd_ip_kbp_diag_flag_entry_flag_verify;
#endif /* defined(INCLUDE_KBP)*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
