/*******************************************************************************
* File Name: VinD.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_VinD_H) /* Pins VinD_H */
#define CY_PINS_VinD_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "VinD_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 VinD__PORT == 15 && ((VinD__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    VinD_Write(uint8 value);
void    VinD_SetDriveMode(uint8 mode);
uint8   VinD_ReadDataReg(void);
uint8   VinD_Read(void);
void    VinD_SetInterruptMode(uint16 position, uint16 mode);
uint8   VinD_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the VinD_SetDriveMode() function.
     *  @{
     */
        #define VinD_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define VinD_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define VinD_DM_RES_UP          PIN_DM_RES_UP
        #define VinD_DM_RES_DWN         PIN_DM_RES_DWN
        #define VinD_DM_OD_LO           PIN_DM_OD_LO
        #define VinD_DM_OD_HI           PIN_DM_OD_HI
        #define VinD_DM_STRONG          PIN_DM_STRONG
        #define VinD_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define VinD_MASK               VinD__MASK
#define VinD_SHIFT              VinD__SHIFT
#define VinD_WIDTH              1u

/* Interrupt constants */
#if defined(VinD__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in VinD_SetInterruptMode() function.
     *  @{
     */
        #define VinD_INTR_NONE      (uint16)(0x0000u)
        #define VinD_INTR_RISING    (uint16)(0x0001u)
        #define VinD_INTR_FALLING   (uint16)(0x0002u)
        #define VinD_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define VinD_INTR_MASK      (0x01u) 
#endif /* (VinD__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define VinD_PS                     (* (reg8 *) VinD__PS)
/* Data Register */
#define VinD_DR                     (* (reg8 *) VinD__DR)
/* Port Number */
#define VinD_PRT_NUM                (* (reg8 *) VinD__PRT) 
/* Connect to Analog Globals */                                                  
#define VinD_AG                     (* (reg8 *) VinD__AG)                       
/* Analog MUX bux enable */
#define VinD_AMUX                   (* (reg8 *) VinD__AMUX) 
/* Bidirectional Enable */                                                        
#define VinD_BIE                    (* (reg8 *) VinD__BIE)
/* Bit-mask for Aliased Register Access */
#define VinD_BIT_MASK               (* (reg8 *) VinD__BIT_MASK)
/* Bypass Enable */
#define VinD_BYP                    (* (reg8 *) VinD__BYP)
/* Port wide control signals */                                                   
#define VinD_CTL                    (* (reg8 *) VinD__CTL)
/* Drive Modes */
#define VinD_DM0                    (* (reg8 *) VinD__DM0) 
#define VinD_DM1                    (* (reg8 *) VinD__DM1)
#define VinD_DM2                    (* (reg8 *) VinD__DM2) 
/* Input Buffer Disable Override */
#define VinD_INP_DIS                (* (reg8 *) VinD__INP_DIS)
/* LCD Common or Segment Drive */
#define VinD_LCD_COM_SEG            (* (reg8 *) VinD__LCD_COM_SEG)
/* Enable Segment LCD */
#define VinD_LCD_EN                 (* (reg8 *) VinD__LCD_EN)
/* Slew Rate Control */
#define VinD_SLW                    (* (reg8 *) VinD__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define VinD_PRTDSI__CAPS_SEL       (* (reg8 *) VinD__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define VinD_PRTDSI__DBL_SYNC_IN    (* (reg8 *) VinD__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define VinD_PRTDSI__OE_SEL0        (* (reg8 *) VinD__PRTDSI__OE_SEL0) 
#define VinD_PRTDSI__OE_SEL1        (* (reg8 *) VinD__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define VinD_PRTDSI__OUT_SEL0       (* (reg8 *) VinD__PRTDSI__OUT_SEL0) 
#define VinD_PRTDSI__OUT_SEL1       (* (reg8 *) VinD__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define VinD_PRTDSI__SYNC_OUT       (* (reg8 *) VinD__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(VinD__SIO_CFG)
    #define VinD_SIO_HYST_EN        (* (reg8 *) VinD__SIO_HYST_EN)
    #define VinD_SIO_REG_HIFREQ     (* (reg8 *) VinD__SIO_REG_HIFREQ)
    #define VinD_SIO_CFG            (* (reg8 *) VinD__SIO_CFG)
    #define VinD_SIO_DIFF           (* (reg8 *) VinD__SIO_DIFF)
#endif /* (VinD__SIO_CFG) */

/* Interrupt Registers */
#if defined(VinD__INTSTAT)
    #define VinD_INTSTAT            (* (reg8 *) VinD__INTSTAT)
    #define VinD_SNAP               (* (reg8 *) VinD__SNAP)
    
	#define VinD_0_INTTYPE_REG 		(* (reg8 *) VinD__0__INTTYPE)
#endif /* (VinD__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_VinD_H */


/* [] END OF FILE */
