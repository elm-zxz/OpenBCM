/*
 *         
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 *         
 *     
 * DO NOT EDIT THIS FILE!
 */

#ifndef _QTCE_DIAGNOSTICS_H__H_
#define _QTCE_DIAGNOSTICS_H__H_

#include <phymod/phymod_definitions.h>
/*Set\get slicer position*/
int qtce_phy_rx_slicer_position_set(const phymod_phy_access_t* phy, uint32_t flags, const phymod_slicer_position_t* position);
int qtce_phy_rx_slicer_position_get(const phymod_phy_access_t* phy, uint32_t flags, phymod_slicer_position_t* position);

/*Get slicer range limitation*/
int qtce_phy_rx_slicer_position_max_get(const phymod_phy_access_t* phy, uint32_t flags, const phymod_slicer_position_t* position_min, const phymod_slicer_position_t* position_max);

/*set\get PRBS configuration*/
int qtce_phy_prbs_config_set(const phymod_phy_access_t* phy, uint32_t flags , const phymod_prbs_t* prbs);
int qtce_phy_prbs_config_get(const phymod_phy_access_t* phy, uint32_t flags , phymod_prbs_t* prbs);

/*Set\get PRBS enable state*/
int qtce_phy_prbs_enable_set(const phymod_phy_access_t* phy, uint32_t flags , uint32_t enable);
int qtce_phy_prbs_enable_get(const phymod_phy_access_t* phy, uint32_t flags , uint32_t* enable);

/*Get PRBS Status*/
int qtce_phy_prbs_status_get(const phymod_phy_access_t* phy, uint32_t flags, phymod_prbs_status_t* prbs_status);

/*Set\get pattern state*/
int qtce_phy_pattern_config_set(const phymod_phy_access_t* phy, const phymod_pattern_t* pattern);
int qtce_phy_pattern_config_get(const phymod_phy_access_t* phy, phymod_pattern_t* pattern);

/*Set\get pattern state*/
int qtce_phy_pattern_enable_set(const phymod_phy_access_t* phy, uint32_t enable, const phymod_pattern_t* pattern);
int qtce_phy_pattern_enable_get(const phymod_phy_access_t* phy, uint32_t* enable);

/*Get core diagnostics information*/
int qtce_core_diagnostics_get(const phymod_core_access_t* core, phymod_core_diagnostics_t* diag);

/*Get phy diagnostics information*/
int qtce_phy_diagnostics_get(const phymod_phy_access_t* phy, phymod_phy_diagnostics_t* diag);

/*Get phy diagnostics information*/
int qtce_phy_pmd_info_dump(const phymod_phy_access_t* phy, const char* type);

/*Get phy diagnostics information*/
int qtce_phy_pcs_info_dump(const phymod_phy_access_t* phy, const char* type);

#endif /*_QTCE_DIAGNOSTICS_H_*/
