/*******************************************************************************
* File Name: EOCpin.h  
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

#if !defined(CY_PINS_EOCpin_H) /* Pins EOCpin_H */
#define CY_PINS_EOCpin_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "EOCpin_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 EOCpin__PORT == 15 && ((EOCpin__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    EOCpin_Write(uint8 value);
void    EOCpin_SetDriveMode(uint8 mode);
uint8   EOCpin_ReadDataReg(void);
uint8   EOCpin_Read(void);
void    EOCpin_SetInterruptMode(uint16 position, uint16 mode);
uint8   EOCpin_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the EOCpin_SetDriveMode() function.
     *  @{
     */
        #define EOCpin_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define EOCpin_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define EOCpin_DM_RES_UP          PIN_DM_RES_UP
        #define EOCpin_DM_RES_DWN         PIN_DM_RES_DWN
        #define EOCpin_DM_OD_LO           PIN_DM_OD_LO
        #define EOCpin_DM_OD_HI           PIN_DM_OD_HI
        #define EOCpin_DM_STRONG          PIN_DM_STRONG
        #define EOCpin_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define EOCpin_MASK               EOCpin__MASK
#define EOCpin_SHIFT              EOCpin__SHIFT
#define EOCpin_WIDTH              1u

/* Interrupt constants */
#if defined(EOCpin__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in EOCpin_SetInterruptMode() function.
     *  @{
     */
        #define EOCpin_INTR_NONE      (uint16)(0x0000u)
        #define EOCpin_INTR_RISING    (uint16)(0x0001u)
        #define EOCpin_INTR_FALLING   (uint16)(0x0002u)
        #define EOCpin_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define EOCpin_INTR_MASK      (0x01u) 
#endif /* (EOCpin__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define EOCpin_PS                     (* (reg8 *) EOCpin__PS)
/* Data Register */
#define EOCpin_DR                     (* (reg8 *) EOCpin__DR)
/* Port Number */
#define EOCpin_PRT_NUM                (* (reg8 *) EOCpin__PRT) 
/* Connect to Analog Globals */                                                  
#define EOCpin_AG                     (* (reg8 *) EOCpin__AG)                       
/* Analog MUX bux enable */
#define EOCpin_AMUX                   (* (reg8 *) EOCpin__AMUX) 
/* Bidirectional Enable */                                                        
#define EOCpin_BIE                    (* (reg8 *) EOCpin__BIE)
/* Bit-mask for Aliased Register Access */
#define EOCpin_BIT_MASK               (* (reg8 *) EOCpin__BIT_MASK)
/* Bypass Enable */
#define EOCpin_BYP                    (* (reg8 *) EOCpin__BYP)
/* Port wide control signals */                                                   
#define EOCpin_CTL                    (* (reg8 *) EOCpin__CTL)
/* Drive Modes */
#define EOCpin_DM0                    (* (reg8 *) EOCpin__DM0) 
#define EOCpin_DM1                    (* (reg8 *) EOCpin__DM1)
#define EOCpin_DM2                    (* (reg8 *) EOCpin__DM2) 
/* Input Buffer Disable Override */
#define EOCpin_INP_DIS                (* (reg8 *) EOCpin__INP_DIS)
/* LCD Common or Segment Drive */
#define EOCpin_LCD_COM_SEG            (* (reg8 *) EOCpin__LCD_COM_SEG)
/* Enable Segment LCD */
#define EOCpin_LCD_EN                 (* (reg8 *) EOCpin__LCD_EN)
/* Slew Rate Control */
#define EOCpin_SLW                    (* (reg8 *) EOCpin__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define EOCpin_PRTDSI__CAPS_SEL       (* (reg8 *) EOCpin__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define EOCpin_PRTDSI__DBL_SYNC_IN    (* (reg8 *) EOCpin__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define EOCpin_PRTDSI__OE_SEL0        (* (reg8 *) EOCpin__PRTDSI__OE_SEL0) 
#define EOCpin_PRTDSI__OE_SEL1        (* (reg8 *) EOCpin__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define EOCpin_PRTDSI__OUT_SEL0       (* (reg8 *) EOCpin__PRTDSI__OUT_SEL0) 
#define EOCpin_PRTDSI__OUT_SEL1       (* (reg8 *) EOCpin__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define EOCpin_PRTDSI__SYNC_OUT       (* (reg8 *) EOCpin__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(EOCpin__SIO_CFG)
    #define EOCpin_SIO_HYST_EN        (* (reg8 *) EOCpin__SIO_HYST_EN)
    #define EOCpin_SIO_REG_HIFREQ     (* (reg8 *) EOCpin__SIO_REG_HIFREQ)
    #define EOCpin_SIO_CFG            (* (reg8 *) EOCpin__SIO_CFG)
    #define EOCpin_SIO_DIFF           (* (reg8 *) EOCpin__SIO_DIFF)
#endif /* (EOCpin__SIO_CFG) */

/* Interrupt Registers */
#if defined(EOCpin__INTSTAT)
    #define EOCpin_INTSTAT            (* (reg8 *) EOCpin__INTSTAT)
    #define EOCpin_SNAP               (* (reg8 *) EOCpin__SNAP)
    
	#define EOCpin_0_INTTYPE_REG 		(* (reg8 *) EOCpin__0__INTTYPE)
#endif /* (EOCpin__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_EOCpin_H */


/* [] END OF FILE */
