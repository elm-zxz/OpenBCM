/**************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/ha_yml_parser.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef TELEMETRY_HA_H
#define TELEMETRY_HA_H

#include <shr/shr_ha.h>

#define BCMI_TELEMETRY_PORT_NAME_SIZE 10
#define BCMI_TELEMETRY_BITWID 32
#define BCMI_TELEMETRY_MAX_OBJECTS 256
#define BCMI_TELEMETRY_HA_OBJ_BMP_SIZE (((BCMI_TELEMETRY_MAX_OBJECTS) + BCMI_TELEMETRY_BITWID - 1) / BCMI_TELEMETRY_BITWID)
#define BCMI_TELEMETRY_MAX_INSTANCES 1
#define BCMI_TELEMETRY_HA_INST_BMP_SIZE (((BCMI_TELEMETRY_MAX_INSTANCES) + BCMI_TELEMETRY_BITWID - 1) / BCMI_TELEMETRY_BITWID)
#define BCMI_TELEMETRY_OBJ_TYPE_SIZE 6

typedef struct {
   /*! Object ID bitmap array. */
   uint32_t w[BCMI_TELEMETRY_HA_OBJ_BMP_SIZE];
} bcmi_telemetry_obj_id_bmp_t;

#define BCMI_TELEMETRY_OBJ_ID_BMP_T_ID 0xba0f1b538bf83312

typedef struct {
   /*! Instance index bitmap array. */
   uint32_t w[BCMI_TELEMETRY_HA_INST_BMP_SIZE];
} bcmi_telemetry_inst_idx_bmp_t;

#define BCMI_TELEMETRY_INST_IDX_BMP_T_ID 0xfc70f788ef4b89fb

/*!
 * Object type values.
 */
typedef enum {
   BCMI_TELEMETRY_OBJ_TYPE_NONE = 0,
   BCMI_TELEMETRY_OBJ_TYPE_INTF_INGRESS = 1,
   BCMI_TELEMETRY_OBJ_TYPE_INTF_EGRESS = 2,
   BCMI_TELEMETRY_OBJ_TYPE_INTF_EGRESS_QUEUE = 3,
   BCMI_TELEMETRY_OBJ_TYPE_INTF_INGRESS_ERROR = 4,
   BCMI_TELEMETRY_OBJ_TYPE_METADATA = 5,
   BCMI_TELEMETRY_OBJ_TYPE_COUNT = 6
} bcmi_telemetry_obj_type_t;

typedef struct {
   /*! Type of stats need to be collected. */
   bcmi_telemetry_obj_type_t obj_type[BCMI_TELEMETRY_OBJ_TYPE_SIZE];
   /*! Component ID of the port. */
   uint32_t component_id;
   /*! Port to be used to collect statistics. */
   int gport;
   /*! Port name array size. */
   uint8_t port_name[BCMI_TELEMETRY_PORT_NAME_SIZE];
} bcmi_telemetry_config_t;

#define BCMI_TELEMETRY_CONFIG_T_ID 0xda6bfe23b4fc78e6

typedef struct {
   /*! Bitmap of configured object ids. */
   bcmi_telemetry_obj_id_bmp_t object_id_bmp;
   /*! Bitmap of configured instance indexes. */
   bcmi_telemetry_inst_idx_bmp_t instance_idx_bmp;
   /*! Instance ID to internal index mapping. */
   int instance_id_to_idx_map[BCMI_TELEMETRY_MAX_INSTANCES];
   /*! Number of configuration objects. */
   int config_count;
   /*! List of telemetry config objects. */
   bcmi_telemetry_config_t telemetry_config[BCMI_TELEMETRY_MAX_OBJECTS];
} bcmi_telemetry_ha_info_t;

#define BCMI_TELEMETRY_HA_INFO_T_ID 0xa509ff61e812a8ed

#endif /* TELEMETRY_HA_H */