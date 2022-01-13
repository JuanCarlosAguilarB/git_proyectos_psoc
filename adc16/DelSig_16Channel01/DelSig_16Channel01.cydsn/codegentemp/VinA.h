/*******************************************************************************
* File Name: VinA.h  
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

#if !defined(CY_PINS_VinA_H) /* Pins VinA_H */
#define CY_PINS_VinA_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "VinA_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 VinA__PORT == 15 && ((VinA__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    VinA_Write(uint8 value);
void    VinA_SetDriveMode(uint8 mode);
uint8   VinA_ReadDataReg(void);
uint8   VinA_Read(void);
void    VinA_SetInterruptMode(uint16 position, uint16 mode);
uint8   VinA_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the VinA_SetDriveMode() function.
     *  @{
     */
        #define VinA_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define VinA_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define VinA_DM_RES_UP          PIN_DM_RES_UP
        #define VinA_DM_RES_DWN         PIN_DM_RES_DWN
        #define VinA_DM_OD_LO           PIN_DM_OD_LO
        #define VinA_DM_OD_HI           PIN_DM_OD_HI
        #define VinA_DM_STRONG          PIN_DM_STRONG
        #define VinA_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define VinA_MASK               VinA__MASK
#define VinA_SHIFT              VinA__SHIFT
#define VinA_WIDTH              1u

/* Interrupt constants */
#if defined(VinA__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in VinA_SetInterruptMode() function.
     *  @{
     */
        #define VinA_INTR_NONE      (uint16)(0x0000u)
        #define VinA_INTR_RISING    (uint16)(0x0001u)
        #define VinA_INTR_FALLING   (uint16)(0x0002u)
        #define VinA_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define VinA_INTR_MASK      (0x01u) 
#endif /* (VinA__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define VinA_PS                     (* (reg8 *) VinA__PS)
/* Data Register */
#define VinA_DR                     (* (reg8 *) VinA__DR)
/* Port Number */
#define VinA_PRT_NUM                (* (reg8 *) VinA__PRT) 
/* Connect to Analog Globals */                                                  
#define VinA_AG                     (* (reg8 *) VinA__AG)                       
/* Analog MUX bux enable */
#define VinA_AMUX                   (* (reg8 *) VinA__AMUX) 
/* Bidirectional Enable */                                                        
#define VinA_BIE                    (* (reg8 *) VinA__BIE)
/* Bit-mask for Aliased Register Access */
#define VinA_BIT_MASK               (* (reg8 *) VinA__BIT_MASK)
/* Bypass Enable */
#define VinA_BYP                    (* (reg8 *) VinA__BYP)
/* Port wide control signals */                                                   
#define VinA_CTL                    (* (reg8 *) VinA__CTL)
/* Drive Modes */
#define VinA_DM0                    (* (reg8 *) VinA__DM0) 
#define VinA_DM1                    (* (reg8 *) VinA__DM1)
#define VinA_DM2                    (* (reg8 *) VinA__DM2) 
/* Input Buffer Disable Override */
#define VinA_INP_DIS                (* (reg8 *) VinA__INP_DIS)
/* LCD Common or Segment Drive */
#define VinA_LCD_COM_SEG            (* (reg8 *) VinA__LCD_COM_SEG)
/* Enable Segment LCD */
#define VinA_LCD_EN                 (* (reg8 *) VinA__LCD_EN)
/* Slew Rate Control */
#define VinA_SLW                    (* (reg8 *) VinA__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define VinA_PRTDSI__CAPS_SEL       (* (reg8 *) VinA__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define VinA_PRTDSI__DBL_SYNC_IN    (* (reg8 *) VinA__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define VinA_PRTDSI__OE_SEL0        (* (reg8 *) VinA__PRTDSI__OE_SEL0) 
#define VinA_PRTDSI__OE_SEL1        (* (reg8 *) VinA__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define VinA_PRTDSI__OUT_SEL0       (* (reg8 *) VinA__PRTDSI__OUT_SEL0) 
#define VinA_PRTDSI__OUT_SEL1       (* (reg8 *) VinA__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define VinA_PRTDSI__SYNC_OUT       (* (reg8 *) VinA__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(VinA__SIO_CFG)
    #define VinA_SIO_HYST_EN        (* (reg8 *) VinA__SIO_HYST_EN)
    #define VinA_SIO_REG_HIFREQ     (* (reg8 *) VinA__SIO_REG_HIFREQ)
    #define VinA_SIO_CFG            (* (reg8 *) VinA__SIO_CFG)
    #define VinA_SIO_DIFF           (* (reg8 *) VinA__SIO_DIFF)
#endif /* (VinA__SIO_CFG) */

/* Interrupt Registers */
#if defined(VinA__INTSTAT)
    #define VinA_INTSTAT            (* (reg8 *) VinA__INTSTAT)
    #define VinA_SNAP               (* (reg8 *) VinA__SNAP)
    
	#define VinA_0_INTTYPE_REG 		(* (reg8 *) VinA__0__INTTYPE)
#endif /* (VinA__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_VinA_H */


/* [] END OF FILE */
