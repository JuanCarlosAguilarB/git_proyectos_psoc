/*******************************************************************************
* File Name: VinF.h  
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

#if !defined(CY_PINS_VinF_H) /* Pins VinF_H */
#define CY_PINS_VinF_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "VinF_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 VinF__PORT == 15 && ((VinF__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    VinF_Write(uint8 value);
void    VinF_SetDriveMode(uint8 mode);
uint8   VinF_ReadDataReg(void);
uint8   VinF_Read(void);
void    VinF_SetInterruptMode(uint16 position, uint16 mode);
uint8   VinF_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the VinF_SetDriveMode() function.
     *  @{
     */
        #define VinF_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define VinF_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define VinF_DM_RES_UP          PIN_DM_RES_UP
        #define VinF_DM_RES_DWN         PIN_DM_RES_DWN
        #define VinF_DM_OD_LO           PIN_DM_OD_LO
        #define VinF_DM_OD_HI           PIN_DM_OD_HI
        #define VinF_DM_STRONG          PIN_DM_STRONG
        #define VinF_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define VinF_MASK               VinF__MASK
#define VinF_SHIFT              VinF__SHIFT
#define VinF_WIDTH              1u

/* Interrupt constants */
#if defined(VinF__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in VinF_SetInterruptMode() function.
     *  @{
     */
        #define VinF_INTR_NONE      (uint16)(0x0000u)
        #define VinF_INTR_RISING    (uint16)(0x0001u)
        #define VinF_INTR_FALLING   (uint16)(0x0002u)
        #define VinF_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define VinF_INTR_MASK      (0x01u) 
#endif /* (VinF__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define VinF_PS                     (* (reg8 *) VinF__PS)
/* Data Register */
#define VinF_DR                     (* (reg8 *) VinF__DR)
/* Port Number */
#define VinF_PRT_NUM                (* (reg8 *) VinF__PRT) 
/* Connect to Analog Globals */                                                  
#define VinF_AG                     (* (reg8 *) VinF__AG)                       
/* Analog MUX bux enable */
#define VinF_AMUX                   (* (reg8 *) VinF__AMUX) 
/* Bidirectional Enable */                                                        
#define VinF_BIE                    (* (reg8 *) VinF__BIE)
/* Bit-mask for Aliased Register Access */
#define VinF_BIT_MASK               (* (reg8 *) VinF__BIT_MASK)
/* Bypass Enable */
#define VinF_BYP                    (* (reg8 *) VinF__BYP)
/* Port wide control signals */                                                   
#define VinF_CTL                    (* (reg8 *) VinF__CTL)
/* Drive Modes */
#define VinF_DM0                    (* (reg8 *) VinF__DM0) 
#define VinF_DM1                    (* (reg8 *) VinF__DM1)
#define VinF_DM2                    (* (reg8 *) VinF__DM2) 
/* Input Buffer Disable Override */
#define VinF_INP_DIS                (* (reg8 *) VinF__INP_DIS)
/* LCD Common or Segment Drive */
#define VinF_LCD_COM_SEG            (* (reg8 *) VinF__LCD_COM_SEG)
/* Enable Segment LCD */
#define VinF_LCD_EN                 (* (reg8 *) VinF__LCD_EN)
/* Slew Rate Control */
#define VinF_SLW                    (* (reg8 *) VinF__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define VinF_PRTDSI__CAPS_SEL       (* (reg8 *) VinF__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define VinF_PRTDSI__DBL_SYNC_IN    (* (reg8 *) VinF__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define VinF_PRTDSI__OE_SEL0        (* (reg8 *) VinF__PRTDSI__OE_SEL0) 
#define VinF_PRTDSI__OE_SEL1        (* (reg8 *) VinF__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define VinF_PRTDSI__OUT_SEL0       (* (reg8 *) VinF__PRTDSI__OUT_SEL0) 
#define VinF_PRTDSI__OUT_SEL1       (* (reg8 *) VinF__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define VinF_PRTDSI__SYNC_OUT       (* (reg8 *) VinF__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(VinF__SIO_CFG)
    #define VinF_SIO_HYST_EN        (* (reg8 *) VinF__SIO_HYST_EN)
    #define VinF_SIO_REG_HIFREQ     (* (reg8 *) VinF__SIO_REG_HIFREQ)
    #define VinF_SIO_CFG            (* (reg8 *) VinF__SIO_CFG)
    #define VinF_SIO_DIFF           (* (reg8 *) VinF__SIO_DIFF)
#endif /* (VinF__SIO_CFG) */

/* Interrupt Registers */
#if defined(VinF__INTSTAT)
    #define VinF_INTSTAT            (* (reg8 *) VinF__INTSTAT)
    #define VinF_SNAP               (* (reg8 *) VinF__SNAP)
    
	#define VinF_0_INTTYPE_REG 		(* (reg8 *) VinF__0__INTTYPE)
#endif /* (VinF__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_VinF_H */


/* [] END OF FILE */
