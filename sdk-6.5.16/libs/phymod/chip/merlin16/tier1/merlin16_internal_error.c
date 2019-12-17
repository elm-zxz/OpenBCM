/***********************************************************************************
 ***********************************************************************************
 *  File Name     :  merlin16_internal_error.c                                   *
 *  Created On    :  12/07/2015                                                    *
 *  Created By    :  Brent Roberts                                                 *
 *  Description   :  API functions for internal errors in for Serdes IPs           *
 *  Revision      :   *
 *                                                                                 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.                                                           *
 *  No portions of this material may be reproduced in any form without             *
 *  the written permission of:                                                     *
 *      Broadcom Corporation                                                       *
 *      5300 California Avenue                                                     *
 *      Irvine, CA  92617                                                          *
 *                                                                                 *
 *  All information contained in this document is Broadcom Corporation             *
 *  company private proprietary, and trade secret.                                 *
 */

/** @file merlin16_internal_error.c
 * Implementation of API internal error functions
 */

#include "merlin16_internal_error.h"
#include "merlin16_dependencies.h"
#include "merlin16_functions.h"

char* merlin16_INTERNAL_e2s_err_code(err_code_t err_code)
{
    switch(err_code){
        case ERR_CODE_NONE: return "ERR_CODE_NONE";
        case ERR_CODE_INVALID_RAM_ADDR: return "ERR_CODE_INVALID_RAM_ADDR";
        case ERR_CODE_SERDES_DELAY: return "ERR_CODE_SERDES_DELAY";
        case ERR_CODE_POLLING_TIMEOUT: return "ERR_CODE_POLLING_TIMEOUT";
        case ERR_CODE_CFG_PATT_INVALID_PATTERN: return "ERR_CODE_CFG_PATT_INVALID_PATTERN";
        case ERR_CODE_CFG_PATT_INVALID_PATT_LENGTH: return "ERR_CODE_CFG_PATT_INVALID_PATT_LENGTH";
        case ERR_CODE_CFG_PATT_LEN_MISMATCH: return "ERR_CODE_CFG_PATT_LEN_MISMATCH";
        case ERR_CODE_CFG_PATT_PATTERN_BIGGER_THAN_MAXLEN: return "ERR_CODE_CFG_PATT_PATTERN_BIGGER_THAN_MAXLEN";
        case ERR_CODE_CFG_PATT_INVALID_HEX: return "ERR_CODE_CFG_PATT_INVALID_HEX";
        case ERR_CODE_CFG_PATT_INVALID_BIN2HEX: return "ERR_CODE_CFG_PATT_INVALID_BIN2HEX";
        case ERR_CODE_CFG_PATT_INVALID_SEQ_WRITE: return "ERR_CODE_CFG_PATT_INVALID_SEQ_WRITE";
        case ERR_CODE_PATT_GEN_INVALID_MODE_SEL: return "ERR_CODE_PATT_GEN_INVALID_MODE_SEL";
        case ERR_CODE_INVALID_UCODE_LEN: return "ERR_CODE_INVALID_UCODE_LEN";
        case ERR_CODE_MICRO_INIT_NOT_DONE: return "ERR_CODE_MICRO_INIT_NOT_DONE";
        case ERR_CODE_UCODE_LOAD_FAIL: return "ERR_CODE_UCODE_LOAD_FAIL";
        case ERR_CODE_UCODE_VERIFY_FAIL: return "ERR_CODE_UCODE_VERIFY_FAIL";
        case ERR_CODE_INVALID_TEMP_IDX: return "ERR_CODE_INVALID_TEMP_IDX";
        case ERR_CODE_INVALID_PLL_CFG: return "ERR_CODE_INVALID_PLL_CFG";
        case ERR_CODE_TX_HPF_INVALID: return "ERR_CODE_TX_HPF_INVALID";
        case ERR_CODE_VGA_INVALID: return "ERR_CODE_VGA_INVALID";
        case ERR_CODE_PF_INVALID: return "ERR_CODE_PF_INVALID";
        case ERR_CODE_TX_AMP_CTRL_INVALID: return "ERR_CODE_TX_AMP_CTRL_INVALID";
        case ERR_CODE_INVALID_EVENT_LOG_WRITE: return "ERR_CODE_INVALID_EVENT_LOG_WRITE";
        case ERR_CODE_INVALID_EVENT_LOG_READ: return "ERR_CODE_INVALID_EVENT_LOG_READ";
        case ERR_CODE_UC_CMD_RETURN_ERROR: return "ERR_CODE_UC_CMD_RETURN_ERROR";
        case ERR_CODE_DATA_NOTAVAIL: return "ERR_CODE_DATA_NOTAVAIL";
        case ERR_CODE_BAD_PTR_OR_INVALID_INPUT: return "ERR_CODE_BAD_PTR_OR_INVALID_INPUT";
        case ERR_CODE_UC_NOT_STOPPED: return "ERR_CODE_UC_NOT_STOPPED";
        case ERR_CODE_UC_CRC_NOT_MATCH: return "ERR_CODE_UC_CRC_NOT_MATCH";
        case ERR_CODE_CORE_DP_NOT_RESET: return "ERR_CODE_CORE_DP_NOT_RESET";
        case ERR_CODE_LANE_DP_NOT_RESET: return "ERR_CODE_LANE_DP_NOT_RESET";
        case ERR_CODE_EXCEPTION: return "ERR_CODE_EXCEPTION";
        case ERR_CODE_INFO_TABLE_ERROR: return "ERR_CODE_INFO_TABLE_ERROR";
        case ERR_CODE_REFCLK_FREQUENCY_INVALID: return "ERR_CODE_REFCLK_FREQUENCY_INVALID";
        case ERR_CODE_PLL_DIV_INVALID: return "ERR_CODE_PLL_DIV_INVALID";
        case ERR_CODE_VCO_FREQUENCY_INVALID: return "ERR_CODE_VCO_FREQUENCY_INVALID";
        case ERR_CODE_INSUFFICIENT_PARAMETERS: return "ERR_CODE_INSUFFICIENT_PARAMETERS";
        case ERR_CODE_CONFLICTING_PARAMETERS: return "ERR_CODE_CONFLICTING_PARAMETERS";
        case ERR_CODE_BAD_LANE_COUNT: return "ERR_CODE_BAD_LANE_COUNT";
        case ERR_CODE_BAD_LANE: return "ERR_CODE_BAD_LANE";
        case ERR_CODE_UC_NOT_RESET: return "ERR_CODE_UC_NOT_RESET";
        case ERR_CODE_FFE_TAP_INVALID: return "ERR_CODE_FFE_TAP_INVALID";
        case ERR_CODE_FFE_NOT_AVAILABLE: return "ERR_CODE_FFE_NOT_AVAILABLE";
        case ERR_CODE_INVALID_RX_PAM_MODE: return "ERR_CODE_INVALID_RX_PAM_MODE";
        case ERR_CODE_INVALID_PRBS_ERR_ANALYZER_FEC_SIZE: return "ERR_CODE_INVALID_PRBS_ERR_ANALYZER_FEC_SIZE";
        case ERR_CODE_INVALID_PRBS_ERR_ANALYZER_ERR_THRESH: return "ERR_CODE_INVALID_PRBS_ERR_ANALYZER_ERR_THRESH";
        case ERR_CODE_INVALID_PRBS_ERR_ANALYZER_HIST_ERR_THRESH: return "ERR_CODE_INVALID_PRBS_ERR_ANALYZER_HIST_ERR_THRESH";
        case ERR_CODE_CFG_PATT_INVALID_PAM4: return "ERR_CODE_CFG_PATT_INVALID_PAM4";
        case ERR_TDT_PATTERN_LENGTH_WR_FAILED: return "ERR_TDT_PATTERN_LENGTH_WR_FAILED";
        case ERR_CODE_RX_PI_DISP_MSB_STATUS_IS_1: return "ERR_CODE_RX_PI_DISP_MSB_STATUS_IS_1";
        default:{
            switch(err_code>>8){
            case 1: return "ERR_CODE_TXFIR";
            case 2: return "ERR_CODE_DFE_TAP";
            case 3: return "ERR_CODE_DIAG";
            default: return "Invalid error code";
            }
        }
    }
}

err_code_t merlin16_INTERNAL_print_err_msg(uint16_t err_code)
{
    if (err_code != 0) {
        USR_PRINTF(("ERROR: SerDes err_code = %s : %d\n", merlin16_INTERNAL_e2s_err_code(err_code),err_code));
    }
    return err_code;
}
