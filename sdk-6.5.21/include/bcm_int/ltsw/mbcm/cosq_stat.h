/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_MBCM_COSQ_STAT_H
#define BCMINT_LTSW_MBCM_COSQ_STAT_H

#include <bcm/types.h>
#include <bcm/cosq.h>

#include <sal/sal_types.h>

/*!
 * \brief Get MMU statistics on a per port per cosq basis
 *
 * \param [in] unit Unit Number.
 * \param [in] gport Gport Number.
 * \param [in] cosq COS queue.
 * \param [in] stat Statistic to be retrieved.
 * \param [in] sync_mode Sync mode.
 * \param [out] value Returned statistic value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*cosq_stat_get_f)(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    bcm_cosq_stat_t stat,
    int sync_mode,
    uint64_t *value);

/*!
 * \brief Set MMU statistics on a per port per cosq basis
 *
 * \param [in] unit Unit Number.
 * \param [in] gport Gport Number.
 * \param [in] cosq COS queue.
 * \param [in] stat Statistic to be set.
 * \param [in] value Statistic value to be set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*cosq_stat_set_f)(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    bcm_cosq_stat_t stat,
    uint64_t value);

/*!
 * \brief Clear the cosq stat per port.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Logic port id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*cosq_stat_clear_f)(
    int unit,
    int port);

/*!
 * \brief Get MMU debug counter match configuration for a certain MMU debug counter
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port number, used to deduce buffer ID.
 * \param [in] stat MMU debug counter whose match configuration to be retrieved.
 * \param [out] match Returned MMU debug counter match configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*cosq_stat_debug_stat_match_get_f)(
    int unit,
    bcm_port_t port,
    bcm_cosq_stat_t stat,
    bcm_cosq_debug_stat_match_t *match);

/*!
 * \brief Set MMU debug counter match configuration for a certain MMU debug counter
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port number, used to deduce buffer ID.
 * \param [in] stat MMU debug counter whose match configuration to be set.
 * \param [in] match MMU debug counter match configuration to be set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*cosq_stat_debug_stat_match_set_f)(
    int unit,
    bcm_port_t port,
    bcm_cosq_stat_t stat,
    bcm_cosq_debug_stat_match_t *match);

/*!
 * \brief Get multiple MMU statistics on a per port per cosq basis. The software cached count is synced with the hardware value.
 *
 * \param [in] unit Unit Number.
 * \param [in] gport GPORT ID.
 * \param [in] cosq COS queue.
 * \param [in] nstat Number of elements in stat array.
 * \param [in] stat_arr Array of statistics types.
 * \param [out] value_arr Array of collected statistics values.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*cosq_stat_sync_multi_get_f)(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    int nstat,
    bcm_cosq_stat_t *stat_arr,
    uint64_t *value_arr);

/*!
 * \brief Initialize the cosq_stat module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*cosq_stat_init_f)(int unit);

/*!
 * \brief Detach the cosq_stat module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*cosq_stat_detach_f)(int unit);

/*!
 * \brief Cosq_stat driver structure.
 */
typedef struct mbcm_ltsw_cosq_stat_drv_s {

    /*! Get MMU statistics on a per port per cosq basis */
    cosq_stat_get_f cosq_stat_get;

    /*! Set MMU statistics on a per port per cosq basis */
    cosq_stat_set_f cosq_stat_set;

    /*! Clear the cosq stat per port. */
    cosq_stat_clear_f cosq_stat_clear;

    /*! Get MMU debug counter match configuration for a certain MMU debug counter */
    cosq_stat_debug_stat_match_get_f cosq_stat_debug_stat_match_get;

    /*! Set MMU debug counter match configuration for a certain MMU debug counter */
    cosq_stat_debug_stat_match_set_f cosq_stat_debug_stat_match_set;

    /*! Get multiple MMU statistics on a per port per cosq basis. The software cached count is synced with the hardware value. */
    cosq_stat_sync_multi_get_f cosq_stat_sync_multi_get;

    /*! Initialize the cosq_stat module. */
    cosq_stat_init_f cosq_stat_init;

    /*! Detach the cosq_stat module. */
    cosq_stat_detach_f cosq_stat_detach;

} mbcm_ltsw_cosq_stat_drv_t;

/*!
 * \brief Set the COSQ_STAT driver of the device.
 *
 * \param [in] unit Unit Number.
 * \param [in] drv Cosq_stat driver to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_cosq_stat_drv_set(
    int unit,
    mbcm_ltsw_cosq_stat_drv_t *drv);

/*!
 * \brief Get MMU statistics on a per port per cosq basis
 *
 * \param [in] unit Unit Number.
 * \param [in] gport Gport Number.
 * \param [in] cosq COS queue.
 * \param [in] stat Statistic to be retrieved.
 * \param [in] sync_mode Sync mode.
 * \param [out] value Returned statistic value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_cosq_stat_get(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    bcm_cosq_stat_t stat,
    int sync_mode,
    uint64_t *value);

/*!
 * \brief Set MMU statistics on a per port per cosq basis
 *
 * \param [in] unit Unit Number.
 * \param [in] gport Gport Number.
 * \param [in] cosq COS queue.
 * \param [in] stat Statistic to be set.
 * \param [in] value Statistic value to be set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_cosq_stat_set(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    bcm_cosq_stat_t stat,
    uint64_t value);

/*!
 * \brief Clear the cosq stat per port.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Logic port id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_cosq_stat_clear(
    int unit,
    int port);

/*!
 * \brief Get MMU debug counter match configuration for a certain MMU debug counter
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port number, used to deduce buffer ID.
 * \param [in] stat MMU debug counter whose match configuration to be retrieved.
 * \param [out] match Returned MMU debug counter match configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_cosq_stat_debug_stat_match_get(
    int unit,
    bcm_port_t port,
    bcm_cosq_stat_t stat,
    bcm_cosq_debug_stat_match_t *match);

/*!
 * \brief Set MMU debug counter match configuration for a certain MMU debug counter
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port number, used to deduce buffer ID.
 * \param [in] stat MMU debug counter whose match configuration to be set.
 * \param [in] match MMU debug counter match configuration to be set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_cosq_stat_debug_stat_match_set(
    int unit,
    bcm_port_t port,
    bcm_cosq_stat_t stat,
    bcm_cosq_debug_stat_match_t *match);

/*!
 * \brief Get multiple MMU statistics on a per port per cosq basis. The software cached count is synced with the hardware value.
 *
 * \param [in] unit Unit Number.
 * \param [in] gport GPORT ID.
 * \param [in] cosq COS queue.
 * \param [in] nstat Number of elements in stat array.
 * \param [in] stat_arr Array of statistics types.
 * \param [out] value_arr Array of collected statistics values.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_cosq_stat_sync_multi_get(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    int nstat,
    bcm_cosq_stat_t *stat_arr,
    uint64_t *value_arr);

/*!
 * \brief Initialize the cosq_stat module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_cosq_stat_init(int unit);

/*!
 * \brief Detach the cosq_stat module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_cosq_stat_detach(int unit);

#endif /* BCMINT_LTSW_MBCM_COSQ_STAT_H */