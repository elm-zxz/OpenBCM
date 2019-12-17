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
#include <shared/swstate/access/sw_state_dpp_soc_arad_pp_header_data_access.h>

#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_set(int unit, CONST ARAD_PP_HEADER_DATA *header_data){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.header_data.verify( unit));
    SHR_SW_STATE_MEMSET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->header_data[0],
        header_data,
        ARAD_PP_HEADER_DATA,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_header_data_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_get(int unit, ARAD_PP_HEADER_DATA *header_data){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.header_data.verify( unit));
    *header_data = sw_state[unit]->dpp.soc.arad.pp->header_data[0];
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_alloc(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->header_data,
        sizeof(ARAD_PP_HEADER_DATA),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_header_data_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->header_data,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_header_data_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->header_data,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_header_data_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.soc.arad.pp->header_data);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_set(int unit, uint8 system_headers_mode){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.header_data.system_headers_mode.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->header_data->system_headers_mode,
        system_headers_mode,
        uint8,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_get(int unit, uint8 *system_headers_mode){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.header_data.system_headers_mode.verify( unit));
    *system_headers_mode = sw_state[unit]->dpp.soc.arad.pp->header_data->system_headers_mode;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.header_data.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_set(int unit, uint8 ftmh_stacking_ext_enable){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.header_data.ftmh_stacking_ext_enable.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->header_data->ftmh_stacking_ext_enable,
        ftmh_stacking_ext_enable,
        uint8,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_get(int unit, uint8 *ftmh_stacking_ext_enable){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.header_data.ftmh_stacking_ext_enable.verify( unit));
    *ftmh_stacking_ext_enable = sw_state[unit]->dpp.soc.arad.pp->header_data->ftmh_stacking_ext_enable;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.header_data.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_set(int unit, uint8 ftmh_lb_key_ext_en){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.header_data.ftmh_lb_key_ext_en.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->header_data->ftmh_lb_key_ext_en,
        ftmh_lb_key_ext_en,
        uint8,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_get(int unit, uint8 *ftmh_lb_key_ext_en){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.header_data.ftmh_lb_key_ext_en.verify( unit));
    *ftmh_lb_key_ext_en = sw_state[unit]->dpp.soc.arad.pp->header_data->ftmh_lb_key_ext_en;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.header_data.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 


int
sw_state_dpp_soc_arad_pp_header_data_access_cb_init(int unit){
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.set = sw_state_dpp_soc_arad_pp_header_data_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.get = sw_state_dpp_soc_arad_pp_header_data_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.alloc = sw_state_dpp_soc_arad_pp_header_data_alloc;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.is_allocated = sw_state_dpp_soc_arad_pp_header_data_is_allocated;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.free = sw_state_dpp_soc_arad_pp_header_data_free;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.verify = sw_state_dpp_soc_arad_pp_header_data_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.system_headers_mode.set = sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.system_headers_mode.get = sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.system_headers_mode.verify = sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.ftmh_stacking_ext_enable.set = sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.ftmh_stacking_ext_enable.get = sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.ftmh_stacking_ext_enable.verify = sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.ftmh_lb_key_ext_en.set = sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.ftmh_lb_key_ext_en.get = sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.header_data.ftmh_lb_key_ext_en.verify = sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
