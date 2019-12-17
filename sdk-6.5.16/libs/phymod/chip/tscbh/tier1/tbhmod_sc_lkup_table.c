/*----------------------------------------------------------------------
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 *
 * $Copyright: (c) 2014 Broadcom Corporation All Rights Reserved.$
 *  Broadcom Corporation
 *  Proprietary and Confidential information
 *  All rights reserved
 *  This source file is the property of Broadcom Corporation, and
 *  may not be copied or distributed in any isomorphic form without the
 *  prior written consent of Broadcom Corporation.
 *----------------------------------------------------------------------
 *  Description: define enumerators
 *----------------------------------------------------------------------*/
#ifndef _SDK_TBHMOD_
#ifndef _DV_TB_
 #define _SDK_TBHMOD_ 1
#endif
#endif

#ifdef _SDK_TBHMOD_
#include "tbhmod_enum_defines.h"
#include "tbhmod.h"
#include <phymod/phymod.h>
#endif

#ifndef _SDK_TBHMOD_
#define PHYMOD_ST tbhmod_dv_st
#endif

#include "tbhmod_sc_defines.h"
#include "tbhPCSRegEnums.h"

#include "tbhmod_sc_lkup_table.h"

const sc_pmd_entry_st tscbh_sc_pmd_entry[] = {
  /*`TBHMOD_SPD_10000_XFI: 0*/                    { OS_MODE_2, TBHMOD_PLL_MODE_DIV_132},
  /*`TBHMOD_SPD_25G_IEEE_KS1_CS1: 1*/             { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_25000_IEEE_KR1_CR1: 2*/           { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_40G_MLD_X4: 3*/                   { OS_MODE_2, TBHMOD_PLL_MODE_DIV_132},
  /*`TBHMOD_SPD_40G_MLD_CR4: 4*/                  { OS_MODE_2, TBHMOD_PLL_MODE_DIV_132},
  /*`TBHMOD_SPD_50G_IEEE_KR1_CR1: 5*/             { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_100G_MLD_X4: 6*/                  { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_100G_MLD_CR4: 7*/                 { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_100G_IEEE_KR2_CR2: 8*/            { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_200G_IEEE_FEC_544_2XN_KR4_CR4: 9*/{ OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_400G_IEEE_FEC_544_2XN_X8: 10*/    { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_CL73_20G: 11*/                    { OS_MODE_16p5, TBHMOD_PLL_MODE_DIV_132},
  /*`TBHMOD_SPD_CL73_25G: 12*/                    { OS_MODE_20p625, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_CL73_26G: 13*/                    { OS_MODE_21p25, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_20000_XFI: 14*/                   { OS_MODE_1, TBHMOD_PLL_MODE_DIV_132},
  /*`NULL ENTRY: 15*/                             {         0, 0},
  /*`TBHMOD_SPD_25G_BRCM_CR1: 16*/                { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_25G_BRCM_KR1:  17*/               { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_40G_MLD_X2: 18*/                  { OS_MODE_1, TBHMOD_PLL_MODE_DIV_132},
  /*`NULL ENRY: 19*/                              {         0, 0},
  /*`TBHMOD_SPD_50G_MLD_X2: 20*/                  { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_50G_MLD_FEC_528_X2: 21*/          { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`NULL ENTRY:22*/                              {         0, 0},
  /*`NULL ENTRY:23*/                              {         0, 0},
  /*`TBHMOD_SPD_50G_BRCM_FEC_544_CR2_KR2:24*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`NULL ENTRY:25*/                              {         0, 0},
  /*`TBHMOD_SPD_50G_BRCM_FEC_544_CR1_KR1:26*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_50G_BRCM_NOFEC_KR1_CR1:27*/       { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_50G_BRCM_FEC_528_CR1_KR1:28*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`NULL ENTRY:29*/                              {         0, 0},
  /*`TBHMOD_SPD_400G_BRCM_FEC_544_2XN_X8:30*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_200G_BRCM_NO_FEC_KR4_CR4:31*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_200G_BRCM_FEC_544_1XN_KR4_CR4:32*/{ OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_100G_BRCM_FEC_544_1XN_KR4_CR4:33*/{ OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`NULL ENTRY:34*/                              {         0, 0},
  /*`TBHMOD_SPD_100G_BRCM_FEC_528_KR2_CR2:35*/    { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_100G_BRCM_NOFEC_KR2_CR2:36*/      { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_100G_MLD_NO_FEC_X4:37*/           { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_50G_BRCM_FEC_272_KR1_CR1:38*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_100G_BRCM_FEC_272_KR2_CR2:39*/    { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_200G_BRCM_FEC_272_2XN_KR4_CR4:40*/{ OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_25000_XFI:41*/                    { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_25G_FEC_BASE_R_KR1_CR1:42*/       { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`TBHMOD_SPD_25G_FEC_RS_FEC_KR1_CR1:43*/       { OS_MODE_1, TBHMOD_PLL_MODE_DIV_165},
  /*`NULL ENTRY:44*/                              {         0, 0},
  /*`NULL ENTRY:45*/                              {         0, 0},
  /*`NULL ENTRY:46*/                              {         0, 0},
  /*`NULL ENTRY:47*/                              {         0, 0},
  /*`NULL ENTRY:48*/                              {         0, 0},
  /*`NULL ENTRY:49*/                              {         0, 0},
  /*`NULL ENTRY:50*/                              {         0, 0},
  /*`NULL ENTRY:51*/                              {         0, 0},
  /*`NULL ENTRY:52*/                              {         0, 0},
  /*`NULL ENTRY:53*/                              {         0, 0},
  /*`NULL ENTRY:54*/                              {         0, 0},
  /*`NULL ENTRY:55*/                              {         0, 0},
  /*`NULL ENTRY:56*/                              {         0, 0},
  /*`NULL ENTRY:57*/                              {         0, 0},
  /*`NULL ENTRY:58*/                              {         0, 0},
  /*`NULL ENTRY:59*/                              {         0, 0},
  /*`NULL ENTRY:60*/                              {         0, 0},
  /*`NULL ENTRY:61*/                              {         0, 0},
  /*`NULL ENTRY:62*/                              {         0, 0},
  /*`NULL ENTRY:63*/                              {         0, 0},
  /*`TBHMOD_SPD_10G_FEC_BASE_R_KR1_CR1:64*/       { OS_MODE_2, TBHMOD_PLL_MODE_DIV_132},
  /*`TBHMOD_SPD_20G_FEC_BASE_R_KR1_CR1:65*/       { OS_MODE_1, TBHMOD_PLL_MODE_DIV_132},
  /*`TBHMOD_SPD_40G_FEC_BASE_R_KR4_CR4:66*/       { OS_MODE_2, TBHMOD_PLL_MODE_DIV_132},
  /*`TBHMOD_SPD_150G_FEC_544_2XN_N3:67*/          { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_200G_BRCM_FEC_272_1XN_KR4_CR4:68*/{ OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_300G_FEC_544_2XN_N6:69*/          { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_350G_FEC_544_2XN_N7:70*/          { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`TBHMOD_SPD_400G_BRCM_FEC_272_2XN_X8:71*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_170},
  /*`NULL ENTRY:72*/                              {         0, 0},
  /*`TBHMOD_SPD_12P5G_BRCM_KR1:73*/               { OS_MODE_2, TBHMOD_PLL_MODE_DIV_160}
};

const sc_pmd_entry_st tscbh_sc_pmd_entry_312M_ref[] = {
  /*`TBHMOD_SPD_10000_XFI: 0*/                    { OS_MODE_2, TBHMOD_PLL_MODE_DIV_66},
  /*`TBHMOD_SPD_25G_IEEE_KS1_CS1: 1*/             { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_25000_IEEE_KR1_CR1: 2*/           { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_40G_MLD_X4: 3*/                   { OS_MODE_2, TBHMOD_PLL_MODE_DIV_66},
  /*`TBHMOD_SPD_40G_MLD_CR4: 4*/                  { OS_MODE_2, TBHMOD_PLL_MODE_DIV_66},
  /*`TBHMOD_SPD_50G_IEEE_KR1_CR1: 5*/             { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_100G_MLD_X4: 6*/                  { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_100G_MLD_CR4: 7*/                 { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_100G_IEEE_KR2_CR2: 8*/            { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_200G_IEEE_FEC_544_2XN_KR4_CR4: 9*/{ OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_400G_IEEE_FEC_544_2XN_X8: 10*/    { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_CL73_20G: 11*/                    { OS_MODE_16p5, TBHMOD_PLL_MODE_DIV_66},
  /*`TBHMOD_SPD_CL73_25G: 12*/                    { OS_MODE_20p625, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_CL73_26G: 13*/                    { OS_MODE_21p25, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_20000_XFI: 14*/                   { OS_MODE_1, TBHMOD_PLL_MODE_DIV_66},
  /*`NULL ENTRY: 15*/                             {         0, 0},
  /*`TBHMOD_SPD_25G_BRCM_CR1: 16*/                { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_25G_BRCM_KR1:  17*/               { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_40G_MLD_X2: 18*/                  { OS_MODE_1, TBHMOD_PLL_MODE_DIV_66},
  /*`NULL ENTRY: 19*/                             {         0, 0},
  /*`TBHMOD_SPD_50G_MLD_X2: 20*/                  { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_50G_MLD_FEC_528_X2: 21*/          { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`NULL ENTRY:22*/                              {         0, 0},
  /*`NULL ENTRY:23*/                              {         0, 0},
  /*`TBHMOD_SPD_50G_BRCM_FEC_544_CR2_KR2:24*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`NULL ENTRY:25*/                              {         0, 0},
  /*`TBHMOD_SPD_50G_BRCM_FEC_544_CR1_KR1:26*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_50G_BRCM_NOFEC_KR1_CR1:27*/       { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_50G_BRCM_FEC_528_CR1_KR1:28*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`NULL ENTRY:29*/                              {         0, 0},
  /*`TBHMOD_SPD_400G_BRCM_FEC_544_2XN_X8:30*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_200G_BRCM_NO_FEC_KR4_CR4:31*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_200G_BRCM_FEC_544_1XN_KR4_CR4:32*/{ OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_100G_BRCM_FEC_544_1XN_KR4_CR4:33*/{ OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`NULL ENTRY:34*/                              {         0, 0},
  /*`TBHMOD_SPD_100G_BRCM_FEC_528_KR2_CR2:35*/    { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_100G_BRCM_NOFEC_KR2_CR2:36*/      { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_100G_MLD_NO_FEC_X4:37*/           { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_50G_BRCM_FEC_272_KR1_CR1:38*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_100G_BRCM_FEC_272_KR2_CR2:39*/    { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_200G_BRCM_FEC_272_2XN_KR4_CR4:40*/{ OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_25000_XFI:41*/                    { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_25G_FEC_BASE_R_KR1_CR1:42*/       { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`TBHMOD_SPD_25G_FEC_RS_FEC_KR1_CR1:43*/       { OS_MODE_1, TBHMOD_PLL_MODE_DIV_82P5},
  /*`NULL ENTRY:44*/                              {         0, 0},
  /*`NULL ENTRY:45*/                              {         0, 0},
  /*`NULL ENTRY:46*/                              {         0, 0},
  /*`NULL ENTRY:47*/                              {         0, 0},
  /*`NULL ENTRY:48*/                              {         0, 0},
  /*`NULL ENTRY:49*/                              {         0, 0},
  /*`NULL ENTRY:50*/                              {         0, 0},
  /*`NULL ENTRY:51*/                              {         0, 0},
  /*`NULL ENTRY:52*/                              {         0, 0},
  /*`NULL ENTRY:53*/                              {         0, 0},
  /*`NULL ENTRY:54*/                              {         0, 0},
  /*`NULL ENTRY:55*/                              {         0, 0},
  /*`NULL ENTRY:56*/                              {         0, 0},
  /*`NULL ENTRY:57*/                              {         0, 0},
  /*`NULL ENTRY:58*/                              {         0, 0},
  /*`NULL ENTRY:59*/                              {         0, 0},
  /*`NULL ENTRY:60*/                              {         0, 0},
  /*`NULL ENTRY:61*/                              {         0, 0},
  /*`NULL ENTRY:62*/                              {         0, 0},
  /*`NULL ENTRY:63*/                              {         0, 0},
  /*`TBHMOD_SPD_10G_FEC_BASE_R_KR1_CR1:64*/       { OS_MODE_2, TBHMOD_PLL_MODE_DIV_66},
  /*`TBHMOD_SPD_20G_FEC_BASE_R_KR1_CR1:65*/       { OS_MODE_1, TBHMOD_PLL_MODE_DIV_66},
  /*`TBHMOD_SPD_40G_FEC_BASE_R_KR4_CR4:66*/       { OS_MODE_2, TBHMOD_PLL_MODE_DIV_66},
  /*`TBHMOD_SPD_150G_FEC_544_2XN_N3:67*/          { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_200G_BRCM_FEC_272_1XN_KR4_CR4:68*/{ OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_300G_FEC_544_2XN_N6:69*/          { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_350G_FEC_544_2XN_N7:70*/          { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`TBHMOD_SPD_400G_BRCM_FEC_272_2XN_X8:71*/     { OS_MODE_1, TBHMOD_PLL_MODE_DIV_85},
  /*`NULL ENTRY:72*/                              {         0, 0},
  /*`TBHMOD_SPD_12P5G_BRCM_KR1:73*/               { OS_MODE_2, TBHMOD_PLL_MODE_DIV_80}
};

/* the following speed id table, am_table and um table are based off
 * Speed_Control_3VCOs_Unified.xlsx, AM_Table_Unified.xlsx and UM_Table_Unified.xlsx. */

uint32_t spd_id_entry_26[TSCBH_SPEED_ID_TABLE_SIZE][TSCBH_SPEED_ID_ENTRY_SIZE] = {
    { 0x00020000, 0x00000000, 0x0050a400, 0x01842304, 0x00010804 },
    { 0x00040000, 0x00000000, 0x00105800, 0x01c02302, 0x00110804 },
    { 0x34352802, 0x0001f800, 0x00105804, 0x06002302, 0x0012940a },
    { 0x00040003, 0x1d400000, 0x0050b800, 0x01042a04, 0x00010810 },
    { 0x00040003, 0x1d400000, 0x0050b800, 0x01042a04, 0x00010810 },
    { 0x1d912905, 0x0009d003, 0x0010383d, 0x0180ea04, 0x0012a80a },
    { 0x34312886, 0x00406800, 0x0010583d, 0x01002a02, 0x0010a50a },
    { 0x34312886, 0x00406800, 0x0010583d, 0x01002a02, 0x0010a50a },
    { 0x1d912908, 0x0028c003, 0x0010383d, 0x0100ea04, 0x0011540a },
    { 0xb7113749, 0x004800c2, 0x0010393d, 0x0100ec04, 0x00395414 },
    { 0xb711374a, 0x00680042, 0x0010393d, 0x0100ec04, 0x0038aa14 },
    { 0x00000000, 0x00000000, 0x0050a000, 0x01600004, 0x00000000 },
    { 0x00000000, 0x00000000, 0x0050a000, 0x01700004, 0x00000000 },
    { 0x00000000, 0x00000000, 0x0050a000, 0x01500004, 0x00000000 },
    { 0x00020000, 0x00000000, 0x01504000, 0x01402308, 0x00110804 },
    { 0x00020000, 0x00000000, 0x01504000, 0x01402308, 0x00110804 },
    { 0x34352810, 0x0001f800, 0x00105804, 0x06002302, 0x0012940a },
    { 0x34352810, 0x0001f800, 0x00105804, 0x06002302, 0x0012940a },
    { 0x00000003, 0x1d280000, 0x01505800, 0x01002a08, 0x00121010 },
    { 0x00000003, 0x1d280000, 0x01505800, 0x01002a08, 0x00121010 },
    { 0x00000014, 0x24280000, 0x00105800, 0x01002a02, 0x00121010 },
    { 0x34312895, 0x0020f000, 0x0010583d, 0x01402a02, 0x00114a0a },
    { 0x00000000, 0x00000000, 0x00102000, 0x00000004, 0x00100000 },
    { 0x00000000, 0x00000000, 0x00102000, 0x00000004, 0x00100000 },
    { 0x1d912905, 0x0020f003, 0x0010583d, 0x01402a02, 0x0011540a },
    { 0x00000019, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00102000, 0x00000004, 0x00000000 },
    { 0x00000014, 0x24100000, 0x00103800, 0x0080ea04, 0x00121008 },
    { 0x34312895, 0x0009e000, 0x0010383d, 0x0180ea04, 0x0012940a },
    { 0x00000000, 0x00000000, 0x01100000, 0x00000020, 0x00000000 },
    { 0xb711374a, 0x00680042, 0x0010393d, 0x0100ec04, 0x0038aa14 },
    { 0x0000001f, 0x47480000, 0x00103800, 0x0100ea04, 0x00310810 },
    { 0xb7113509, 0x00484002, 0x0010393d, 0x0100ec04, 0x0038aa0a },
    { 0x1d912908, 0x00406003, 0x0010583d, 0x01002a02, 0x0010aa0a },
    { 0x00000022, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x34312886, 0x0028d000, 0x0010383d, 0x0100ea04, 0x00114a0a },
    { 0x00000024, 0x47280000, 0x00103800, 0x0100ea04, 0x00121010 },
    { 0x00000025, 0x0e580000, 0x00105800, 0x01002a02, 0x00114a14 },
    { 0x8ed128c5, 0x0008f001, 0x0010383d, 0x0180ea04, 0x00115405 },
    { 0x5b9128c8, 0x00287001, 0x0010383d, 0x0100ea04, 0x0010aa05 },
    { 0x5b913789, 0x00480071, 0x0010393d, 0x0100ec04, 0x0038aa0a },
    { 0x00000000, 0x00000000, 0x00105800, 0x01c02302, 0x00110804 },
    { 0x00040040, 0x00000000, 0x00105800, 0x01c02302, 0x00110804 },
    { 0x34312890, 0x0001f800, 0x00105804, 0x06002302, 0x0012940a },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x0050a000, 0x00000004, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00020040, 0x00000000, 0x0050a400, 0x01842304, 0x00010804 },
    { 0x00020040, 0x00000000, 0x01504000, 0x01402308, 0x00110804 },
    { 0x00040043, 0x1d400000, 0x0050b800, 0x01442a04, 0x00010810 },
    { 0xb711377d, 0x00880122, 0x0050393d, 0x0140cc03, 0x00380000 },
    { 0x5b9134c9, 0x00483001, 0x0010393d, 0x0100ec04, 0x00385505 },
    { 0xb711377e, 0x00a800c2, 0x0050393d, 0x0100cc03, 0x00380000 },
    { 0xb711377f, 0x00c800b2, 0x8030393d, 0x0100cc03, 0x00380000 },
    { 0x5b91378a, 0x00680031, 0x0010393d, 0x0100ec04, 0x0038550a },
    { 0xb711377c, 0x00600072, 0x0010593d, 0x01002c02, 0x0038aa14 },
    { 0x00020000, 0x00000000, 0x00108400, 0x01842301, 0x00010804 }
};

uint32_t spd_id_entry_25[TSCBH_SPEED_ID_TABLE_SIZE][TSCBH_SPEED_ID_ENTRY_SIZE] = {
    { 0x00020000, 0x00000000, 0x0050a400, 0x01842308, 0x00010804 },
    { 0x00040000, 0x00000000, 0x00105800, 0x01c02304, 0x00110804 },
    { 0x34352802, 0x0001f800, 0x00105804, 0x06002304, 0x0012940a },
    { 0x00040003, 0x1d400000, 0x0050b800, 0x01042a08, 0x00010810 },
    { 0x00040003, 0x1d400000, 0x0050b800, 0x01042a08, 0x00010810 },
    { 0x1d912905, 0x0009d003, 0x0010383d, 0x0180ea08, 0x0012a80a },
    { 0x34312886, 0x00406800, 0x0010583d, 0x01002a04, 0x0010a50a },
    { 0x34312886, 0x00406800, 0x0010583d, 0x01002a04, 0x0010a50a },
    { 0x1d912908, 0x0028c003, 0x0010383d, 0x0100ea08, 0x0011540a },
    { 0xb7113749, 0x004800c2, 0x0010393d, 0x0100ec08, 0x00395414 },
    { 0xb711374a, 0x00680042, 0x0010393d, 0x0100ec08, 0x0038aa14 },
    { 0x00000000, 0x00000000, 0x0050a000, 0x01600008, 0x00000000 },
    { 0x00000000, 0x00000000, 0x0050a000, 0x01700008, 0x00000000 },
    { 0x00000000, 0x00000000, 0x0050a000, 0x01500008, 0x00000000 },
    { 0x00020000, 0x00000000, 0x02504000, 0x01402310, 0x00110804 },
    { 0x00020000, 0x00000000, 0x02504000, 0x01402310, 0x00110804 },
    { 0x34352810, 0x0001f800, 0x00105804, 0x06002304, 0x0012940a },
    { 0x34352810, 0x0001f800, 0x00105804, 0x06002304, 0x0012940a },
    { 0x00000003, 0x1d280000, 0x02505800, 0x01002a10, 0x00121010 },
    { 0x00000003, 0x1d280000, 0x02505800, 0x01002a10, 0x00121010 },
    { 0x00000014, 0x24280000, 0x00105800, 0x01002a04, 0x00121010 },
    { 0x34312895, 0x0020f000, 0x0010583d, 0x01402a04, 0x00114a0a },
    { 0x00000000, 0x00000000, 0x00102000, 0x00000008, 0x00100000 },
    { 0x00000000, 0x00000000, 0x00102000, 0x00000008, 0x00100000 },
    { 0x1d912905, 0x0020f003, 0x0010583d, 0x01402a04, 0x0011540a },
    { 0x00000019, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00102000, 0x00000008, 0x00000000 },
    { 0x00000014, 0x24100000, 0x00103800, 0x0080ea08, 0x00121008 },
    { 0x34312895, 0x0009e000, 0x0010383d, 0x0180ea08, 0x0012940a },
    { 0x00000000, 0x00000000, 0x02100000, 0x00000040, 0x00000000 },
    { 0xb711374a, 0x00680042, 0x0010393d, 0x0100ec08, 0x0038aa14 },
    { 0x0000001f, 0x47480000, 0x00103800, 0x0100ea08, 0x00310810 },
    { 0xb7113509, 0x00484002, 0x0010393d, 0x0100ec08, 0x0038aa0a },
    { 0x1d912908, 0x00406003, 0x0010583d, 0x01002a04, 0x0010aa0a },
    { 0x00000022, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x34312886, 0x0028d000, 0x0010383d, 0x0100ea08, 0x00114a0a },
    { 0x00000024, 0x47280000, 0x00103800, 0x0100ea08, 0x00121010 },
    { 0x00000025, 0x0e580000, 0x00105800, 0x01002a04, 0x00114a14 },
    { 0x8ed128c5, 0x0008f001, 0x0010383d, 0x0180ea08, 0x00115405 },
    { 0x5b9128c8, 0x00287001, 0x0010383d, 0x0100ea08, 0x0010aa05 },
    { 0x5b913789, 0x00480071, 0x0010393d, 0x0100ec08, 0x0038aa0a },
    { 0x00000000, 0x00000000, 0x00105800, 0x01c02304, 0x00110804 },
    { 0x00040040, 0x00000000, 0x00105800, 0x01c02304, 0x00110804 },
    { 0x34312890, 0x0001f800, 0x00105804, 0x06002304, 0x0012940a },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x0050a000, 0x00000008, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00020040, 0x00000000, 0x0050a400, 0x01842308, 0x00010804 },
    { 0x00020040, 0x00000000, 0x02504000, 0x01402310, 0x00110804 },
    { 0x00040043, 0x1d400000, 0x0050b800, 0x01442a08, 0x00010810 },
    { 0xb711377d, 0x00880122, 0x0030393d, 0x0140cc02, 0x00380000 },
    { 0x5b9134c9, 0x00483001, 0x0010393d, 0x0100ec08, 0x00385505 },
    { 0xb711377e, 0x00a800c2, 0x0030393d, 0x0100cc02, 0x00380000 },
    { 0xb711377f, 0x00c800b2, 0x0050393d, 0x0100cc07, 0x00380000 },
    { 0x5b91378a, 0x00680031, 0x0010393d, 0x0100ec08, 0x0038550a },
    { 0xb711377c, 0x00600072, 0x0010593d, 0x01002c04, 0x0038aa14 },
    { 0x00020000, 0x00000000, 0x00108400, 0x01842302, 0x00010804 }
};

uint32_t spd_id_entry_20[TSCBH_SPEED_ID_TABLE_SIZE][TSCBH_SPEED_ID_ENTRY_SIZE] = {
    { 0x00020000, 0x00000000, 0x00108400, 0x01842302, 0x00010804 },
    { 0x00040000, 0x00000000, 0x00d03800, 0x01c02305, 0x00110804 },
    { 0x34352802, 0x0001f800, 0x00d03804, 0x06002305, 0x0012940a },
    { 0x00040003, 0x1d400000, 0x00109800, 0x01042a02, 0x00010810 },
    { 0x00040003, 0x1d400000, 0x00109800, 0x01042a02, 0x00010810 },
    { 0x1d912905, 0x0009d003, 0x0210183d, 0x0180ea0a, 0x0012a80a },
    { 0x34312886, 0x00406800, 0x00d0383d, 0x01002a05, 0x0010a50a },
    { 0x34312886, 0x00406800, 0x00d0383d, 0x01002a05, 0x0010a50a },
    { 0x1d912908, 0x0028c003, 0x0210183d, 0x0100ea0a, 0x0011540a },
    { 0xb7113749, 0x004800c2, 0x0210193d, 0x0100ec0a, 0x00395414 },
    { 0xb711374a, 0x00680042, 0x0210193d, 0x0100ec0a, 0x0038aa14 },
    { 0x00000000, 0x00000000, 0x00108000, 0x01600002, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00108000, 0x01700002, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00108000, 0x01500002, 0x00000000 },
    { 0x00020000, 0x00000000, 0x00104000, 0x01402304, 0x00110804 },
    { 0x00020000, 0x00000000, 0x00104000, 0x01402304, 0x00110804 },
    { 0x34352810, 0x0001f800, 0x00d03804, 0x06002305, 0x0012940a },
    { 0x34352810, 0x0001f800, 0x00d03804, 0x06002305, 0x0012940a },
    { 0x00000003, 0x1d280000, 0x00105800, 0x01002a04, 0x00121010 },
    { 0x00000003, 0x1d280000, 0x00105800, 0x01002a04, 0x00121010 },
    { 0x00000014, 0x24280000, 0x00d03800, 0x01002a05, 0x00121010 },
    { 0x34312895, 0x0020f000, 0x00d0383d, 0x01402a05, 0x00114a0a },
    { 0x00000000, 0x00000000, 0x02100000, 0x0000000a, 0x00100000 },
    { 0x00000000, 0x00000000, 0x02100000, 0x0000000a, 0x00100000 },
    { 0x1d912905, 0x0020f003, 0x00d0383d, 0x01402a05, 0x0011540a },
    { 0x00000019, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000014, 0x24100000, 0x02101800, 0x0080ea0a, 0x00121008 },
    { 0x34312895, 0x0009e000, 0x0210183d, 0x0180ea0a, 0x0012940a },
    { 0x00000000, 0x00000000, 0x02100000, 0x00000050, 0x00000000 },
    { 0xb711374a, 0x00680042, 0x0210193d, 0x0100ec0a, 0x0038aa14 },
    { 0x0000001f, 0x47480000, 0x02101800, 0x0100ea0a, 0x00310810 },
    { 0xb7113509, 0x00484002, 0x0210193d, 0x0100ec0a, 0x0038aa0a },
    { 0x1d912908, 0x00406003, 0x00d0383d, 0x01002a05, 0x0010aa0a },
    { 0x00000022, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x34312886, 0x0028d000, 0x0210183d, 0x0100ea0a, 0x00114a0a },
    { 0x00000024, 0x47280000, 0x02101800, 0x0100ea0a, 0x00121010 },
    { 0x00000025, 0x0e580000, 0x00d03800, 0x01002a05, 0x00114a14 },
    { 0x8ed128c5, 0x0008f001, 0x0210183d, 0x0180ea0a, 0x00115405 },
    { 0x5b9128c8, 0x00287001, 0x0210183d, 0x0100ea0a, 0x0010aa05 },
    { 0x5b913789, 0x00480071, 0x0210193d, 0x0100ec0a, 0x0038aa0a },
    { 0x00000000, 0x00000000, 0x00d03800, 0x01c02305, 0x00110804 },
    { 0x00040040, 0x00000000, 0x00d03800, 0x01c02305, 0x00110804 },
    { 0x34312890, 0x0001f800, 0x00d03804, 0x06002305, 0x0012940a },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00108000, 0x00000002, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x400c6000, 0x00000000, 0x00000000 },
    { 0x00020040, 0x00000000, 0x00108400, 0x01842302, 0x00010804 },
    { 0x00020040, 0x00000000, 0x00104000, 0x01402304, 0x00110804 },
    { 0x00040043, 0x1d400000, 0x00109800, 0x01442a02, 0x00010810 },
    { 0xb711377d, 0x00880122, 0x8010393d, 0x0140cc02, 0x00380000 },
    { 0x5b9134c9, 0x00483001, 0x0210193d, 0x0100ec0a, 0x00385505 },
    { 0xb711377e, 0x00a800c2, 0x8010393d, 0x0100cc02, 0x00380000 },
    { 0xb711377f, 0x00c800b2, 0xc210193d, 0x0100cc08, 0x00380000 },
    { 0x5b91378a, 0x00680031, 0x0210193d, 0x0100ec0a, 0x0038550a },
    { 0xb711377c, 0x00600072, 0x00d0393d, 0x01002c05, 0x0038aa14 },
    { 0x00020000, 0x00000000, 0x80306400, 0x01842302, 0x00010804 }
};

uint32_t am_table_entry[TSCBH_AM_TABLE_SIZE][TSCBH_AM_ENTRY_SIZE] = {
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x8c1006c8, 0x00420216, 0x00000014 },
    { 0x0000000f, 0x20002000, 0x00000010 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000009, 0x00223000, 0x00000014 },
    { 0x0000002a, 0x00425000, 0x00000050 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x0000002a, 0x00445000, 0x00000050 },
    { 0x00000023, 0x00226000, 0x00000050 },
    { 0x00000044, 0x00227000, 0x000000a0 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x8c1006c8, 0x00420216, 0x00000014 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x0000000f, 0x20003000, 0x00000010 },
    { 0x00000009, 0x00213000, 0x00000014 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000017, 0x20006000, 0x00000020 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x0000000f, 0x20005000, 0x00000010 },
    { 0x0000002f, 0x20005000, 0x00000050 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000007, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000 },
    { 0x00000023, 0x00226000, 0x00000050 },
    { 0x0000001b, 0x00226000, 0x0000003c },
    { 0x00000034, 0x00227000, 0x00000078 },
    { 0x0000003c, 0x00227000, 0x0000008c }
};

uint32_t um_table_entry[TSCBH_UM_TABLE_SIZE][TSCBH_UM_ENTRY_SIZE] = {
    { 0x33e6c4f0, 0x00000133 },
    { 0x009b65c5, 0x00000033 },
    { 0x003d79a2, 0x00000033 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 }
};

uint32_t speed_priority_mapping_table[TSCBH_SPEED_PRIORITY_MAPPING_TABLE_SIZE][TSCBH_SPEED_PRIORITY_MAPPING_ENTRY_SIZE] = {
    {0x1f809662, 0x48e11872, 0x71b60596, 0x930c4554, 0xf4110424, 0xffef4038, 0x00000000, 0x00000000, 0x00000000}
};

int tbhmod_get_mapped_speed(tbhmod_spd_intfc_type_t spd_intf, int *speed)
{
    *speed = -1;
    /* speeds covered in Forced-speed */
    if (spd_intf == TBHMOD_SPD_10000_XFI)                           *speed = 0;
    if (spd_intf == TBHMOD_SPD_10G_FEC_BASE_R_KR1_CR1)              *speed = 64;
    if (spd_intf == TBHMOD_SPD_20000_XFI)                           *speed = 14;
    if (spd_intf == TBHMOD_SPD_20G_FEC_BASE_R_KR1_CR1)              *speed = 65;
    if (spd_intf == TBHMOD_SPD_40G_FEC_BASE_R_KR4_CR4)              *speed = 66;
    if (spd_intf == TBHMOD_SPD_40G_MLD_X4)                          *speed = 3;
    if (spd_intf == TBHMOD_SPD_40G_MLD_X2)                          *speed = 18;
    if (spd_intf == TBHMOD_SPD_25000_XFI)                           *speed = 41;
    if (spd_intf == TBHMOD_SPD_25G_FEC_BASE_R_KR1_CR1)              *speed = 42;
    if (spd_intf == TBHMOD_SPD_25G_FEC_RS_FEC_KR1_CR1)              *speed = 43;
    if (spd_intf == TBHMOD_SPD_CL73_20G)                            *speed = 11;
    if (spd_intf == TBHMOD_SPD_CL73_25G)                            *speed = 12;
    if (spd_intf == TBHMOD_SPD_CL73_26G)                            *speed = 13;
    if (spd_intf == TBHMOD_SPD_50G_MLD_X2)                          *speed = 20;
    if (spd_intf == TBHMOD_SPD_50G_MLD_FEC_528_X2)                  *speed = 21;
    if (spd_intf == TBHMOD_SPD_50G_BRCM_FEC_544_CR2_KR2)            *speed = 24;
    if (spd_intf == TBHMOD_SPD_50G_BRCM_FEC_272_KR1_CR1)            *speed = 38;
    if (spd_intf == TBHMOD_SPD_50G_BRCM_FEC_528_CR1_KR1)            *speed = 28;
    if (spd_intf == TBHMOD_SPD_50G_IEEE_KR1_CR1)                    *speed = 5;
    if (spd_intf == TBHMOD_SPD_100G_MLD_NO_FEC_X4)                  *speed = 37;
    if (spd_intf == TBHMOD_SPD_100G_MLD_X4)                         *speed = 6;
    if (spd_intf == TBHMOD_SPD_100G_BRCM_FEC_544_1XN_KR4_CR4)       *speed = 33;
    if (spd_intf == TBHMOD_SPD_100G_BRCM_NOFEC_KR2_CR2)             *speed = 36;
    if (spd_intf == TBHMOD_SPD_100G_BRCM_FEC_272_KR2_CR2)           *speed = 39;
    if (spd_intf == TBHMOD_SPD_100G_BRCM_FEC_528_KR2_CR2)           *speed = 35;
    if (spd_intf == TBHMOD_SPD_100G_IEEE_KR2_CR2)                   *speed = 8;
    if (spd_intf == TBHMOD_SPD_200G_BRCM_NO_FEC_KR4_CR4)            *speed = 31;
    if (spd_intf == TBHMOD_SPD_200G_BRCM_FEC_544_1XN_KR4_CR4)       *speed = 32;
    if (spd_intf == TBHMOD_SPD_200G_IEEE_FEC_544_2XN_KR4_CR4)       *speed = 9;
    if (spd_intf == TBHMOD_SPD_200G_BRCM_FEC_272_1XN_KR4_CR4)       *speed = 68;
    if (spd_intf == TBHMOD_SPD_400G_BRCM_FEC_544_2XN_X8)            *speed = 30;
    if (spd_intf == TBHMOD_SPD_150G_FEC_544_2XN_N3)                 *speed = 67;
    if (spd_intf == TBHMOD_SPD_300G_FEC_544_2XN_N6)                 *speed = 69;
    if (spd_intf == TBHMOD_SPD_350G_FEC_544_2XN_N7)                 *speed = 70;
    if (spd_intf == TBHMOD_SPD_12P5G_BRCM_KR1)                      *speed = 73;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_56)                     *speed = 56;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_57)                     *speed = 57;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_58)                     *speed = 58;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_59)                     *speed = 59;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_60)                     *speed = 60;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_61)                     *speed = 61;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_62)                     *speed = 62;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_63)                     *speed = 63;
    /* This entry is used for 1588 lookup */
    if (spd_intf == TBHMOD_SPD_400G_IEEE_FEC_544_2XN_X8)            *speed = 10;
    if (*speed == -1) {
        return PHYMOD_E_UNAVAIL;
    }
    return PHYMOD_E_NONE;
}

int tbhmod_get_mapped_speed_7nm(tbhmod_spd_intfc_type_t spd_intf, int *speed)
{
    *speed = -1;
    /* speeds covered in Forced-speed */
    if (spd_intf == TBHMOD_SPD_10000_XFI)                           *speed = 0;
    if (spd_intf == TBHMOD_SPD_10G_FEC_BASE_R_KR1_CR1)              *speed = 64;
    if (spd_intf == TBHMOD_SPD_20000_XFI)                           *speed = 14;
    if (spd_intf == TBHMOD_SPD_20G_FEC_BASE_R_KR1_CR1)              *speed = 65;
    if (spd_intf == TBHMOD_SPD_40G_FEC_BASE_R_KR4_CR4)              *speed = 66;
    if (spd_intf == TBHMOD_SPD_40G_MLD_X4)                          *speed = 3;
    if (spd_intf == TBHMOD_SPD_40G_MLD_X2)                          *speed = 18;
    if (spd_intf == TBHMOD_SPD_25000_XFI)                           *speed = 41;
    if (spd_intf == TBHMOD_SPD_25G_FEC_BASE_R_KR1_CR1)              *speed = 42;
    if (spd_intf == TBHMOD_SPD_25G_FEC_RS_FEC_KR1_CR1)              *speed = 43;
    if (spd_intf == TBHMOD_SPD_CL73_20G)                            *speed = 11;
    if (spd_intf == TBHMOD_SPD_CL73_25G)                            *speed = 12;
    if (spd_intf == TBHMOD_SPD_CL73_26G)                            *speed = 13;
    if (spd_intf == TBHMOD_SPD_50G_MLD_X2)                          *speed = 20;
    if (spd_intf == TBHMOD_SPD_50G_MLD_FEC_528_X2)                  *speed = 21;
    if (spd_intf == TBHMOD_SPD_50G_BRCM_FEC_544_CR2_KR2)            *speed = 24;
    if (spd_intf == TBHMOD_SPD_50G_BRCM_NOFEC_KR1_CR1)              *speed = 27;
    if (spd_intf == TBHMOD_SPD_50G_BRCM_FEC_272_KR1_CR1)            *speed = 38;
    if (spd_intf == TBHMOD_SPD_50G_BRCM_FEC_528_CR1_KR1)            *speed = 28;
    if (spd_intf == TBHMOD_SPD_50G_IEEE_KR1_CR1)                    *speed = 5;
    if (spd_intf == TBHMOD_SPD_100G_MLD_NO_FEC_X4)                  *speed = 37;
    if (spd_intf == TBHMOD_SPD_100G_MLD_X4)                         *speed = 6;
    if (spd_intf == TBHMOD_SPD_100G_BRCM_FEC_544_1XN_KR4_CR4)       *speed = 33;
    if (spd_intf == TBHMOD_SPD_100G_BRCM_NOFEC_KR2_CR2)             *speed = 36;
    if (spd_intf == TBHMOD_SPD_100G_BRCM_FEC_272_KR2_CR2)           *speed = 39;
    if (spd_intf == TBHMOD_SPD_100G_BRCM_FEC_528_KR2_CR2)           *speed = 35;
    if (spd_intf == TBHMOD_SPD_100G_IEEE_KR2_CR2)                   *speed = 8;
    if (spd_intf == TBHMOD_SPD_200G_BRCM_NO_FEC_KR4_CR4)            *speed = 31;
    if (spd_intf == TBHMOD_SPD_200G_BRCM_FEC_544_1XN_KR4_CR4)       *speed = 32;
    if (spd_intf == TBHMOD_SPD_200G_IEEE_FEC_544_2XN_KR4_CR4)       *speed = 9;
    if (spd_intf == TBHMOD_SPD_200G_BRCM_FEC_272_2XN_KR4_CR4)       *speed = 40;
    if (spd_intf == TBHMOD_SPD_200G_BRCM_FEC_272_1XN_KR4_CR4)       *speed = 68;
    if (spd_intf == TBHMOD_SPD_400G_BRCM_FEC_544_2XN_X8)            *speed = 30;
    if (spd_intf == TBHMOD_SPD_400G_BRCM_FEC_272_2XN_X8)            *speed = 71;
    if (spd_intf == TBHMOD_SPD_150G_FEC_544_2XN_N3)                 *speed = 67;
    if (spd_intf == TBHMOD_SPD_300G_FEC_544_2XN_N6)                 *speed = 69;
    if (spd_intf == TBHMOD_SPD_350G_FEC_544_2XN_N7)                 *speed = 70;
    if (spd_intf == TBHMOD_SPD_12P5G_BRCM_KR1)                      *speed = 73;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_56)                     *speed = 56;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_57)                     *speed = 57;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_58)                     *speed = 58;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_59)                     *speed = 59;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_60)                     *speed = 60;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_61)                     *speed = 61;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_62)                     *speed = 62;
    if (spd_intf == TBHMOD_SPD_CUSTOM_ENTRY_63)                     *speed = 63;
    if (*speed == -1) {
        return PHYMOD_E_UNAVAIL;
    }

    return PHYMOD_E_NONE;
}
/*#ifdef _DV_TB_
int tbhmod_get_ht_entries(PHYMOD_ST* pc)
{

  int or_en, or_val;

  or_en  = pc->per_field_override_en & 0xffff0000 ;
  or_val = pc->per_field_override_en & 0x0000ffff ;


  printf("SC_Info_Beg : pc->per_field_override_en %08x\n", pc->per_field_override_en);

  if(or_en == 0x00010000) {
    pc->num_lanes = or_val;
    printf("SC_Info_OVR : pc->num_lanes = or_val = %04x\n", pc->num_lanes);
  } else {
    pc->num_lanes = sc_ht_pcs[pc->speed].num_lanes;
  }

  if(or_en == 0x00020000) {
    pc->os_mode = or_val;
    printf("SC_Info_OVR : pc->os_mode = or_val = %04x\n", pc->os_mode);
  } else {
    pc->os_mode = sc_ht_pcs[pc->speed].os_mode;
  }

  if(or_en == 0x00040000) {
    pc->t_fifo_mode = or_val;
    printf("SC_Info_OVR : pc->t_fifo_mode = or_val = %04x\n", pc->t_fifo_mode);
  } else {
    pc->t_fifo_mode = sc_ht_pcs[pc->speed].t_fifo_mode;
  }

  if(or_en == 0x00080000) {
    pc->t_enc_mode = or_val;
    printf("SC_Info_OVR : pc->t_enc_mode = or_val = %04x\n", pc->t_enc_mode);
  } else {
    pc->t_enc_mode = sc_ht_pcs[pc->speed].t_enc_mode;
  }

  if(or_en == 0x00100000) {
    pc->t_HG2_ENABLE = or_val;
    printf("SC_Info_OVR : pc->t_HG2_ENABLE = or_val = %04x\n", pc->t_HG2_ENABLE);
  } else {
    pc->t_HG2_ENABLE = sc_ht_pcs[pc->speed].t_HG2_ENABLE;
  }

  if(or_en == 0x00200000) {
    pc->t_pma_btmx_mode = or_val;
    printf("SC_Info_OVR : pc->t_pma_btmx_mode = or_val = %04x\n", pc->t_pma_btmx_mode);
  } else {
    pc->t_pma_btmx_mode = sc_ht_pcs[pc->speed].t_pma_btmx_mode;
    if(pc->cl91_en == 1 && (cl91_valid_speed(pc) || pc->fc_mode == 1)) {
      pc->t_pma_btmx_mode = 0;
    }
  }

  if(or_en == 0x00400000) {
    pc->scr_mode = or_val;
    printf("SC_Info_OVR : pc->scr_mode = or_val = %04x\n", pc->scr_mode);
  } else {
    pc->scr_mode = sc_ht_pcs[pc->speed].scr_mode;
  }

  if(or_en == 0x01000000) {
    pc->descr_mode = or_val;
    printf("SC_Info_OVR : pc->descr_mode = or_val = %04x\n", pc->descr_mode);
  } else {
    pc->descr_mode = sc_ht_pcs[pc->speed].descr_mode;
  }

  if(or_en == 0x02000000) {
    pc->dec_tl_mode = or_val;
    printf("SC_Info_OVR : pc->dec_tl_mode = or_val = %04x\n", pc->dec_tl_mode);
  } else {
    pc->dec_tl_mode = sc_ht_pcs[pc->speed].dec_tl_mode;
  }

  if(or_en == 0x04000000) {
    pc->deskew_mode = or_val;
    printf("SC_Info_OVR : pc->deskew_mode = or_val = %04x\n", pc->deskew_mode);
  } else {
    pc->deskew_mode = sc_ht_pcs[pc->speed].deskew_mode;
    if((pc->speed == sc_x1_speed_override0_sc_S_100G_CR4    ) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_KR4    ) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_X4     ) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_HG2_CR4) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_HG2_KR4) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_HG2_X4 )) {
      if((pc->cl91_en == 1) || ((pc->an_en == 1) && (pc->an_fec_sel_override == 0 || pc->an_fec_sel_override == 3)) ) {
        pc->deskew_mode = R_DESKEW_MODE_CL91;
      }
    }
  }

  if(or_en == 0x08000000) {
    pc->dec_fsm_mode = or_val;
    printf("SC_Info_OVR : pc->dec_fsm_mode = or_val = %04x\n", pc->dec_fsm_mode);
  } else {
    pc->dec_fsm_mode = sc_ht_pcs[pc->speed].dec_fsm_mode;
  }

  pc->r_HG2_ENABLE = sc_ht_pcs[pc->speed].r_HG2_ENABLE;

  if(or_en == 0x10000000) {
    pc->bs_sm_sync_mode = or_val;
    printf("SC_Info_OVR : pc->bs_sm_sync_mode = or_val = %04x\n", pc->bs_sm_sync_mode);
  } else {
    pc->bs_sm_sync_mode = sc_ht_pcs[pc->speed].bs_sm_sync_mode;
  }

  if(or_en  == 0x10010000) {
    pc->bs_sync_en = or_val;
    printf("SC_Info_OVR : pc->bs_sync_en = or_val = %04x\n", pc->bs_sync_en);
  } else {

    pc->bs_sync_en = sc_ht_pcs[pc->speed].bs_sync_en;
    if((pc->cl91_en == 1 && cl91_valid_speed(pc)) || pc->an_hcd_fec || pc->t_fec_enable) {
      pc->bs_sync_en = 0;
    }

  }

  if(or_en  == 0x10020000) {
    pc->bs_dist_mode = or_val;
    printf("SC_Info_OVR : pc->bs_dist_mode = or_val = %04x\n", pc->bs_dist_mode);
  } else {
    pc->bs_dist_mode = sc_ht_pcs[pc->speed].bs_dist_mode;
    if((pc->speed == sc_x1_speed_override0_sc_S_100G_CR4    ) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_KR4    ) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_X4     ) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_HG2_CR4) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_HG2_KR4) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_HG2_X4 )) {
      if((pc->cl91_en == 1) || ((pc->an_en == 1) && (pc->an_fec_sel_override == 0 || pc->an_fec_sel_override == 3)) ) {
        pc->bs_dist_mode = 0;
      }
    }
  }

  if(or_en == 0x10040000) {
    pc->bs_btmx_mode = or_val;
    printf("SC_Info_OVR : pc->bs_btmx_mode = or_val = %04x\n", pc->bs_btmx_mode);
  } else {
    pc->bs_btmx_mode = sc_ht_pcs[pc->speed].bs_btmx_mode;
    if((pc->speed == sc_x1_speed_override0_sc_S_100G_CR4    ) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_KR4    ) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_X4     ) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_HG2_CR4) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_HG2_KR4) ||
       (pc->speed == sc_x1_speed_override0_sc_S_100G_HG2_X4 )) {
      if((pc->cl91_en == 1) || ((pc->an_en == 1) && (pc->an_fec_sel_override == 0 || pc->an_fec_sel_override == 3)) ) {
        pc->bs_btmx_mode = 0;
      }
    }
  }

  if(pc->per_field_override_en == 0x1008 && pc->cl72_en==1) {
    pc->cl72_en = 1;
    printf("SC_Info_OVR : #1 pc->cl72_en = %04x\n", pc->cl72_en);
    pc->per_field_override_en = or_en;
  } else if(pc->per_field_override_en == 0x1008 && pc->cl72_en==0) {
    pc->cl72_en = 0;
    printf("SC_Info_OVR : #2 pc->cl72_en = %04x\n", pc->cl72_en);
  } else {
    pc->cl72_en = sc_ht_pcs[pc->speed].cl72_en;
  }

  if(or_en == 0x20000000) {
    pc->clkcnt0 = or_val;
    printf("SC_Info_OVR : pc->clkcnt0 = or_val = %04x\n", pc->clkcnt0);
  } else {
    if(pc->tsc_clk_freq_pll_by_48 == 0) {
      pc->clkcnt0 =	sc_ht_pcs[pc->speed].clkcnt0;
    } else {
      pc->clkcnt0 =	sc_ht_pcs[pc->speed].clkcnt0_by48;
    }
  }

  if(or_en == 0x20010000) {
    pc->clkcnt1 = or_val;
    printf("SC_Info_OVR : pc->clkcnt1 = or_val = %04x\n", pc->clkcnt1);
  } else {
    if(pc->tsc_clk_freq_pll_by_48 == 0) {
      pc->clkcnt1 =	sc_ht_pcs[pc->speed].clkcnt1;
    } else {
      pc->clkcnt1 =	sc_ht_pcs[pc->speed].clkcnt1_by48;
    }

    if(pc->credit_sel) {
      if(pc->fc_tx_spd_intf == TBHMOD_SPD_16G_FC && pc->fc_mode == 1) {
        pc->clkcnt1 = 10;
      }

      if(pc->fc_mode == 0) {
        if (pc->speed == 0x0 || pc->speed == 0x1 || pc->speed == 0x2 || pc->speed == 0x4 || pc->speed == 0x5 || pc->speed == 0x6) {
          pc->clkcnt1 = 10;
        }
      }
    }
  }

  if(or_en == 0x20020000) {
    pc->lpcnt0 = or_val;
    printf("SC_Info_OVR : pc->lpcnt0 = or_val = %04x\n", pc->lpcnt0);
  } else {
    if(pc->tsc_clk_freq_pll_by_48 == 0) {
      pc->lpcnt0 = sc_ht_pcs[pc->speed].lpcnt0;
    } else {
      pc->lpcnt0 = sc_ht_pcs[pc->speed].lpcnt0_by48;
    }
  }

  if(or_en == 0x20040000) {
    pc->lpcnt1 = or_val;
    printf("SC_Info_OVR : pc->lpcnt1 = or_val = %04x\n", pc->lpcnt1);
  } else {
    if(pc->tsc_clk_freq_pll_by_48 == 0) {
      pc->lpcnt1 = sc_ht_pcs[pc->speed].lpcnt1;
    } else {
      pc->lpcnt1 = sc_ht_pcs[pc->speed].lpcnt1_by48;
    }

    if(pc->credit_sel) {
      if(pc->fc_tx_spd_intf == TBHMOD_SPD_16G_FC && pc->fc_mode == 1) {
        pc->lpcnt1 = 9;
      }

      if(pc->fc_mode == 0) {
        if (pc->speed == 0x0 || pc->speed == 0x1 || pc->speed == 0x2 || pc->speed == 0x4 || pc->speed == 0x5 || pc->speed == 0x6) {
          pc->lpcnt1 = 9;
        }
      }
    }
  }

  if(or_en == 0x20080000) {
    pc->cgc = or_val;
    printf("SC_Info_OVR : pc->cgc = or_val = %04x\n", pc->cgc);
  } else {
    if(pc->tsc_clk_freq_pll_by_48 == 0) {
      pc->cgc =	sc_ht_pcs[pc->speed].cgc;
    } else {
      pc->cgc =	sc_ht_pcs[pc->speed].cgc_by48;
    }

    if(pc->credit_sel) {
      if(pc->fc_tx_spd_intf == TBHMOD_SPD_16G_FC && pc->fc_mode == 1) {
        pc->cgc = 6;
      }

      if(pc->fc_mode == 0) {
        if (pc->speed == 0x0 || pc->speed == 0x1 || pc->speed == 0x2 || pc->speed == 0x4 || pc->speed == 0x5 || pc->speed == 0x6) {
          pc->cgc = 6;
        }
        if(pc->speed == 0x18 || pc->speed == 0x19 || pc->speed == 0x1a || pc->speed == 0x1c || pc->speed == 0x1d || pc->speed == 0x1e) {
          pc->cgc = 4;
        }
        if((pc->speed == 0x28 || pc->speed == 0x29 || pc->speed == 0x2a || pc->speed == 0x2c || pc->speed == 0x2d || pc->speed == 0x2e) ||
           (pc->speed == 0x38 || pc->speed == 0x39 || pc->speed == 0x3a || pc->speed == 0x3c || pc->speed == 0x3d || pc->speed == 0x3e)) {
          pc->cgc = 2;
        }
      }
    }
  }

  printf("SC_Info_End : pc->per_field_override_en %08x\n", pc->per_field_override_en);

  return PHYMOD_E_NONE;
}

#endif */

int print_tbhmod_sc_lkup_table(PHYMOD_ST* pc)
{

  return PHYMOD_E_NONE;
}


/*#ifdef _DV_TB_
int tbhmod_sc_lkup_table(tbhmod_st* pc)
{
  int mapped_speed;
  tbhmod_get_mapped_speed(pc->spd_intf, &mapped_speed);
  tbhmod_get_ht_entries(pc);
  return PHYMOD_E_NONE;
}
#endif */

/*#ifdef _DV_TB_
int tbhmod_fill_lkup_exp(tbhmod_st* pc)
{
     tbhmod_sc_lkup_table(pc);

 return PHYMOD_E_NONE;
}
#endif*/

#ifdef _DV_TB_
int cl91_valid_speed(tbhmod_st* pc)
{
  
  /*
pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_25G_CR1     ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_25G_KR1     ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_25G_X1      ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_25G_HG2_CR1 ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_25G_HG2_KR1 ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_25G_HG2_X1  ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_50G_CR2     ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_50G_KR2     ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_50G_X2      ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_50G_HG2_CR2 ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_50G_HG2_KR2 ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_50G_HG2_X2  ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_100G_CR4     ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_100G_KR4     ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_100G_X4      ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_100G_HG2_CR4 ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_100G_HG2_KR4 ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_100G_HG2_X4  ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_25G_CR_IEEE  ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_25G_KR_IEEE  ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_25G_CRS_IEEE ||
     pc->speed == SC_X4_CONTROL_CONTROL_SPEED_S_25G_KRS_IEEE
     */
  if( pc->speed ==  sc_x4_control_sc_SPEED_100G_BRCM_KR4_CR4 ||
     pc->speed == sc_x4_control_sc_SPEED_50G_BRCM_KR4 ||
     pc->speed == sc_x4_control_sc_SPEED_50G_BRCM_CR4  ||
     pc->speed == sc_x4_control_sc_SPEED_25G_IEEE_KS1_CS1 ||
     pc->speed == sc_x4_control_sc_SPEED_25G_IEEE_KR1_CR1 ||
     pc->speed == sc_x4_control_sc_SPEED_100G_IEEE_KR4  ||
     pc->speed ==  sc_x4_control_sc_SPEED_200G_IEEE_KR4_CR4 ||
     pc->speed ==  sc_x4_control_sc_SPEED_400G_IEEE_X8
    ) {
      return 1;
    }
    else {
      return 0;
    }
}
#endif
