/**************************************************************************************************
 **************************************************************************************************
 *                                                                                                *
  *                                                                                                *
 *  Description   :  Read/Write macros to Eagle/Merlin IP's uC RAM's User variables               *
 *                                                                                                *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.                                                                          *
 *  No portions of this material may be reproduced in any form without                            *
 *  the written permission of:                                                                    *
 *      Broadcom Corporation                                                                      *
 *      5300 California Avenue                                                                    *
 *      Irvine, CA  92617                                                                         *
 *                                                                                                *
 *  All information contained in this document is Broadcom Corporation                            *
 *  company private proprietary, and trade secret.                                                *
 */

/** @file eagle_merlin_api_uc_vars_rdwr_defns.h
 * Read/Write macros to Eagle/Merlin IP's uC RAM's User variables
 */

/* THIS FILE IS GENERATED USING AN AUTOMATED SCRIPT... PLEASE DO NOT EDIT THIS FILE DIRECTLY !!! */


#ifndef EAGLE_MERLIN_API_UC_VARS_RDWR_DEFNS_H
#define EAGLE_MERLIN_API_UC_VARS_RDWR_DEFNS_H

/************************************/
/*  Serdes IP RAM access functions  */
/************************************/

/* RAM access functions for lane_var_struct variables */
#define rdv_config_word()                                            merlin_dino_rdwl_uc_var(pa,__ERR,0x0)
#define wrv_config_word(wr_val)                                      merlin_dino_wrwl_uc_var(pa,0x0,wr_val)
#define rdv_usr_ctrl_retune_after_restart()                          merlin_dino_rdbl_uc_var(pa,__ERR,0x2)
#define wrv_usr_ctrl_retune_after_restart(wr_val)                    merlin_dino_wrbl_uc_var(pa,0x2,wr_val)
#define rdv_usr_ctrl_clk90_offset_adjust()                           merlin_dino_rdbl_uc_var(pa,__ERR,0x3)
#define wrv_usr_ctrl_clk90_offset_adjust(wr_val)                     merlin_dino_wrbl_uc_var(pa,0x3,wr_val)
#define rdv_usr_ctrl_clk90_offset_override()                         merlin_dino_rdbl_uc_var(pa,__ERR,0x4)
#define wrv_usr_ctrl_clk90_offset_override(wr_val)                   merlin_dino_wrbl_uc_var(pa,0x4,wr_val)
#define rdv_usr_ctrl_lane_event_log_level()                          merlin_dino_rdbl_uc_var(pa,__ERR,0x5)
#define wrv_usr_ctrl_lane_event_log_level(wr_val)                    merlin_dino_wrbl_uc_var(pa,0x5,wr_val)
#define rdv_usr_ctrl_disable_startup_functions_byte()                merlin_dino_rdbl_uc_var(pa,__ERR,0x6)
#define wrv_usr_ctrl_disable_startup_functions_byte(wr_val)          merlin_dino_wrbl_uc_var(pa,0x6,wr_val)
#define rdv_usr_ctrl_disable_startup_dfe_functions_byte()            merlin_dino_rdbl_uc_var(pa,__ERR,0x7)
#define wrv_usr_ctrl_disable_startup_dfe_functions_byte(wr_val)      merlin_dino_wrbl_uc_var(pa,0x7,wr_val)
#define rdv_usr_ctrl_disable_steady_state_functions_byte()           merlin_dino_rdbl_uc_var(pa,__ERR,0x8)
#define wrv_usr_ctrl_disable_steady_state_functions_byte(wr_val)     merlin_dino_wrbl_uc_var(pa,0x8,wr_val)
#define rdv_usr_ctrl_disable_steady_state_dfe_functions_byte()       merlin_dino_rdbl_uc_var(pa,__ERR,0x9)
#define wrv_usr_ctrl_disable_steady_state_dfe_functions_byte(wr_val) merlin_dino_wrbl_uc_var(pa,0x9,wr_val)
#define rdv_usr_sts_restart_counter()                                merlin_dino_rdbl_uc_var(pa,__ERR,0xa)
#define wrv_usr_sts_restart_counter(wr_val)                          merlin_dino_wrbl_uc_var(pa,0xa,wr_val)
#define rdv_usr_sts_reset_counter()                                  merlin_dino_rdbl_uc_var(pa,__ERR,0xb)
#define wrv_usr_sts_reset_counter(wr_val)                            merlin_dino_wrbl_uc_var(pa,0xb,wr_val)
#define rdv_usr_sts_pmd_lock_counter()                               merlin_dino_rdbl_uc_var(pa,__ERR,0xc)
#define wrv_usr_sts_pmd_lock_counter(wr_val)                         merlin_dino_wrbl_uc_var(pa,0xc,wr_val)
#define rdv_usr_sts_heye_left()                                      merlin_dino_rdbl_uc_var(pa,__ERR,0xd)
#define wrv_usr_sts_heye_left(wr_val)                                merlin_dino_wrbl_uc_var(pa,0xd,wr_val)
#define rdv_usr_sts_heye_right()                                     merlin_dino_rdbl_uc_var(pa,__ERR,0xe)
#define wrv_usr_sts_heye_right(wr_val)                               merlin_dino_wrbl_uc_var(pa,0xe,wr_val)
#define rdv_usr_sts_veye_upper()                                     merlin_dino_rdbl_uc_var(pa,__ERR,0xf)
#define wrv_usr_sts_veye_upper(wr_val)                               merlin_dino_wrbl_uc_var(pa,0xf,wr_val)
#define rdv_usr_sts_veye_lower()                                     merlin_dino_rdbl_uc_var(pa,__ERR,0x10)
#define wrv_usr_sts_veye_lower(wr_val)                               merlin_dino_wrbl_uc_var(pa,0x10,wr_val)
#define rdv_usr_sts_micro_stopped()                                  merlin_dino_rdbl_uc_var(pa,__ERR,0x11)
#define wrv_usr_sts_micro_stopped(wr_val)                            merlin_dino_wrbl_uc_var(pa,0x11,wr_val)
#define rdv_usr_sts_link_time()                                      merlin_dino_rdwl_uc_var(pa,__ERR,0x12)
#define wrv_usr_sts_link_time(wr_val)                                merlin_dino_wrwl_uc_var(pa,0x12,wr_val)
#define rdv_usr_diag_status()                                        merlin_dino_rdwl_uc_var(pa,__ERR,0x14)
#define wrv_usr_diag_status(wr_val)                                  merlin_dino_wrwl_uc_var(pa,0x14,wr_val)
#define rdv_usr_diag_rd_ptr()                                        merlin_dino_rdbl_uc_var(pa,__ERR,0x16)
#define wrv_usr_diag_rd_ptr(wr_val)                                  merlin_dino_wrbl_uc_var(pa,0x16,wr_val)
#define rdv_usr_diag_mode()                                          merlin_dino_rdbl_uc_var(pa,__ERR,0x17)
#define wrv_usr_diag_mode(wr_val)                                    merlin_dino_wrbl_uc_var(pa,0x17,wr_val)
#define rdv_usr_var_msb()                                            merlin_dino_rdwl_uc_var(pa,__ERR,0x18)
#define wrv_usr_var_msb(wr_val)                                      merlin_dino_wrwl_uc_var(pa,0x18,wr_val)
#define rdv_usr_var_lsb()                                            merlin_dino_rdwl_uc_var(pa,__ERR,0x1a)
#define wrv_usr_var_lsb(wr_val)                                      merlin_dino_wrwl_uc_var(pa,0x1a,wr_val)

