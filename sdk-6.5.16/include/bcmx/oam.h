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

#ifndef __BCMX_OAM_H__
#define __BCMX_OAM_H__

#include <bcm/types.h>
#include <bcmx/bcmx.h>
#include <bcm/oam.h>

typedef bcm_oam_group_info_t bcmx_oam_group_info_t;

typedef bcm_oam_endpoint_info_t bcmx_oam_endpoint_info_t;

/* Initialize an OAM group info structure */
extern void bcmx_oam_group_info_t_init(
    bcmx_oam_group_info_t *group_info);

/* Initialize an OAM endpoint info structure */
extern void bcmx_oam_endpoint_info_t_init(
    bcmx_oam_endpoint_info_t *endpoint_info);

/* Initialize the OAM subsystem */
extern int bcmx_oam_init(void);

/* Shut down the OAM subsystem */
extern int bcmx_oam_detach(void);

/* Create or replace an OAM group object */
extern int bcmx_oam_group_create(
    bcmx_oam_group_info_t *group_info);

/* Get an OAM group object */
extern int bcmx_oam_group_get(
    bcm_oam_group_t group, 
    bcmx_oam_group_info_t *group_info);

/* 
 * Destroy an OAM group object.  All OAM endpoints associated with the
 * group will also be destroyed.
 */
extern int bcmx_oam_group_destroy(
    bcm_oam_group_t group);

/* 
 * Destroy all OAM group objects.  All OAM endpoints will also be
 * destroyed.
 */
extern int bcmx_oam_group_destroy_all(void);

/* Create or replace an OAM endpoint object */
extern int bcmx_oam_endpoint_create(
    bcmx_oam_endpoint_info_t *endpoint_info);

/* Get an OAM endpoint object */
extern int bcmx_oam_endpoint_get(
    bcm_oam_endpoint_t endpoint, 
    bcmx_oam_endpoint_info_t *endpoint_info);

/* Destroy an OAM endpoint object */
extern int bcmx_oam_endpoint_destroy(
    bcm_oam_endpoint_t endpoint);

/* Destroy all OAM endpoint objects associated with a given OAM group */
extern int bcmx_oam_endpoint_destroy_all(
    bcm_oam_group_t group);

#endif /* __BCMX_OAM_H__ */
