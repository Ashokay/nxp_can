/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : generic
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
/**
*   @file    CanIf_Cfg.c
*   @version 3.0.0
*
*   @brief   AUTOSAR CanIf - module interface
*   @details Configuration Structures for PreCompile.
*
*   @addtogroup CANIF_DRIVER
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
#include "CanIf_Types.h"
#include "Can_43_FLEXCAN.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CANIF_VENDOR_ID_PCCFG_C                   43
#define CANIF_AR_RELEASE_MAJOR_VERSION_PCCFG_C     4
#define CANIF_AR_RELEASE_MINOR_VERSION_PCCFG_C     7
#define CANIF_AR_RELEASE_REVISION_VERSION_PCCFG_C  0
#define CANIF_SW_MAJOR_VERSION_PCCFG_C             3
#define CANIF_SW_MINOR_VERSION_PCCFG_C             0
#define CANIF_SW_PATCH_VERSION_PCCFG_C             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

/* Here is the configuration related to Can_43_FLEXCAN Driver */
static const CanIf_CanDrvFuncPtrType Can_43_FLEXCAN_Driver_P2Func = 
{
    /* .CanWrite */
    &Can_43_FLEXCAN_Write
};
static const CanIf_CanDrvPCConfigType Can_43_FLEXCAN_Driver_Config =
{
    /* .CanDrvId */
    (uint8)0U,
    /* .NumCanHoh */
    (uint8)1U,
    /* .CanApi */
    &Can_43_FLEXCAN_Driver_P2Func
};

static const CanIf_CtrlPCConfigType CanIf_CtrlPCConfig[1U] =
{
    {
        /* .CanIfCtrlId */
        (uint8)0U,
        /* .CanCtrlId */
        (uint8)0U,
        /* .CanDrvConfigPtr */
        &Can_43_FLEXCAN_Driver_Config
    }
};
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
const CanIf_PCConfigType CanIf_PCConfig = 
{
    /* .NumOfCtrl */
    (uint8)1U,
    /* .CanIfCtrlConfigPtr */
    CanIf_CtrlPCConfig
};

#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

