/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : FLEXCAN
*   Dependencies         : 
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 3.0.0
*   Build Version        : S32K3_RTD_3_0_0_P01_D2303_ASR_REL_4_7_REV_0000_20230331
*
*   (c) Copyright 2020 - 2023 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/
/***********************************************************************************************************************
 * This file was generated by the S32 Configuration Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Configuration Tools is used to update this file.
 **********************************************************************************************************************/

/**
*   @file FlexCAN_Ip_PBcfg.c
*
*   @addtogroup FlexCAN
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "FlexCAN_Ip_Types.h"
#if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)
    #include "Dma_Ip.h"
#endif
#include "Can_43_FLEXCAN_Irq.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXCAN_IP_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_C                        43
#define FLEXCAN_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C         4
#define FLEXCAN_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C         7
#define FLEXCAN_IP_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_C      0
#define FLEXCAN_IP_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C                 3
#define FLEXCAN_IP_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C                 0
#define FLEXCAN_IP_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_C                 0
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against current file and FlexCAN_Ip_Types.h */
#if (FLEXCAN_IP_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_C != FLEXCAN_IP_TYPES_VENDOR_ID_H)
    #error "FlexCAN_Ip_BOARD_InitPeripherals_PBcfg.c and FlexCAN_Ip_Types.h have different vendor ids"
#endif
#if ((FLEXCAN_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C     != FLEXCAN_IP_TYPES_AR_RELEASE_MAJOR_VERSION_H) || \
     (FLEXCAN_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C     != FLEXCAN_IP_TYPES_AR_RELEASE_MINOR_VERSION_H) || \
     (FLEXCAN_IP_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_C  != FLEXCAN_IP_TYPES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AUTOSAR Version Numbers of FlexCAN_Ip_BOARD_InitPeripherals_PBcfg.c and FlexCAN_Ip_Types.h are different"
#endif
#if ((FLEXCAN_IP_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != FLEXCAN_IP_TYPES_SW_MAJOR_VERSION_H) || \
     (FLEXCAN_IP_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != FLEXCAN_IP_TYPES_SW_MINOR_VERSION_H) || \
     (FLEXCAN_IP_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != FLEXCAN_IP_TYPES_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of FlexCAN_Ip_BOARD_InitPeripherals_PBcfg.c and FlexCAN_Ip_Types.h are different"
#endif

/* Checks against current file and Can_43_FLEXCAN_Irq.h */
#if (FLEXCAN_IP_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_C != CAN_43_FLEXCAN_IRQ_VENDOR_ID)
    #error "FlexCAN_Ip_BOARD_InitPeripherals_PBcfg.c and Can_43_FLEXCAN_Irq.h have different vendor ids"
#endif
#if ((FLEXCAN_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C     != CAN_43_FLEXCAN_IRQ_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXCAN_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C     != CAN_43_FLEXCAN_IRQ_AR_RELEASE_MINOR_VERSION) || \
     (FLEXCAN_IP_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_C  != CAN_43_FLEXCAN_IRQ_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AUTOSAR Version Numbers of FlexCAN_Ip_BOARD_InitPeripherals_PBcfg.c and Can_43_FLEXCAN_Irq.h are different"
#endif
#if ((FLEXCAN_IP_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != CAN_43_FLEXCAN_IRQ_SW_MAJOR_VERSION) || \
     (FLEXCAN_IP_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != CAN_43_FLEXCAN_IRQ_SW_MINOR_VERSION) || \
     (FLEXCAN_IP_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != CAN_43_FLEXCAN_IRQ_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of FlexCAN_Ip_BOARD_InitPeripherals_PBcfg.c and Can_43_FLEXCAN_Irq.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Checks against current file and Dma_Ip.h */
    #if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)
        #if ((FLEXCAN_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C    != DMA_IP_AR_RELEASE_MAJOR_VERSION) || \
            (FLEXCAN_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C     != DMA_IP_AR_RELEASE_MINOR_VERSION)\
            )
            #error "AUTOSAR Version Numbers of FlexCAN_Ip_BOARD_InitPeripherals_PBcfg.c and Dma_Ip.h are different"
        #endif
    #endif
#endif
/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CAN_43_FLEXCAN_START_SEC_CODE
#include "Can_43_FLEXCAN_MemMap.h"

#define CAN_43_FLEXCAN_STOP_SEC_CODE
#include "Can_43_FLEXCAN_MemMap.h"
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define CAN_43_FLEXCAN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Can_43_FLEXCAN_MemMap.h"

const Flexcan_Ip_ConfigType Flexcan_aCtrlConfigPB_BOARD_InitPeripherals[1U]=
{
    /* Can Hardware Channel FLEXCAN_0 */
    {
        /* Number Of Message Buffer used .max_num_mb */
        (uint8)1U,
        /*Can Hw filter count* .num_id_filters */
        (Flexcan_Ip_RxFifoIdFilterNumType)0U,
        /* Legacy FIFO ENABLED .is_rx_fifo_needed */
        (boolean)FALSE,
        #if (FLEXCAN_IP_FEATURE_HAS_ENHANCED_RX_FIFO == STD_ON)
        /* The number of standard ID filter elements */
        0U,
        /* The number of extended ID filter elements */
        0U,
        /* The number of enhanced Rx FIFO watermark */
        19U,
        /* The Enhanced Rx FIFO feature is enabled or not. */
        (boolean)FALSE,
        #endif
        /* Loopback enabled .flexcanMode */
        FLEXCAN_NORMAL_MODE,
        /* Controller Options .ctrlOptions */
        (uint32)(FLEXCAN_IP_EACEN_U32),
        /* Can FD RamBlock specified .payload */
        {
            FLEXCAN_PAYLOAD_SIZE_8,
            FLEXCAN_PAYLOAD_SIZE_8
        },
        /* Can FD enabled .fd_enable */
        (boolean)FALSE,
        /* Cbt support .extCbtEnable */
        (boolean)FALSE,
        /*  BRS for FD .bitRateSwitch */
        (boolean)FALSE,
        /* Values for normal baudrate .bitrate */
        {
            (uint8)4U, /* Prop Seg */
            (uint8)4U, /* Phase Seg 1 */
            (uint8)5U, /* Phase Seg 2 */
            (uint16)9U, /* Prescaller */
            (uint8)0U /* Resync Jump Width */
        },
        /* Values for CBT baudrate .bitrate_cbt */
        {
            (uint8)0U, /* Prop Seg */
            (uint8)0U, /* Phase Seg 1 */
            (uint8)0U, /* Phase Seg 2 */
            (uint16)0U, /* Prescaller */
            (uint8)0U /* Resync Jump Width */
        },
        /* Fifo Transfer Type .transfer_type */
        FLEXCAN_RXFIFO_USING_INTERRUPTS,
#if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* DMA channel number used for transfers. */
        (uint8)0U,
#endif
        /* Controller Callback .Callback */
        Can_43_FLEXCAN_CommonIrqCallback,
        /* Error Callback .ErrorCallback */
        Can_43_FLEXCAN_ErrorIrqCallback
    }
};

#define CAN_43_FLEXCAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Can_43_FLEXCAN_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */

