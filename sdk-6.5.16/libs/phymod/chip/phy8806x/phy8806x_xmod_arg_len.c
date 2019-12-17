/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 *
 * File:       phy8806x_xmod_arg_len.c
 */

#include "phy8806x_xmod_api.h"

const xmod_api_length_t xmod_core_cmds_arg_len_tbl[XMOD_CORE_CMDS_COUNT] = {
/* XMOD_CORE_IDENTIFY                0x00 */   { XMOD_CORE_IDENTIFY_IN_LEN,                XMOD_CORE_IDENTIFY_OUT_LEN },
/* NA                                0x01 */   { 0,                                        0 },
/* XMOD_CORE_INFO_GET                0x02 */   { XMOD_CORE_INFO_GET_IN_LEN,                XMOD_CORE_INFO_GET_OUT_LEN },
/* NA                                0x03 */   { 0,                                        0 },
/* XMOD_CORE_LANE_MAP_GET            0x04 */   { XMOD_CORE_LANE_MAP_GET_IN_LEN,            XMOD_CORE_LANE_MAP_GET_OUT_LEN },
/* XMOD_CORE_LANE_MAP_SET            0x05 */   { XMOD_CORE_LANE_MAP_SET_IN_LEN,            XMOD_CORE_LANE_MAP_SET_OUT_LEN },
/* XMOD_CORE_RESET_GET               0x06 */   { XMOD_CORE_RESET_GET_IN_LEN,               XMOD_CORE_RESET_GET_OUT_LEN },
/* XMOD_CORE_RESET_SET               0x07 */   { XMOD_CORE_RESET_SET_IN_LEN,               XMOD_CORE_RESET_SET_OUT_LEN },
/* XMOD_CORE_FIRMWARE_INFO_GET       0x08 */   { XMOD_CORE_FIRMWARE_INFO_GET_IN_LEN,       XMOD_CORE_FIRMWARE_INFO_GET_OUT_LEN },
/* NA                                0x09 */   { 0,                                        0 },
/* XMOD_PHY_FIRMWARE_CORE_CONFIG_GET 0x0a */   { XMOD_PHY_FIRMWARE_CORE_CONFIG_GET_IN_LEN, XMOD_PHY_FIRMWARE_CORE_CONFIG_GET_OUT_LEN },
/* XMOD_PHY_FIRMWARE_CORE_CONFIG_SET 0x0b */   { XMOD_PHY_FIRMWARE_CORE_CONFIG_SET_IN_LEN, XMOD_PHY_FIRMWARE_CORE_CONFIG_SET_OUT_LEN },
/* NA                                0x0c */   { 0,                                        0 },
/* XMOD_CORE_INIT                    0x0d */   { XMOD_CORE_INIT_IN_LEN,                    XMOD_CORE_INIT_OUT_LEN },
/* NA                                0x0e */   { 0,                                        0 },
/* XMOD_CORE_PLL_SEQUENCER_RESTART   0x0f */   { XMOD_CORE_PLL_SEQUENCER_RESTART_IN_LEN,   XMOD_CORE_PLL_SEQUENCER_RESTART_OUT_LEN },
/* XMOD_CORE_WAIT_EVENT              0x10 */   { XMOD_CORE_WAIT_EVENT_IN_LEN,              XMOD_CORE_WAIT_EVENT_OUT_LEN },
/* NA                                0x11 */   { 0,                                        0 },
/* XMOD_DEV_REG_GET                  0x12 */   { XMOD_DEV_REG_GET_IN_LEN,                  XMOD_DEV_REG_GET_OUT_LEN },
/* XMOD_DEV_REG_SET                  0x13 */   { XMOD_DEV_REG_SET_IN_LEN,                  XMOD_DEV_REG_SET_OUT_LEN },
/* XMOD_DEV_DEBUG_BUF_GET            0x14 */   { XMOD_DEV_DEBUG_BUF_GET_IN_LEN,            XMOD_DEV_DEBUG_BUF_GET_OUT_LEN },
/* NA                                0x15 */   { 0,                                        0 },
/* NA                                0x16 */   { 0,                                        0 },
/* XMOD_CMD_ACKNOWLEDGE              0x17 */   { XMOD_CMD_ACKNOWLEDGE_IN_LEN,              XMOD_CMD_ACKNOWLEDGE_OUT_LEN },
/* NA                                0x18 */   { 0,                                        0 },
/* XMOD_CMD_ABORT                    0x19 */   { XMOD_CMD_ABORT_IN_LEN,                    XMOD_CMD_ABORT_OUT_LEN },
/* NA                                0x1a */   { 0,                                        0 },
/* XMOD_DEV_DEBUG_CMD                0x1b */   { XMOD_DEV_DEBUG_CMD_IN_LEN,                XMOD_DEV_DEBUG_CMD_OUT_LEN},
/* NA                                0x1c */   { 0,                                        0 },
/* XMOD_DEV_CTR_INTERVAL_SET         0x1d */   { XMOD_DEV_CTR_INTERVAL_SET_IN_LEN,        XMOD_DEV_CTR_INTERVAL_SET_OUT_LEN },
/* XMOD_DEV_ETHER_DEBUG_CMD          0x1e */   { XMOD_DEV_DEBUG_ETHER_CMD_IN_LEN,          XMOD_DEV_DEBUG_ETHER_CMD_OUT_LEN},
/* NA                                0x1f */   { 0,                                        0 },
/* XMOD_DEV_I2C_GET                  0x20 */   { XMOD_DEV_I2C_GET_IN_LEN,                  XMOD_DEV_I2C_GET_OUT_LEN },
/* XMOD_DEV_I2C_SET                  0x21 */   { XMOD_DEV_I2C_SET_IN_LEN,                  XMOD_DEV_I2C_SET_OUT_LEN },
};

const xmod_api_length_t xmod_ethernet_cmds_arg_len_tbl[XMOD_ETHERNET_CMDS_COUNT] = {
/* XMOD_PHY_FIRMWARE_LANE_CONFIG_GET   0x00 */   { XMOD_PHY_FIRMWARE_LANE_CONFIG_GET_IN_LEN,   XMOD_PHY_FIRMWARE_LANE_CONFIG_GET_OUT_LEN },
/* XMOD_PHY_FIRMWARE_LANE_CONFIG_SET   0x01 */   { XMOD_PHY_FIRMWARE_LANE_CONFIG_SET_IN_LEN,   XMOD_PHY_FIRMWARE_LANE_CONFIG_SET_OUT_LEN },
/* NA                                  0x02 */   { 0,                                          0 },
/* XMOD_PHY_INIT                       0x03 */   { XMOD_PHY_INIT_IN_LEN,                       XMOD_PHY_INIT_OUT_LEN },
/* NA                                  0x04 */   { 0,                                          0 },
/* XMOD_PHY_RX_RESTART                 0x05 */   { XMOD_PHY_RX_RESTART_IN_LEN,                 XMOD_PHY_RX_RESTART_OUT_LEN },
/* XMOD_PHY_POLARITY_GET               0x06 */   { XMOD_PHY_POLARITY_GET_IN_LEN,               XMOD_PHY_POLARITY_GET_OUT_LEN },
/* XMOD_PHY_POLARITY_SET               0x07 */   { XMOD_PHY_POLARITY_SET_IN_LEN,               XMOD_PHY_POLARITY_SET_OUT_LEN },
/* XMOD_PHY_TX_GET                     0x08 */   { XMOD_PHY_TX_GET_IN_LEN,                     XMOD_PHY_TX_GET_OUT_LEN },
/* XMOD_PHY_TX_SET                     0x09 */   { XMOD_PHY_TX_SET_IN_LEN,                     XMOD_PHY_TX_SET_OUT_LEN },
/* XMOD_PHY_MEDIA_TYPE_TX_GET          0x0a */   { XMOD_PHY_MEDIA_TYPE_TX_GET_IN_LEN,          XMOD_PHY_MEDIA_TYPE_TX_GET_OUT_LEN },
/* NA                                  0x0b */   { 0,                                          0 },
/* XMOD_PHY_TX_OVERRIDE_GET            0x0c */   { XMOD_PHY_TX_OVERRIDE_GET_IN_LEN,            XMOD_PHY_TX_OVERRIDE_GET_OUT_LEN },
/* XMOD_PHY_TX_OVERRIDE_SET            0x0d */   { XMOD_PHY_TX_OVERRIDE_SET_IN_LEN,            XMOD_PHY_TX_OVERRIDE_SET_OUT_LEN },
/* NA                                  0x0e */   { 0,                                          0 },
/* NA                                  0x0f */   { 0,                                          0 },
/* XMOD_PHY_RX_GET                     0x10 */   { XMOD_PHY_RX_GET_IN_LEN,                     XMOD_PHY_RX_GET_OUT_LEN },
/* XMOD_PHY_RX_SET                     0x11 */   { XMOD_PHY_RX_SET_IN_LEN,                     XMOD_PHY_RX_SET_OUT_LEN },
/* XMOD_PHY_RESET_GET                  0x12 */   { XMOD_PHY_RESET_GET_IN_LEN,                  XMOD_PHY_RESET_GET_OUT_LEN },
/* XMOD_PHY_RESET_SET                  0x13 */   { XMOD_PHY_RESET_SET_IN_LEN,                  XMOD_PHY_RESET_SET_OUT_LEN },
/* XMOD_PHY_POWER_GET                  0x14 */   { XMOD_PHY_POWER_GET_IN_LEN,                  XMOD_PHY_POWER_GET_OUT_LEN },
/* XMOD_PHY_POWER_SET                  0x15 */   { XMOD_PHY_POWER_SET_IN_LEN,                  XMOD_PHY_POWER_SET_OUT_LEN },
/* XMOD_PHY_TX_LANE_CONTROL_GET        0x16 */   { XMOD_PHY_TX_LANE_CONTROL_GET_IN_LEN,        XMOD_PHY_TX_LANE_CONTROL_GET_OUT_LEN },
/* XMOD_PHY_TX_LANE_CONTROL_SET        0x17 */   { XMOD_PHY_TX_LANE_CONTROL_SET_IN_LEN,        XMOD_PHY_TX_LANE_CONTROL_SET_OUT_LEN },
/* XMOD_PHY_RX_LANE_CONTROL_GET        0x18 */   { XMOD_PHY_RX_LANE_CONTROL_GET_IN_LEN,        XMOD_PHY_RX_LANE_CONTROL_GET_OUT_LEN },
/* XMOD_PHY_RX_LANE_CONTROL_SET        0x19 */   { XMOD_PHY_RX_LANE_CONTROL_SET_IN_LEN,        XMOD_PHY_RX_LANE_CONTROL_SET_OUT_LEN },
/* XMOD_PHY_FEC_ENABLE_GET             0x1a */   { XMOD_PHY_FEC_ENABLE_GET_IN_LEN,             XMOD_PHY_FEC_ENABLE_GET_OUT_LEN },
/* XMOD_PHY_FEC_ENABLE_SET             0x1b */   { XMOD_PHY_FEC_ENABLE_SET_IN_LEN,             XMOD_PHY_FEC_ENABLE_SET_OUT_LEN },
/* XMOD_PHY_INTERFACE_CONFIG_GET       0x1c */   { XMOD_PHY_INTERFACE_CONFIG_GET_IN_LEN,       XMOD_PHY_INTERFACE_CONFIG_GET_OUT_LEN },
/* XMOD_PHY_INTERFACE_CONFIG_SET       0x1d */   { XMOD_PHY_INTERFACE_CONFIG_SET_IN_LEN,       XMOD_PHY_INTERFACE_CONFIG_SET_OUT_LEN },
/* XMOD_PHY_CL72_GET                   0x1e */   { XMOD_PHY_CL72_GET_IN_LEN,                   XMOD_PHY_CL72_GET_OUT_LEN },
/* XMOD_PHY_CL72_SET                   0x1f */   { XMOD_PHY_CL72_SET_IN_LEN,                   XMOD_PHY_CL72_SET_OUT_LEN },
/* XMOD_PHY_CL72_STATUS_GET            0x20 */   { XMOD_PHY_CL72_STATUS_GET_IN_LEN,            XMOD_PHY_CL72_STATUS_GET_OUT_LEN },
/* NA                                  0x21 */   { 0,                                          0 },
/* XMOD_PHY_AUTONEG_ABILITY_GET        0x22 */   { XMOD_PHY_AUTONEG_ABILITY_GET_IN_LEN,        XMOD_PHY_AUTONEG_ABILITY_GET_OUT_LEN },
/* XMOD_PHY_AUTONEG_ABILITY_SET        0x23 */   { XMOD_PHY_AUTONEG_ABILITY_SET_IN_LEN,        XMOD_PHY_AUTONEG_ABILITY_SET_OUT_LEN },
/* XMOD_PHY_AUTONEG_REMOTE_ABILITY_GET 0x24 */   { XMOD_PHY_AUTONEG_REMOTE_ABILITY_GET_IN_LEN, XMOD_PHY_AUTONEG_REMOTE_ABILITY_GET_OUT_LEN },
/* NA                                  0x25 */   { 0,                                          0 },
/* XMOD_PHY_AUTONEG_GET                0x26 */   { XMOD_PHY_AUTONEG_GET_IN_LEN,                XMOD_PHY_AUTONEG_GET_OUT_LEN },
/* XMOD_PHY_AUTONEG_SET                0x27 */   { XMOD_PHY_AUTONEG_SET_IN_LEN,                XMOD_PHY_AUTONEG_SET_OUT_LEN },
/* XMOD_PHY_AUTONEG_STATUS_GET         0x28 */   { XMOD_PHY_AUTONEG_STATUS_GET_IN_LEN,         XMOD_PHY_AUTONEG_STATUS_GET_OUT_LEN },
/* NA                                  0x29 */   { 0,                                          0 },
/* XMOD_PHY_LOOPBACK_GET               0x2a */   { XMOD_PHY_LOOPBACK_GET_IN_LEN,               XMOD_PHY_LOOPBACK_GET_OUT_LEN },
/* XMOD_PHY_LOOPBACK_SET               0x2b */   { XMOD_PHY_LOOPBACK_SET_IN_LEN,               XMOD_PHY_LOOPBACK_SET_OUT_LEN },
/* XMOD_PHY_RX_PMD_LOCKED_GET          0x2c */   { XMOD_PHY_RX_PMD_LOCKED_GET_IN_LEN,          XMOD_PHY_RX_PMD_LOCKED_GET_OUT_LEN },
/* NA                                  0x2d */   { 0,                                          0 },
/* XMOD_PHY_LINK_STATUS_GET            0x2e */   { XMOD_PHY_LINK_STATUS_GET_IN_LEN,            XMOD_PHY_LINK_STATUS_GET_OUT_LEN },
/* NA                                  0x2f */   { 0,                                          0 },
/* XMOD_PHY_STATUS_DUMP                0x30 */   { XMOD_PHY_STATUS_DUMP_IN_LEN,                XMOD_PHY_STATUS_DUMP_OUT_LEN },
/* NA                                  0x31 */   { 0,                                          0 },
/* XMOD_PHY_PCS_USERSPEED_GET          0x32 */   { XMOD_PHY_PCS_USERSPEED_GET_IN_LEN,          XMOD_PHY_PCS_USERSPEED_GET_OUT_LEN },
/* XMOD_PHY_PCS_USERSPEED_SET          0x33 */   { XMOD_PHY_PCS_USERSPEED_SET_IN_LEN,          XMOD_PHY_PCS_USERSPEED_SET_OUT_LEN },
/* NA                                  0x34 */   { 0,                                          0 },
/* XMOD_PORT_INIT                      0x35 */   { XMOD_PORT_INIT_IN_LEN,                      XMOD_PORT_INIT_OUT_LEN },
/* NA                                  0x36 */   { 0,                                          0 },
/* XMOD_PHY_AN_TRY_ENABLE              0x37 */   { XMOD_PHY_AN_TRY_ENABLE_IN_LEN,              XMOD_PHY_AN_TRY_ENABLE_OUT_LEN },
/* NA                                  0x38 */   { 0,                                          0 },
/* XMOD_PE_INIT                        0x39 */   { XMOD_PE_INIT_IN_LEN,                        XMOD_PE_INIT_OUT_LEN },
/* XMOD_PE_STATUS_GET                  0x3a */   { XMOD_PE_STATUS_GET_IN_LEN,                  XMOD_PE_STATUS_GET_OUT_LEN },
/* NA                                  0x3b */   { 0,                                          0 },
/* XMOD_PE_PORT_STATS_GET              0x3c */   { XMOD_PE_PORT_STATS_GET_IN_LEN,              XMOD_PE_PORT_STATS_GET_OUT_LEN },
/* NA                                  0x3d */   { 0,                                          0 },
/* NA                                  0x3e */   { 0,                                          0 },
/* XMOD_PE_PCID_SET                    0x3f */   { XMOD_PE_PCID_SET_IN_LEN,                    XMOD_PE_PCID_SET_OUT_LEN },
/* XMOD_PE_FW_VER_GET                  0x40 */   { XMOD_PE_FW_VER_GET_IN_LEN,                  XMOD_PE_FW_VER_GET_OUT_LEN },
/* NA                                  0x41 */   { 0,                                          0 },
/* XMOD_PORT_ENABLE_GET                0x42 */   { 0,                                          XMOD_PORT_ENABLE_GET_OUT_LEN },
/* XMOD_PORT_ENABLE_SET                0x43 */   { XMOD_PORT_ENABLE_SET_IN_LEN,                0 },
/* XMOD_PHY_FORCED_SPEED_LINE_SIDE_GET 0x44 */   { XMOD_PHY_FORCED_SPEED_LINE_SIDE_GET_IN_LEN, XMOD_PHY_FORCED_SPEED_LINE_SIDE_GET_OUT_LEN },
/* XMOD_PHY_FORCED_SPEED_LINE_SIDE_SET 0x45 */   { XMOD_PHY_FORCED_SPEED_LINE_SIDE_SET_IN_LEN, XMOD_PHY_FORCED_SPEED_LINE_SIDE_SET_OUT_LEN },
/* XMOD_PHY_FLOW_CONTROL_MODE_GET      0x46 */   { XMOD_PHY_FLOW_CONTROL_MODE_GET_IN_LEN,      XMOD_PHY_FLOW_CONTROL_MODE_GET_OUT_LEN },
/* XMOD_PHY_FLOW_CONTROL_MODE_SET      0x47 */   { XMOD_PHY_FLOW_CONTROL_MODE_SET_IN_LEN,      XMOD_PHY_FLOW_CONTROL_MODE_SET_OUT_LEN },
/* XMOD_PHY_PSM_COS_BMP_GET            0x48 */   { XMOD_PHY_PSM_COS_BMP_GET_IN_LEN,            XMOD_PHY_PSM_COS_BMP_GET_OUT_LEN },
/* XMOD_PHY_PSM_COS_BMP_SET            0x49 */   { XMOD_PHY_PSM_COS_BMP_SET_IN_LEN,            XMOD_PHY_PSM_COS_BMP_SET_OUT_LEN },
/* XMOD_PHY_AUTONEG_LINE_SIDE_GET      0x4a */   { XMOD_PHY_AUTONEG_LINE_SIDE_GET_IN_LEN,      XMOD_PHY_AUTONEG_LINE_SIDE_GET_OUT_LEN },
/* XMOD_PHY_AUTONEG_LINE_SIDE_SET      0x4b */   { XMOD_PHY_AUTONEG_LINE_SIDE_SET_IN_LEN,      XMOD_PHY_AUTONEG_LINE_SIDE_SET_OUT_LEN },
/* NA                                  0x4c */   { 0,                                          0 },
/* XMOD_PHY_RESET_INTF                 0x4d */   { XMOD_PHY_RESET_INTF_IN_LEN,                 XMOD_PHY_RESET_INTF_OUT_LEN },
/* XMOD_PHY_FW_LANE_CFG_GET            0x4e */   { XMOD_PHY_FW_LANE_CFG_GET_IN_LEN,            XMOD_PHY_FW_LANE_CFG_GET_OUT_LEN },
/* XMOD_PHY_FW_LANE_CFG_SET            0x4f */   { XMOD_PHY_FW_LANE_CFG_SET_IN_LEN,            XMOD_PHY_FW_LANE_CFG_SET_OUT_LEN },
};

