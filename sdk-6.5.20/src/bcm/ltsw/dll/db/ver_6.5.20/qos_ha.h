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
#ifndef QOS_HA_H
#define QOS_HA_H

#include <shr/shr_ha.h>

typedef struct {
   /*! Used bitmap for map set in the table chunk. */
   uint64_t set_bmp;
   /*! This table chunk is full. */
   bool full;
   /*! This table chunk is allocated. */
   bool allocated;
   /*! Usage mode for this chunk. Each table chunk owns a unique mode. */
   int mode;
} qos_remark_table_chunk_t;

#define QOS_REMARK_TABLE_CHUNK_T_ID 0xb7a09b4f3d8327ed

#endif /* QOS_HA_H */