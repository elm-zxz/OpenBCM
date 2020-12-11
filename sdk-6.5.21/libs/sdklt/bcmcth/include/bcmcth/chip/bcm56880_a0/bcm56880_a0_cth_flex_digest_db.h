/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by npl-flex_digest from compiler output files
 * for device bcm56880_a0.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/npl-flex_digest
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCM56880_A0_CTH_FLEX_DIGEST_DB_H
#define BCM56880_A0_CTH_FLEX_DIGEST_DB_H

/*!
 * \brief The structure for key map.
 *
 * The structure for key map.
 */
typedef struct bcm56880_a0_cth_flex_digest_fkey_fmap_s {
    /*! l field. */
    int l_fld;
    /*! k field. */
    int k_fld;
    /*! k field mask. */
    int k_fld_mask;
    /*! hid. */
    int hid;
} bcm56880_a0_cth_flex_digest_fkey_fmap_t;

/*!
 * \brief The structure for match id.
 *
 * The structure for match id.
 */
typedef struct bcm56880_a0_cth_flex_digest_match_id_field_s {
    /*! zone max bit position */
    uint8_t  z_maxbit;
    /*! zone min bit position */
    uint8_t  z_minbit;
    /*! zone field mask */
    uint32_t z_mask;
    /*! zone field value */
    uint32_t z_value;
    /*! field max bit position */
    uint8_t  maxbit;
    /*! field min bit position */
    uint8_t  minbit;
    /*! field value */
    uint32_t value;
} bcm56880_a0_cth_flex_digest_match_id_field_t;

/*!
 * \brief The structure for packet node.
 *
 * The structure for packet node.
 */
typedef struct bcm56880_a0_cth_flex_digest_pkt_node_s {
    /*! node name */
    char *name;
    /*! node level in the tree */
    int   level;
    /*! corresponding field in match_id */
    bcm56880_a0_cth_flex_digest_match_id_field_t *phy_fld;
    /*! size of next node array */
    int   nn_size;
    /*! array of next nodes */
    struct bcm56880_a0_cth_flex_digest_pkt_node_s **nn_list;
} bcm56880_a0_cth_flex_digest_pkt_node_t;

/*!
 * \brief The structure for field map.
 *
 * The structure for field map.
 */
typedef struct bcm56880_a0_cth_flex_digest_fmap_s {
    /*! logical table field ID */
    bcmltd_fid_t fid;
    /*! the packet node */
    bcm56880_a0_cth_flex_digest_pkt_node_t *node;
} bcm56880_a0_cth_flex_digest_fmap_t;

/*!
 * \brief Get the key map.
 *
 * \param [in] unit number.
 * \param [out] key map.
 * \param [out] size.
 *
 * \retval SHR_E_NONE No errors.
 */
typedef int (*bcm56880_a0_cth_flex_digest_fkey_fmap_get_f) (int unit,
              bcm56880_a0_cth_flex_digest_fkey_fmap_t **kmap,
              int *size);

/*!
 * \brief Get the field map.
 *
 * \param [in] unit number.
 * \param [out] field map.
 * \param [out] size.
 * \param [out] root node.
 * \param [out] levels.
 *
 * \retval SHR_E_NONE No errors.
 */
typedef int (*bcm56880_a0_cth_flex_digest_fmap_get_f) (int unit,
              bcm56880_a0_cth_flex_digest_fmap_t **mmap,
              int *size,
              bcm56880_a0_cth_flex_digest_pkt_node_t **root_node,
              int *levels);

/*! Flex digest key map get functions. */
extern bcm56880_a0_cth_flex_digest_fkey_fmap_get_f bcm56880_a0_cth_flex_digest_key_map_get[];
/*! Flex digest key match id map get functions. */
extern bcm56880_a0_cth_flex_digest_fmap_get_f bcm56880_a0_cth_flex_digest_match_id_map_get[];
/*! Flex digest common driver get function. */
extern bcmcth_flex_digest_drv_t * bcm56880_a0_cth_flex_digest_drv_common_get(int unit);
/*! Flex digest variant field id descriptor. */
extern bcmcth_flex_digest_variant_field_id_t * bcm56880_a0_cth_flex_digest_variant_field_id_desc[];

#endif /* BCM56880_A0_CTH_FLEX_DIGEST_DB_H */