const xmod_api_length_t xmod_fc_cmds_arg_len_tbl[XMOD_FC_CMDS_COUNT] = {
/* XMOD_BFCMAP_PORT_CONFIG_GET                0x00 */   { XMOD_BFCMAP_PORT_CONFIG_GET_IN_LEN,                XMOD_BFCMAP_PORT_CONFIG_GET_OUT_LEN },
/* XMOD_BFCMAP_PORT_CONFIG_SET                0x01 */   { XMOD_BFCMAP_PORT_CONFIG_SET_IN_LEN,                XMOD_BFCMAP_PORT_CONFIG_SET_OUT_LEN },
/* NA                                         0x02 */   { 0,                                                 0 },
/* XMOD_BFCMAP_PORT_CMD_SET                   0x03 */   { XMOD_BFCMAP_PORT_CMD_SET_IN_LEN,                   XMOD_BFCMAP_PORT_CMD_SET_OUT_LEN },
/* NA                                         0x04 */   { 0,                                                 0 },
/* XMOD_BFCMAP_PORT_SPEED_SET                 0x05 */   { XMOD_BFCMAP_PORT_SPEED_SET_IN_LEN,                 XMOD_BFCMAP_PORT_SPEED_SET_OUT_LEN },
/* XMOD_BFCMAP_PORT_LINK_FAULT_TRIGGER_RC_GET 0x06 */   { XMOD_BFCMAP_PORT_LINK_FAULT_TRIGGER_RC_GET_IN_LEN, XMOD_BFCMAP_PORT_LINK_FAULT_TRIGGER_RC_GET_OUT_LEN },
/* NA                                         0x07 */   { 0,                                                 0 },
/* XMOD_BFCMAP_PORT_DIAG_GET                  0x08 */   { XMOD_BFCMAP_PORT_DIAG_GET_IN_LEN,                  XMOD_BFCMAP_PORT_DIAG_GET_OUT_LEN },
/* NA                                         0x09 */   { 0,                                                 0 },
/* XMOD_BFCMAP_PORT_ABIL_GET                  0x0A */   { XMOD_BFCMAP_PORT_ABIL_GET_IN_LEN,                  XMOD_BFCMAP_PORT_ABIL_GET_OUT_LEN },
/* XMOD_BFCMAP_PORT_ABIL_SET                  0x0B */   { XMOD_BFCMAP_PORT_ABIL_SET_IN_LEN,                  XMOD_BFCMAP_PORT_ABIL_SET_OUT_LEN },
/* XMOD_BFCMAP_VLAN_MAP_GET                   0x0C */   { XMOD_BFCMAP_VLAN_MAP_GET_IN_LEN,                   XMOD_BFCMAP_VLAN_MAP_GET_OUT_LEN },
/* XMOD_BFCMAP_VLAN_MAP_ADD                   0x0D */   { XMOD_BFCMAP_VLAN_MAP_ADD_IN_LEN,                   XMOD_BFCMAP_VLAN_MAP_ADD_OUT_LEN },
/* NA                                         0x0E */   { 0,                                                 0 },
/* XMOD_BFCMAP_VLAN_MAP_DELETE                0x0F */   { XMOD_BFCMAP_VLAN_MAP_DELETE_IN_LEN,                XMOD_BFCMAP_VLAN_MAP_DELETE_OUT_LEN },
/* NA                                         0x10 */   { 0,                                                 0 },
/* XMOD_BFCMAP_PORT_INIT                      0x11 */   { XMOD_BFCMAP_PORT_INIT_IN_LEN,                      XMOD_BFCMAP_PORT_INIT_OUT_LEN },
};

