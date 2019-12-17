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

#ifndef __BCMX_TUNNEL_H__
#define __BCMX_TUNNEL_H__

#if defined(INCLUDE_L3)

#include <bcm/types.h>
#include <bcmx/bcmx.h>
#include <bcmx/lplist.h>
#include <bcm/tunnel.h>

/* L3 Tunnel Terminator Structure. */
typedef struct bcmx_tunnel_terminator_s {
    uint32 flags;               /* Configuration flags. */
    bcm_vrf_t vrf;              /* Virtual router instance. */
    bcm_ip_t sip;               /* SIP for tunnel header match. */
    bcm_ip_t dip;               /* DIP for tunnel header match. */
    bcm_ip_t sip_mask;          /* Source IP mask. */
    bcm_ip_t dip_mask;          /* Destination IP mask. */
    bcm_ip6_t sip6;             /* SIP for tunnel header match (IPv6). */
    bcm_ip6_t dip6;             /* DIP for tunnel header match (IPv6). */
    bcm_ip6_t sip6_mask;        /* Source IP mask (IPv6). */
    bcm_ip6_t dip6_mask;        /* Destination IP mask (IPv6). */
    uint32 udp_dst_port;        /* UDP dst port for UDP packets. */
    uint32 udp_src_port;        /* UDP src port for UDP packets. */
    bcm_tunnel_type_t type;     /* Tunnel type. */
    bcm_vlan_t vlan;            /* The VLAN ID for IPMC lookup or WLAN tunnel. */
    bcmx_lplist_t ports;        /* Port list for this tunnel. */
    bcm_gport_t remote_port;    /* Remote termination. */
    bcm_gport_t tunnel_id;      /* Tunnel id. */
    int if_class;               /* L3 interface class this tunnel. */
} bcmx_tunnel_terminator_t;

/* L3 Tunnel Initiator Structure. */
typedef bcm_tunnel_initiator_t bcmx_tunnel_initiator_t;

/* L3 Tunnel Configuration Structure. */
typedef bcm_tunnel_config_t bcmx_tunnel_config_t;

/* 
 * Initialize a bcmx_tunnel_terminator_t structure and allocate port
 * list.
 */
extern void bcmx_tunnel_terminator_t_init(
    bcmx_tunnel_terminator_t *info);

/* Free memory allocated for bcmx_tunnel_terminator_t. */
extern void bcmx_tunnel_terminator_t_free(
    bcmx_tunnel_terminator_t *info);

/* Initialize a bcmx_tunnel_initiator_t structure. */
extern void bcmx_tunnel_initiator_t_init(
    bcmx_tunnel_initiator_t *tunnel);

/* Initialize a bcmx_tunnel_config_t structure. */
extern void bcmx_tunnel_config_t_init(
    bcmx_tunnel_config_t *tconfig);

/* Set the tunneling initiator parameters on an L3 interface. */
extern int bcmx_tunnel_initiator_set(
    bcmx_l3_intf_t *intf, 
    bcmx_tunnel_initiator_t *tunnel);

/* Delete the tunnel association for the given L3 interface. */
extern int bcmx_tunnel_initiator_clear(
    bcmx_l3_intf_t *intf);

/* Get the tunnel property for the given L3 interface. */
extern int bcmx_tunnel_initiator_get(
    bcmx_l3_intf_t *intf, 
    bcmx_tunnel_initiator_t *tunnel);

/* Add a tunnel terminator for DIP-SIP key. */
extern int bcmx_tunnel_terminator_add(
    bcmx_tunnel_terminator_t *info);

/* Delete a tunnel terminator for DIP-SIP key. */
extern int bcmx_tunnel_terminator_delete(
    bcmx_tunnel_terminator_t *info);

/* Update a tunnel terminator for DIP-SIP key. */
extern int bcmx_tunnel_terminator_update(
    bcmx_tunnel_terminator_t *info);

/* Get a tunnel terminator for DIP-SIP key. */
extern int bcmx_tunnel_terminator_get(
    bcmx_tunnel_terminator_t *info);

/* Set the valid payload VLANs for this WLAN tunnel. */
extern int bcmx_tunnel_terminator_vlan_set(
    bcm_gport_t tunnel, 
    bcm_vlan_vector_t vlan_vec);

/* Get the valid payload VLANs for this WLAN tunnel. */
extern int bcmx_tunnel_terminator_vlan_get(
    bcm_gport_t tunnel, 
    bcm_vlan_vector_t *vlan_vec);

/* Create a tunnel DSCP map instance. */
extern int bcmx_tunnel_dscp_map_create(
    uint32 flags, 
    int *dscp_map_id);

/* Destroy a tunnel DSCP map instance. */
extern int bcmx_tunnel_dscp_map_destroy(
    int dscp_map_id);

/* 
 * Get the { internal priority, color }-to-DSCP mapping in the specified
 * DSCP map.
 */
extern int bcmx_tunnel_dscp_map_get(
    int dscp_map_id, 
    bcm_tunnel_dscp_map_t *dscp_map);

/* 
 * Set the { internal priority, color }-to-DSCP mapping in the specified
 * DSCP map.
 */
extern int bcmx_tunnel_dscp_map_set(
    int dscp_map_id, 
    bcm_tunnel_dscp_map_t *dscp_map);

/* Set port egress { internal priority, color }-to-DSCP mapping. */
extern int bcmx_tunnel_dscp_map_port_set(
    bcmx_lport_t port, 
    bcm_tunnel_dscp_map_t *dscp_map);

/* Get port egress { internal priority, color }-to-DSCP mapping. */
extern int bcmx_tunnel_dscp_map_port_get(
    bcmx_lport_t port, 
    bcm_tunnel_dscp_map_t *dscp_map);

/* Set or get the global chip tunneling configuration. */
extern int bcmx_tunnel_config_get(
    bcmx_tunnel_config_t *tconfig);

/* Set or get the global chip tunneling configuration. */
extern int bcmx_tunnel_config_set(
    bcmx_tunnel_config_t *tconfig);

#endif /* defined(INCLUDE_L3) */

#endif /* __BCMX_TUNNEL_H__ */