/* RAM access functions for ilane_var_struct variables */

/* RAM access functions for core_var_struct variables */
#define rdcv_config_word()                                           merlin_dino_rdwc_uc_var(pa,__ERR,0x0)
#define wrcv_config_word(wr_val)                                     merlin_dino_wrwc_uc_var(pa,0x0,wr_val)
#define rdcv_temp_frc_val()                                          merlin_dino_rdwc_uc_var(pa,__ERR,0x2)
#define wrcv_temp_frc_val(wr_val)                                    merlin_dino_wrwc_uc_var(pa,0x2,wr_val)
#define rdcv_common_ucode_version()                                  merlin_dino_rdwc_uc_var(pa,__ERR,0x4)
#define wrcv_common_ucode_version(wr_val)                            merlin_dino_wrwc_uc_var(pa,0x4,wr_val)
#define rdcv_avg_tmon_reg13bit()                                     merlin_dino_rdwc_uc_var(pa,__ERR,0x6)
#define wrcv_avg_tmon_reg13bit(wr_val)                               merlin_dino_wrwc_uc_var(pa,0x6,wr_val)
#define rdcv_trace_mem_rd_idx()                                      merlin_dino_rdwc_uc_var(pa,__ERR,0x8)
#define wrcv_trace_mem_rd_idx(wr_val)                                merlin_dino_wrwc_uc_var(pa,0x8,wr_val)
#define rdcv_trace_mem_wr_idx()                                      merlin_dino_rdwc_uc_var(pa,__ERR,0xa)
#define wrcv_trace_mem_wr_idx(wr_val)                                merlin_dino_wrwc_uc_var(pa,0xa,wr_val)
#define rdcv_temp_idx()                                              merlin_dino_rdbc_uc_var(pa,__ERR,0xc)
#define wrcv_temp_idx(wr_val)                                        merlin_dino_wrbc_uc_var(pa,0xc,wr_val)
#define rdcv_usr_ctrl_core_event_log_level()                         merlin_dino_rdbc_uc_var(pa,__ERR,0xd)
#define wrcv_usr_ctrl_core_event_log_level(wr_val)                   merlin_dino_wrbc_uc_var(pa,0xd,wr_val)
#define rdcv_common_ucode_minor_version()                            merlin_dino_rdbc_uc_var(pa,__ERR,0xe)
#define wrcv_common_ucode_minor_version(wr_val)                      merlin_dino_wrbc_uc_var(pa,0xe,wr_val)
#define rdcv_afe_hardware_version()                                  merlin_dino_rdbc_uc_var(pa,__ERR,0xf)
#define wrcv_afe_hardware_version(wr_val)                            merlin_dino_wrbc_uc_var(pa,0xf,wr_val)
#define rdcv_status_byte()                                           merlin_dino_rdbc_uc_var(pa,__ERR,0x10)
#define wrcv_status_byte(wr_val)                                     merlin_dino_wrbc_uc_var(pa,0x10,wr_val)
#define rdcv_diag_max_time_control()                                 merlin_dino_rdbc_uc_var(pa,__ERR,0x11)
#define wrcv_diag_max_time_control(wr_val)                           merlin_dino_wrbc_uc_var(pa,0x11,wr_val)
#define rdcv_diag_max_err_control()                                  merlin_dino_rdbc_uc_var(pa,__ERR,0x12)
#define wrcv_diag_max_err_control(wr_val)                            merlin_dino_wrbc_uc_var(pa,0x12,wr_val)
#define rdcv_config_pll1_word()                                      merlin_dino_rdwc_uc_var(pa,__ERR,0x18)
#define wrcv_config_pll1_word(wr_val)                                merlin_dino_wrwc_uc_var(pa,0x18,wr_val)

#endif
