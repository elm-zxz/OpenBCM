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

#ifndef _SHR_SW_STATE_EXM_ACCESS_H_
#define _SHR_SW_STATE_EXM_ACCESS_H_

#include <shared/swstate/access/sw_state_exm_twoLevelsArr_access.h>
#include <shared/swstate/access/sw_state_exm_twoLevelsArrArr_access.h>
#include <shared/swstate/access/sw_state_exm_twoLevelsArrPtr_access.h>
#include <shared/swstate/access/sw_state_exm_twoLevelsPtr_access.h>
#include <shared/swstate/access/sw_state_exm_twoLevelsRegular_access.h>
#include <shared/swstate/access/sw_state_exm_twoLevelsRegularAllowWbAccess_access.h>
#include <shared/swstate/access/sw_state_exm_twoLevelsSinglePtr_access.h>
#include <shared/swstate/access/sw_state_exm_twoLevelsStaticArrArr_access.h>
#include <shared/swstate/access/sw_state_exm_twoLevelsStaticArrInt_access.h>
/********************************* access calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the access calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the access struct by 'sw_state_access_cb_init'.                  */
/***************************************************************************************************/

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exm_alloc */
typedef int (*sw_state_exm_alloc_cb)(
    int unit);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exm_is_allocated */
typedef int (*sw_state_exm_is_allocated_cb)(
    int unit, uint8 *is_allocated);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exm_free */
typedef int (*sw_state_exm_free_cb)(
    int unit);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exm_verify */
typedef int (*sw_state_exm_verify_cb)(
    int unit);
#endif /* _SHR_SW_STATE_EXM*/ 

/*********************************** access calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the access layer for the entire SW state.*/
/* use this tree to alloc/free/set/get fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#ifdef _SHR_SW_STATE_EXM
typedef struct sw_state_exm_cbs_s {
#ifdef _SHR_SW_STATE_EXM
    sw_state_exm_alloc_cb alloc;
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
    sw_state_exm_is_allocated_cb is_allocated;
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
    sw_state_exm_free_cb free;
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
    sw_state_exm_verify_cb verify;
#endif /* _SHR_SW_STATE_EXM*/ 
    sw_state_exm_twoLevelsRegular_cbs_t twoLevelsRegular;
    sw_state_exm_twoLevelsSinglePtr_cbs_t twoLevelsSinglePtr;
    sw_state_exm_twoLevelsStaticArrInt_cbs_t twoLevelsStaticArrInt;
    sw_state_exm_twoLevelsStaticArrArr_cbs_t twoLevelsStaticArrArr;
    sw_state_exm_twoLevelsPtr_cbs_t twoLevelsPtr;
    sw_state_exm_twoLevelsArr_cbs_t twoLevelsArr;
    sw_state_exm_twoLevelsArrArr_cbs_t twoLevelsArrArr;
    sw_state_exm_twoLevelsArrPtr_cbs_t twoLevelsArrPtr;
    sw_state_exm_twoLevelsRegularAllowWbAccess_cbs_t twoLevelsRegularAllowWbAccess;
} sw_state_exm_cbs_t;

#endif /* _SHR_SW_STATE_EXM*/ 

int sw_state_exm_access_cb_init(int unit);

#endif /* _SHR_SW_STATE_EXM_ACCESS_H_ */
