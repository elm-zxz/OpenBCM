/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_DPP_SOC_ARAD_TM_TCAM_MGMT_ACCESS_H_
#define _SHR_SW_STATE_DPP_SOC_ARAD_TM_TCAM_MGMT_ACCESS_H_

/********************************* access calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the access calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the access struct by 'sw_state_access_cb_init'.                  */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_set */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_set_cb)(
    int unit, CONST ARAD_SW_DB_TCAM_MGMT *tcam_mgmt);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_get */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_get_cb)(
    int unit, ARAD_SW_DB_TCAM_MGMT *tcam_mgmt);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_alloc */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_alloc_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_is_allocated */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_is_allocated_cb)(
    int unit, uint8 *is_allocated);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_free */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_free_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_verify */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_verify_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_set */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_set_cb)(
    int unit, int profiles_idx_0, CONST ARAD_SW_DB_TCAM_ACCESS_PROFILE *profiles);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_get */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_get_cb)(
    int unit, int profiles_idx_0, ARAD_SW_DB_TCAM_ACCESS_PROFILE *profiles);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_verify */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_verify_cb)(
    int unit, int profiles_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_set */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_set_cb)(
    int unit, int profiles_idx_0, uint8 valid);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_get */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_get_cb)(
    int unit, int profiles_idx_0, uint8 *valid);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_verify */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_verify_cb)(
    int unit, int profiles_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_set */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_set_cb)(
    int unit, int profiles_idx_0, uint32 min_banks);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_get */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_get_cb)(
    int unit, int profiles_idx_0, uint32 *min_banks);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_verify */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_verify_cb)(
    int unit, int profiles_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_set */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_set_cb)(
    int unit, int profiles_idx_0, ARAD_TCAM_BANK_OWNER bank_owner);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_get */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_get_cb)(
    int unit, int profiles_idx_0, ARAD_TCAM_BANK_OWNER *bank_owner);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_verify */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_verify_cb)(
    int unit, int profiles_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_set */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_set_cb)(
    int unit, int profiles_idx_0, ARAD_TCAM_MGMT_SIGNAL callback);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_get */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_get_cb)(
    int unit, int profiles_idx_0, ARAD_TCAM_MGMT_SIGNAL *callback);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_verify */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_verify_cb)(
    int unit, int profiles_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_set */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_set_cb)(
    int unit, int profiles_idx_0, uint32 user_data);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_get */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_get_cb)(
    int unit, int profiles_idx_0, uint32 *user_data);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_verify */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_verify_cb)(
    int unit, int profiles_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_set */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_set_cb)(
    int unit, int banks_idx_0, CONST ARAD_SW_DB_TCAM_MANAGED_BANK *banks);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_get */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_get_cb)(
    int unit, int banks_idx_0, ARAD_SW_DB_TCAM_MANAGED_BANK *banks);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_verify */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_verify_cb)(
    int unit, int banks_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_set */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_set_cb)(
    int unit, int banks_idx_0, int prefix_db_idx_0, uint32 prefix_db);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_get */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_get_cb)(
    int unit, int banks_idx_0, int prefix_db_idx_0, uint32 *prefix_db);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_verify */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_verify_cb)(
    int unit, int banks_idx_0, int prefix_db_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_set */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_set_cb)(
    int unit, int banks_idx_0, uint32 nof_dbs);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_get */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_get_cb)(
    int unit, int banks_idx_0, uint32 *nof_dbs);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_verify */
typedef int (*sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_verify_cb)(
    int unit, int banks_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

/*********************************** access calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the access layer for the entire SW state.*/
/* use this tree to alloc/free/set/get fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_cbs_s {
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_set_cb set;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_get_cb get;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_verify_cb verify;
} sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_cbs_s {
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_set_cb set;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_get_cb get;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_verify_cb verify;
} sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_cbs_s {
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_set_cb set;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_get_cb get;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_verify_cb verify;
} sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_cbs_s {
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_set_cb set;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_get_cb get;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_verify_cb verify;
} sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_cbs_s {
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_set_cb set;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_get_cb get;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_verify_cb verify;
} sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_cbs_s {
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_set_cb set;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_get_cb get;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_verify_cb verify;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_valid_cbs_t valid;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_min_banks_cbs_t min_banks;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_bank_owner_cbs_t bank_owner;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_callback_cbs_t callback;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_user_data_cbs_t user_data;
} sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_cbs_s {
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_set_cb set;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_get_cb get;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_verify_cb verify;
} sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_cbs_s {
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_set_cb set;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_get_cb get;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_verify_cb verify;
} sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_cbs_s {
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_set_cb set;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_get_cb get;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_verify_cb verify;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_prefix_db_cbs_t prefix_db;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_nof_dbs_cbs_t nof_dbs;
} sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_tcam_mgmt_cbs_s {
    sw_state_dpp_soc_arad_tm_tcam_mgmt_set_cb set;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_get_cb get;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_alloc_cb alloc;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_is_allocated_cb is_allocated;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_free_cb free;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_verify_cb verify;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_profiles_cbs_t profiles;
    sw_state_dpp_soc_arad_tm_tcam_mgmt_banks_cbs_t banks;
} sw_state_dpp_soc_arad_tm_tcam_mgmt_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

int sw_state_dpp_soc_arad_tm_tcam_mgmt_access_cb_init(int unit);

#endif /* _SHR_SW_STATE_DPP_SOC_ARAD_TM_TCAM_MGMT_ACCESS_H_ */
