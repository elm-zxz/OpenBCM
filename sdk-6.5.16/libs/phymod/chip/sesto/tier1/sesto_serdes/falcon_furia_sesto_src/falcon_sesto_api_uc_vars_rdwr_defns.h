/********************************************************************************************
 ********************************************************************************************
 *                                                                                          *
  *                                                                                          *
 *  Description   :  Read/Write macros to Falcon IP's uC RAM's User variables               *
 *                                                                                          *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.                                                                    *
 *  No portions of this material may be reproduced in any form without                      *
 *  the written permission of:                                                              *
 *      Broadcom Corporation                                                                *
 *      5300 California Avenue                                                              *
 *      Irvine, CA  92617                                                                   *
 *                                                                                          *
 *  All information contained in this document is Broadcom Corporation                      *
 *  company private proprietary, and trade secret.                                          *
 */

/** @file falcon_api_uc_vars_rdwr_defns.h
 * Read/Write macros to Falcon IP's uC RAM's User variables
 */

/* THIS FILE IS GENERATED USING AN AUTOMATED SCRIPT... PLEASE DO NOT EDIT THIS FILE DIRECTLY !!! */


#ifndef FALCON_API_UC_VARS_RDWR_DEFNS_H
#define FALCON_API_UC_VARS_RDWR_DEFNS_H

  /************************************/
  /*  Serdes IP RAM access functions  */
  /************************************/

  /* RAM access functions for lane_var_struct variables */
  #define rdv_falcon_furia_sesto_config_word()                                            falcon_furia_sesto_rdwl_uc_var(pa, __ERR,0x0)
  #define wrv_falcon_furia_sesto_config_word(wr_val)                                      falcon_furia_sesto_wrwl_uc_var(pa, 0x0,wr_val)
  #define rdv_falcon_furia_sesto_usr_ctrl_retune_after_restart()                          falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x2)
  #define wrv_falcon_furia_sesto_usr_ctrl_retune_after_restart(wr_val)                    falcon_furia_sesto_wrbl_uc_var(pa, 0x2,wr_val)
  #define rdv_falcon_furia_sesto_usr_ctrl_clk90_offset_adjust()                           falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x3)
  #define wrv_falcon_furia_sesto_usr_ctrl_clk90_offset_adjust(wr_val)                     falcon_furia_sesto_wrbl_uc_var(pa, 0x3,wr_val)
  #define rdv_falcon_furia_sesto_usr_ctrl_clk90_offset_override()                         falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x4)
  #define wrv_falcon_furia_sesto_usr_ctrl_clk90_offset_override(wr_val)                   falcon_furia_sesto_wrbl_uc_var(pa, 0x4,wr_val)
  #define rdv_falcon_furia_sesto_usr_ctrl_lane_event_log_level()                          falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x5)
  #define wrv_falcon_furia_sesto_usr_ctrl_lane_event_log_level(wr_val)                    falcon_furia_sesto_wrbl_uc_var(pa, 0x5,wr_val)
  #define rdv_falcon_furia_sesto_usr_ctrl_dummy()                                         falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x6)
  #define wrv_falcon_furia_sesto_usr_ctrl_dummy(wr_val)                                   falcon_furia_sesto_wrbl_uc_var(pa, 0x6,wr_val)
  #define rdv_falcon_furia_sesto_usr_ctrl_cl93n72_frc_byte()                              falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x7)
  #define wrv_falcon_furia_sesto_usr_ctrl_cl93n72_frc_byte(wr_val)                        falcon_furia_sesto_wrbl_uc_var(pa, 0x7,wr_val)
  #define rdv_falcon_furia_sesto_usr_ctrl_disable_startup_functions_word()                falcon_furia_sesto_rdwl_uc_var(pa, __ERR,0x8)
  #define wrv_falcon_furia_sesto_usr_ctrl_disable_startup_functions_word(wr_val)          falcon_furia_sesto_wrwl_uc_var(pa, 0x8,wr_val)
  #define rdv_falcon_furia_sesto_usr_ctrl_disable_steady_state_functions_word()           falcon_furia_sesto_rdwl_uc_var(pa, __ERR,0xa)
  #define wrv_falcon_furia_sesto_usr_ctrl_disable_steady_state_functions_word(wr_val)     falcon_furia_sesto_wrwl_uc_var(pa, 0xa,wr_val)
  #define rdv_falcon_furia_sesto_usr_ctrl_disable_startup_dfe_functions_byte()            falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0xc)
  #define wrv_falcon_furia_sesto_usr_ctrl_disable_startup_dfe_functions_byte(wr_val)      falcon_furia_sesto_wrbl_uc_var(pa, 0xc,wr_val)
  #define rdv_falcon_furia_sesto_usr_ctrl_disable_steady_state_dfe_functions_byte()       falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0xd)
  #define wrv_falcon_furia_sesto_usr_ctrl_disable_steady_state_dfe_functions_byte(wr_val) falcon_furia_sesto_wrbl_uc_var(pa, 0xd,wr_val)
  #define rdv_falcon_furia_sesto_usr_sts_restart_counter()                                falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0xe)
  #define wrv_falcon_furia_sesto_usr_sts_restart_counter(wr_val)                          falcon_furia_sesto_wrbl_uc_var(pa, 0xe,wr_val)
  #define rdv_falcon_furia_sesto_usr_sts_reset_counter()                                  falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0xf)
  #define wrv_falcon_furia_sesto_usr_sts_reset_counter(wr_val)                            falcon_furia_sesto_wrbl_uc_var(pa, 0xf,wr_val)
  #define rdv_falcon_furia_sesto_usr_sts_pmd_lock_counter()                               falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x10)
  #define wrv_falcon_furia_sesto_usr_sts_pmd_lock_counter(wr_val)                         falcon_furia_sesto_wrbl_uc_var(pa, 0x10,wr_val)
  #define rdv_falcon_furia_sesto_usr_sts_heye_left()                                      falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x11)
  #define wrv_falcon_furia_sesto_usr_sts_heye_left(wr_val)                                falcon_furia_sesto_wrbl_uc_var(pa, 0x11,wr_val)
  #define rdv_falcon_furia_sesto_usr_sts_heye_right()                                     falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x12)
  #define wrv_falcon_furia_sesto_usr_sts_heye_right(wr_val)                               falcon_furia_sesto_wrbl_uc_var(pa, 0x12,wr_val)
  #define rdv_falcon_furia_sesto_usr_sts_veye_upper()                                     falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x13)
  #define wrv_falcon_furia_sesto_usr_sts_veye_upper(wr_val)                               falcon_furia_sesto_wrbl_uc_var(pa, 0x13,wr_val)
  #define rdv_falcon_furia_sesto_usr_sts_veye_lower()                                     falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x14)
  #define wrv_falcon_furia_sesto_usr_sts_veye_lower(wr_val)                               falcon_furia_sesto_wrbl_uc_var(pa, 0x14,wr_val)
  #define rdv_falcon_furia_sesto_usr_sts_micro_stopped()                                  falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x15)
  #define wrv_falcon_furia_sesto_usr_sts_micro_stopped(wr_val)                            falcon_furia_sesto_wrbl_uc_var(pa, 0x15,wr_val)
  #define rdv_falcon_furia_sesto_usr_sts_link_time()                                      falcon_furia_sesto_rdwl_uc_var(pa, __ERR,0x16)
  #define wrv_falcon_furia_sesto_usr_sts_link_time(wr_val)                                falcon_furia_sesto_wrwl_uc_var(pa, 0x16,wr_val)
  #define rdv_falcon_furia_sesto_usr_diag_status()                                        falcon_furia_sesto_rdwl_uc_var(pa, __ERR,0x18)
  #define wrv_falcon_furia_sesto_usr_diag_status(wr_val)                                  falcon_furia_sesto_wrwl_uc_var(pa, 0x18,wr_val)
  #define rdv_falcon_furia_sesto_usr_diag_rd_ptr()                                        falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x1a)
  #define wrv_falcon_furia_sesto_usr_diag_rd_ptr(wr_val)                                  falcon_furia_sesto_wrbl_uc_var(pa, 0x1a,wr_val)
  #define rdv_falcon_furia_sesto_usr_diag_mode()                                          falcon_furia_sesto_rdbl_uc_var(pa, __ERR,0x1b)
  #define wrv_falcon_furia_sesto_usr_diag_mode(wr_val)                                    falcon_furia_sesto_wrbl_uc_var(pa, 0x1b,wr_val)
  #define rdv_falcon_furia_sesto_usr_main_tap_est()                                       falcon_furia_sesto_rdwls_uc_var(pa, __ERR,0x1c)
  #define wrv_falcon_furia_sesto_usr_main_tap_est(wr_val)                                 falcon_furia_sesto_wrwls_uc_var(pa, 0x1c,wr_val)

  /* RAM access functions for core_var_struct variables */
  #define rdcv_falcon_furia_sesto_config_word()                                           falcon_furia_sesto_rdwc_uc_var(pa, __ERR,0x0)
  #define wrcv_falcon_furia_sesto_config_word(wr_val)                                     falcon_furia_sesto_wrwc_uc_var(pa, 0x0,wr_val)
  #define rdcv_falcon_furia_sesto_temp_frc_val()                                          falcon_furia_sesto_rdwc_uc_var(pa, __ERR,0x2)
  #define wrcv_falcon_furia_sesto_temp_frc_val(wr_val)                                    falcon_furia_sesto_wrwc_uc_var(pa, 0x2,wr_val)
  #define rdcv_falcon_furia_sesto_common_ucode_version()                                  falcon_furia_sesto_rdwc_uc_var(pa, __ERR,0x4)
  #define wrcv_falcon_furia_sesto_common_ucode_version(wr_val)                            falcon_furia_sesto_wrwc_uc_var(pa, 0x4,wr_val)
  #define rdcv_falcon_furia_sesto_avg_tmon_reg13bit()                                     falcon_furia_sesto_rdwc_uc_var(pa, __ERR,0x6)
  #define wrcv_falcon_furia_sesto_avg_tmon_reg13bit(wr_val)                               falcon_furia_sesto_wrwc_uc_var(pa, 0x6,wr_val)
  #define rdcv_falcon_furia_sesto_trace_mem_rd_idx()                                      falcon_furia_sesto_rdwc_uc_var(pa, __ERR,0x8)
  #define wrcv_falcon_furia_sesto_trace_mem_rd_idx(wr_val)                                falcon_furia_sesto_wrwc_uc_var(pa, 0x8,wr_val)
  #define rdcv_falcon_furia_sesto_trace_mem_wr_idx()                                      falcon_furia_sesto_rdwc_uc_var(pa, __ERR,0xa)
  #define wrcv_falcon_furia_sesto_trace_mem_wr_idx(wr_val)                                falcon_furia_sesto_wrwc_uc_var(pa, 0xa,wr_val)
  #define rdcv_falcon_furia_sesto_temp_idx()                                              falcon_furia_sesto_rdbc_uc_var(pa, __ERR,0xc)
  #define wrcv_falcon_furia_sesto_temp_idx(wr_val)                                        falcon_furia_sesto_wrbc_uc_var(pa, 0xc,wr_val)
  #define rdcv_falcon_furia_sesto_usr_ctrl_core_event_log_level()                         falcon_furia_sesto_rdbc_uc_var(pa, __ERR,0xd)
  #define wrcv_falcon_furia_sesto_usr_ctrl_core_event_log_level(wr_val)                   falcon_furia_sesto_wrbc_uc_var(pa, 0xd,wr_val)
  #define rdcv_falcon_furia_sesto_common_ucode_minor_version()                            falcon_furia_sesto_rdbc_uc_var(pa, __ERR,0xe)
  #define wrcv_falcon_furia_sesto_common_ucode_minor_version(wr_val)                      falcon_furia_sesto_wrbc_uc_var(pa, 0xe,wr_val)
  #define rdcv_falcon_furia_sesto_afe_hardware_version()                                  falcon_furia_sesto_rdbc_uc_var(pa, __ERR,0xf)
  #define wrcv_falcon_furia_sesto_afe_hardware_version(wr_val)                            falcon_furia_sesto_wrbc_uc_var(pa, 0xf,wr_val)
  #define rdcv_falcon_furia_sesto_status_byte()                                           falcon_furia_sesto_rdbc_uc_var(pa, __ERR,0x10)
  #define wrcv_falcon_furia_sesto_status_byte(wr_val)                                     falcon_furia_sesto_wrbc_uc_var(pa, 0x10,wr_val)
  #define rdcv_falcon_furia_sesto_diag_max_time_control()                                 falcon_furia_sesto_rdbc_uc_var(pa, __ERR,0x11)
  #define wrcv_falcon_furia_sesto_diag_max_time_control(wr_val)                           falcon_furia_sesto_wrbc_uc_var(pa, 0x11,wr_val)
  #define rdcv_falcon_furia_sesto_diag_max_err_control()                                  falcon_furia_sesto_rdbc_uc_var(pa, __ERR,0x12)
  #define wrcv_falcon_furia_sesto_diag_max_err_control(wr_val)                            falcon_furia_sesto_wrbc_uc_var(pa, 0x12,wr_val)
  #define rdcv_falcon_furia_sesto_pad_temp()                                              falcon_furia_sesto_rdbc_uc_var(pa, __ERR,0x13)
  #define wrcv_falcon_furia_sesto_pad_temp(wr_val)                                        falcon_furia_sesto_wrbc_uc_var(pa, 0x13,wr_val)
  #define rdcv_falcon_furia_sesto_config_pll1_word()                                      falcon_furia_sesto_rdwc_uc_var(pa, __ERR,0x14)
  #define wrcv_falcon_furia_sesto_config_pll1_word(wr_val)                                falcon_furia_sesto_wrwc_uc_var(pa, 0x14,wr_val)

#endif
