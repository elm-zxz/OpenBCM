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

#ifndef __BCMX_WLAN_H__
#define __BCMX_WLAN_H__

#if defined(INCLUDE_L3)

#include <bcm/types.h>
#include <bcmx/bcmx.h>
#include <bcm/wlan.h>
#include <bcmx/multicast.h>
#include <bcmx/l3.h>
#include <bcmx/tunnel.h>

typedef bcm_wlan_port_t bcmx_wlan_port_t;

typedef bcm_wlan_client_t bcmx_wlan_client_t;

/* Initialize the WLAN port structure. */
extern void bcmx_wlan_port_t_init(
    bcmx_wlan_port_t *wlan_port);

/* Initialize the WLAN client structure. */
extern void bcmx_wlan_client_t_init(
    bcmx_wlan_client_t *wlan_client);

/* Initialize the WLAN subsystem. */
extern int bcmx_wlan_init(void);

/* Detach the WLAN software module. */
extern int bcmx_wlan_detach(void);

extern int bcmx_wlan_port_add(
    bcmx_wlan_port_t *info);

extern int bcmx_wlan_port_delete(
    bcm_gport_t wlan_port_id);

extern int bcmx_wlan_port_delete_all(void);

extern int bcmx_wlan_port_get(
    bcm_gport_t wlan_port_id, 
    bcmx_wlan_port_t *info);

extern int bcmx_wlan_client_add(
    bcmx_wlan_client_t *info);

extern int bcmx_wlan_client_delete(
    bcm_mac_t mac);

extern int bcmx_wlan_client_delete_all(void);

extern int bcmx_wlan_client_get(
    bcm_mac_t mac, 
    bcmx_wlan_client_t *info);

extern int bcmx_wlan_tunnel_initiator_create(
    bcmx_tunnel_initiator_t *info);

extern int bcmx_wlan_tunnel_initiator_destroy(
    bcm_gport_t wlan_tunnel_id);

extern int bcmx_wlan_tunnel_initiator_get(
    bcmx_tunnel_initiator_t *info);

#endif /* defined(INCLUDE_L3) */

#endif /* __BCMX_WLAN_H__ */
