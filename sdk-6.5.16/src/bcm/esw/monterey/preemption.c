/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 */
#include <soc/drv.h>
#include <soc/monterey.h>
#include <bcm/error.h>
#include <bcm_int/esw/port.h>
#include <bcm/types.h>
#if defined(BCM_PREEMPTION_SUPPORT)
#include <bcm_int/esw/preemption.h>
#endif
#if defined(BCM_MONTEREY_SUPPORT)

int bcm_mn_preemption_edb_init(int unit) { 


int preemption_start[128]={4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
                           6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
                           4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
                           6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
                           4,4,4,5,4,4,4,5,4,4,4,5,4,4,4,5,
                           6,6,6,6,6,6,6,6,6,6,6,5,6,6,6,6,
                           5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
                           6,6,6,6,6,6,6,6,6,6,6,5,5,5,5,6
}; 
int preemption_terminate[512]={
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xd,8,0xd,8,0xd,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,0xd,8,0xa,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,0xd,8,0xa,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,0xd,8,0xa,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xd,8,0xd,8,0xd,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,0xd,8,0xa,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,0xd,8,0xa,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,0xd,8,0xa,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,0xd,8,8,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xd,8,0xd,8,0xd,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,0xd,8,0xa,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,0xd,8,0xa,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,0xd,8,0xa,8,0xd,  
                               8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,  
                               8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,  
                               8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,  
                               8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,  
                               8,8,8,8,8,8,8,8,8,0xd,8,0xd,8,0xd,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,0xd,8,0xa,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,0xd,8,0xa,8,0xd,  
                               8,8,8,8,8,8,8,8,8,0xa,8,8,8,0xa,8,8,  
};

 static const soc_mem_t preemption_start_mem[16]={ 
                                                  EGR_FLEX_PREEMPT_START_LOOKUP0m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP1m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP2m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP3m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP4m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP5m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP6m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP7m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP8m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP9m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP10m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP11m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP12m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP13m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP14m,    
                                                  EGR_FLEX_PREEMPT_START_LOOKUP15m,
                                                 };
 static const soc_mem_t preemption_terminate_mem[16]={
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP0m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP1m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP2m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP3m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP4m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP5m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP6m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP7m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP8m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP9m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP10m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP11m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP12m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP13m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP14m,
                                                  EGR_FLEX_PREEMPT_TERMINATE_LOOKUP15m,
};
uint32 entry0[SOC_MAX_MEM_WORDS];
uint32 entry1[SOC_MAX_MEM_WORDS];

int port_macro_index, row_index, entry_index, absoulte_entry_index;

#define NUM_PORT_MACRO               16
#define NUM_ROW                      32
#define NUM_START_ENTRY_PER_ROW      4
#define NUM_TERMINATE_ENTRY_PER_ROW  16

  for(port_macro_index = 0 ; port_macro_index < NUM_PORT_MACRO; port_macro_index++) {
      for (row_index = 0; row_index < NUM_ROW; row_index++) {
           for (entry_index = 0 ; entry_index < NUM_START_ENTRY_PER_ROW ; entry_index++) {
                absoulte_entry_index = NUM_START_ENTRY_PER_ROW * row_index + entry_index;
                sal_memset(entry0, 0, (sizeof(uint32) * SOC_MAX_MEM_WORDS));
                soc_mem_field32_set(unit,preemption_start_mem[port_macro_index],
                                    entry0, STARTf,preemption_start[absoulte_entry_index]);
                SOC_IF_ERROR_RETURN(
                   soc_mem_write(unit,preemption_start_mem[port_macro_index] ,
                                 MEM_BLOCK_ANY, absoulte_entry_index, &entry0));
           }
           for (entry_index = 0 ; entry_index < NUM_TERMINATE_ENTRY_PER_ROW ; entry_index++) {
                absoulte_entry_index = NUM_TERMINATE_ENTRY_PER_ROW * row_index + entry_index;
                sal_memset(entry1, 0, (sizeof(uint32) * SOC_MAX_MEM_WORDS));
                soc_mem_field32_set(unit,preemption_terminate_mem[port_macro_index],
                                    entry1, TERMINATEf,preemption_terminate[absoulte_entry_index]);
                SOC_IF_ERROR_RETURN(
                   soc_mem_write(unit,preemption_terminate_mem[port_macro_index],
                                 MEM_BLOCK_ANY, absoulte_entry_index, &entry1));
          }
      }
   }
   return BCM_E_NONE;  
}

int 
bcmi_mn_preemption_init(int unit) { 

    BCM_IF_ERROR_RETURN(bcm_mn_preemption_edb_init(unit));
    return BCM_E_NONE; 
}

STATIC int
bcmi_mn_preemption_port_check(int unit, bcm_port_t port)
{
  return TRUE; 
}

