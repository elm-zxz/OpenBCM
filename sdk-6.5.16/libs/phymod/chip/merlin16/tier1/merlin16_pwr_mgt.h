/***********************************************************************************
 ***********************************************************************************
 *                                                                                 *
 *  Revision    :     *
 *                                                                                 *
 *  Description :  Interface functions targeted to IP user                         *
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

/** @file merlin16_pwr_mgt.h
 * Power management functions provided to IP User
 */
#ifndef MERLIN16_API_PWR_MGT_H
#define MERLIN16_API_PWR_MGT_H

#include "merlin16_ipconfig.h"
#include "common/srds_api_enum.h"
#include "common/srds_api_err_code.h"
#include "merlin16_dependencies.h"

/*-----------------------*/
/*  IDDQ / Clkgate APIs  */
/*-----------------------*/
/** Core configuration for IDDQ.
 * Note: User also needs to configure all lanes through merlin16_lane_config_for_iddq()
 * before enabling IDDQ by asserting IDDQ pin.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t merlin16_core_config_for_iddq(srds_access_t *sa__);

/** Serdes Core Powerdown.
 * Along with merlin16_core_pwrdn(), all lanes powerdowns should also be issued using
 * merlin16_lane_pwrdn() to complete a Core Powerdown.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param mode based on enum #srds_core_pwrdn_mode_enum select from ON, CORE, DEEP power down modes
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t merlin16_core_pwrdn(srds_access_t *sa__, enum srds_core_pwrdn_mode_enum mode);

/**************************************************/
/* LANE Based APIs - Required to be used per Lane */
/**************************************************/

/*--------------------------------------------------------------*/
/*  IDDQ / Powerdown / Deep Powerdown / Isolate Pins  */
/*--------------------------------------------------------------*/
/** Lane configurations for IDDQ.
 * Note: User needs to configure all lanes through merlin16_lane_config_for_iddq() and also call merlin16_core_config_for_iddq()
 * before enabling IDDQ by asserting IDDQ pin.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t merlin16_lane_config_for_iddq(srds_access_t *sa__);

/** Serdes Lane Powerdown.
 * Powers down option available - TX only, RX only, complete LANE, complete lane DEEP, PWR_ON
 * Note: To wake up from lane DEEP powerdown, first call PWR_ON and then de-assert lane_dp_reset [wr_ln_dp_s_rstb(0x1)].
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param mode Enable/Disable lane powerdown based on #srds_core_pwrdn_mode_enum
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t merlin16_lane_pwrdn(srds_access_t *sa__, enum srds_core_pwrdn_mode_enum mode);

#endif
