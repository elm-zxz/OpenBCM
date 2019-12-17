/*
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#ifndef __BCM_ERROR_H__
#define __BCM_ERROR_H__

#include <shared/error.h>

/* 
 * BCM API error codes.
 * 
 * Note: An error code may be converted to a string by passing the code
 * to bcm_errmsg().
 */
typedef enum bcm_error_e {
    BCM_E_NONE         = _SHR_E_NONE, 
    BCM_E_INTERNAL     = _SHR_E_INTERNAL, 
    BCM_E_MEMORY       = _SHR_E_MEMORY, 
    BCM_E_UNIT         = _SHR_E_UNIT, 
    BCM_E_PARAM        = _SHR_E_PARAM, 
    BCM_E_EMPTY        = _SHR_E_EMPTY, 
    BCM_E_FULL         = _SHR_E_FULL, 
    BCM_E_NOT_FOUND    = _SHR_E_NOT_FOUND, 
    BCM_E_EXISTS       = _SHR_E_EXISTS, 
    BCM_E_TIMEOUT      = _SHR_E_TIMEOUT, 
    BCM_E_BUSY         = _SHR_E_BUSY, 
    BCM_E_FAIL         = _SHR_E_FAIL, 
    BCM_E_DISABLED     = _SHR_E_DISABLED, 
    BCM_E_BADID        = _SHR_E_BADID, 
    BCM_E_RESOURCE     = _SHR_E_RESOURCE, 
    BCM_E_CONFIG       = _SHR_E_CONFIG, 
    BCM_E_UNAVAIL      = _SHR_E_UNAVAIL, 
    BCM_E_INIT         = _SHR_E_INIT, 
    BCM_E_PORT         = _SHR_E_PORT 
} bcm_error_t;

/* Switch event types */
typedef enum bcm_switch_event_e {
    BCM_SWITCH_EVENT_IO_ERROR              =   _SHR_SWITCH_EVENT_IO_ERROR, 
    BCM_SWITCH_EVENT_PARITY_ERROR          =   _SHR_SWITCH_EVENT_PARITY_ERROR, 
    BCM_SWITCH_EVENT_THREAD_ERROR          =   _SHR_SWITCH_EVENT_THREAD_ERROR, 
    BCM_SWITCH_EVENT_ACCESS_ERROR          =   _SHR_SWITCH_EVENT_ACCESS_ERROR, 
    BCM_SWITCH_EVENT_ASSERT_ERROR          =   _SHR_SWITCH_EVENT_ASSERT_ERROR, 
    BCM_SWITCH_EVENT_MODID_CHANGE          =   _SHR_SWITCH_EVENT_MODID_CHANGE, 
    BCM_SWITCH_EVENT_DOS_ATTACK            =   _SHR_SWITCH_EVENT_DOS_ATTACK, 
    BCM_SWITCH_EVENT_STABLE_FULL           =   _SHR_SWITCH_EVENT_STABLE_FULL, 
    BCM_SWITCH_EVENT_STABLE_ERROR          =   _SHR_SWITCH_EVENT_STABLE_ERROR, 
    BCM_SWITCH_EVENT_UNCONTROLLED_SHUTDOWN =   _SHR_SWITCH_EVENT_UNCONTROLLED_SHUTDOWN, 
    BCM_SWITCH_EVENT_WARM_BOOT_DOWNGRADE   =   _SHR_SWITCH_EVENT_WARM_BOOT_DOWNGRADE, 
    BCM_SWITCH_EVENT_TUNE_ERROR            =   _SHR_SWITCH_EVENT_TUNE_ERROR, 
    BCM_SWITCH_EVENT_DEVICE_INTERRUPT      =   _SHR_SWITCH_EVENT_DEVICE_INTERRUPT, 
    BCM_SWITCH_EVENT_ALARM                 =   _SHR_SWITCH_EVENT_ALARM, 
    BCM_SWITCH_EVENT_MMU_BST_TRIGGER       =   _SHR_SWITCH_EVENT_MMU_BST_TRIGGER, 
    BCM_SWITCH_EVENT_EPON_ALARM            =   _SHR_SWITCH_EVENT_EPON_ALARM, 
    BCM_SWITCH_EVENT_RUNT_DETECT           =   _SHR_SWITCH_EVENT_RUNT_DETECT, 
    BCM_SWITCH_EVENT_AUTONEG_SPEED_ERROR   =   _SHR_SWITCH_EVENT_AUTONEG_SPEED_ERROR, 
    BCM_SWITCH_EVENT_COUNT                 =   _SHR_SWITCH_EVENT_COUNT 
} bcm_switch_event_t;

#define BCM_SUCCESS(rv)         \
    _SHR_E_SUCCESS(rv) 

#define BCM_FAILURE(rv)         \
    _SHR_E_FAILURE(rv) 

#define BCM_IF_ERROR_RETURN(op)  \
    _SHR_E_IF_ERROR_RETURN(op) 

#define BCM_IF_ERROR_NOT_UNAVAIL_RETURN(op)  \
    _SHR_E_IF_ERROR_NOT_UNAVAIL_RETURN(op) 

#define bcm_errmsg(rv)          \
    _SHR_ERRMSG(rv) 

#endif /* __BCM_ERROR_H__ */