int
bcmi_mn_preemption_capability_set(int unit, bcm_port_t port,
                                   uint32 arg)
{

    BCM_IF_ERROR_RETURN(bcmi_mn_preemption_port_check(unit, port));
    BCM_IF_ERROR_RETURN(
        soc_reg_field32_modify(unit,
                               HSP_SCHED_PORT_PREEMPT_CONFIGr,
                               port,
                               PORT_PREEMPTABLEf,
                               arg ? 1 : 0));
    return BCM_E_NONE;
}

int
bcmi_mn_preemption_queue_bitmap_set(int unit, bcm_port_t port,
                                     uint32 arg)
{
    BCM_IF_ERROR_RETURN(bcmi_mn_preemption_port_check(unit, port));
    BCM_IF_ERROR_RETURN(
        soc_reg_field_validate(unit,
                              HSP_SCHED_PORT_PREEMPT_CONFIGr,
                               COS_PREEMPTABLEf,
                               arg));
    BCM_IF_ERROR_RETURN(
        soc_reg_field32_modify(unit,
                               HSP_SCHED_PORT_PREEMPT_CONFIGr,
                               port,
                               COS_PREEMPTABLEf,
                               arg));
    return BCM_E_NONE;
}



int
bcmi_mn_preemption_capability_get(int unit, bcm_port_t port,
                                   uint32* arg)
{
    uint32 regval;
    if (NULL == arg) {
        return SOC_E_PARAM;
    }
    BCM_IF_ERROR_RETURN(bcmi_mn_preemption_port_check(unit, port));
    BCM_IF_ERROR_RETURN(
        READ_HSP_SCHED_PORT_PREEMPT_CONFIGr(unit, port,
                                         &regval));
    *arg = soc_reg_field_get(unit,
                             HSP_SCHED_PORT_PREEMPT_CONFIGr,
                             regval, PORT_PREEMPTABLEf);
    return BCM_E_NONE;
}

int
bcmi_mn_preemption_queue_bitmap_get(int unit, bcm_port_t port,
                                     uint32* arg)
{
    uint32 regval;
    if (NULL == arg) {
        return SOC_E_PARAM;
    }
    BCM_IF_ERROR_RETURN(bcmi_mn_preemption_port_check(unit, port));
    BCM_IF_ERROR_RETURN(
       READ_HSP_SCHED_PORT_PREEMPT_CONFIGr(unit, port,
                                         &regval));
    *arg = soc_reg_field_get(unit,
                             HSP_SCHED_PORT_PREEMPT_CONFIGr,
                             regval, COS_PREEMPTABLEf);
    return BCM_E_NONE;
}
int
bcmi_mn_preemption_frag_config_tx_set(int unit, bcm_port_t port,
                                       int is_final,
                                       uint32 value)
{
    uint32 entry[SOC_MAX_MEM_WORDS], hw_value;
    soc_info_t *si;
    int phy_port;

    si = &SOC_INFO(unit);
    phy_port = si->port_l2p_mapping[port];
    BCM_IF_ERROR_RETURN(bcmi_mn_preemption_port_check(unit, port));

    /* Min final frag size should be in range 64-128 and
       min non-final frag size shoudl be in range 64-512 */
    if(value > 512 || value < 64) {
        return BCM_E_PARAM;
    }
    if (is_final && (value > 128)) {
        return BCM_E_PARAM;
    }
    hw_value = value / 8;

    BCM_IF_ERROR_RETURN
        (READ_EGR_PORT_MNFS_MFS_CONFIGm(unit, MEM_BLOCK_ALL,
                                        phy_port, entry));
    soc_mem_field32_set(unit, EGR_PORT_MNFS_MFS_CONFIGm,
                        entry, (is_final ? MFSf : MNFSf), hw_value);
    BCM_IF_ERROR_RETURN
        (WRITE_EGR_PORT_MNFS_MFS_CONFIGm(unit, MEM_BLOCK_ALL,
                                         phy_port, entry));
    return BCM_E_NONE;
}
int
bcmi_mn_preemption_frag_config_tx_get(int unit, bcm_port_t port,
                                       int is_final,
                                       uint32* value)
{
    uint32 entry[SOC_MAX_MEM_WORDS], hw_value;
    soc_info_t *si;
    int phy_port;

    si = &SOC_INFO(unit);
    phy_port = si->port_l2p_mapping[port];

    if (NULL == value) {
        return SOC_E_PARAM;
    }

    BCM_IF_ERROR_RETURN(bcmi_mn_preemption_port_check(unit, port));

    BCM_IF_ERROR_RETURN
        (READ_EGR_PORT_MNFS_MFS_CONFIGm(unit, MEM_BLOCK_ALL,
                                        phy_port, entry));
    hw_value = soc_mem_field32_get(unit, EGR_PORT_MNFS_MFS_CONFIGm,
                                   entry, (is_final ? MFSf : MNFSf));
    *value = hw_value * 8;
    return BCM_E_NONE;
}

#endif /* BCM_MONTEREY_SUPPORT */
