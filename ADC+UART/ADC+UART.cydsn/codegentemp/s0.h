/*******************************************************************************
* File Name: s0.h  
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

#if !defined(CY_PINS_s0_H) /* Pins s0_H */
#define CY_PINS_s0_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "s0_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 s0__PORT == 15 && ((s0__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    s0_Write(uint8 value);
void    s0_SetDriveMode(uint8 mode);
uint8   s0_ReadDataReg(void);
uint8   s0_Read(void);
void    s0_SetInterruptMode(uint16 position, uint16 mode);
uint8   s0_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the s0_SetDriveMode() function.
     *  @{
     */
        #define s0_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define s0_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define s0_DM_RES_UP          PIN_DM_RES_UP
        #define s0_DM_RES_DWN         PIN_DM_RES_DWN
        #define s0_DM_OD_LO           PIN_DM_OD_LO
        #define s0_DM_OD_HI           PIN_DM_OD_HI
        #define s0_DM_STRONG          PIN_DM_STRONG
        #define s0_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define s0_MASK               s0__MASK
#define s0_SHIFT              s0__SHIFT
#define s0_WIDTH              1u

/* Interrupt constants */
#if defined(s0__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in s0_SetInterruptMode() function.
     *  @{
     */
        #define s0_INTR_NONE      (uint16)(0x0000u)
        #define s0_INTR_RISING    (uint16)(0x0001u)
        #define s0_INTR_FALLING   (uint16)(0x0002u)
        #define s0_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define s0_INTR_MASK      (0x01u) 
#endif /* (s0__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define s0_PS                     (* (reg8 *) s0__PS)
/* Data Register */
#define s0_DR                     (* (reg8 *) s0__DR)
/* Port Number */
#define s0_PRT_NUM                (* (reg8 *) s0__PRT) 
/* Connect to Analog Globals */                                                  
#define s0_AG                     (* (reg8 *) s0__AG)                       
/* Analog MUX bux enable */
#define s0_AMUX                   (* (reg8 *) s0__AMUX) 
/* Bidirectional Enable */                                                        
#define s0_BIE                    (* (reg8 *) s0__BIE)
/* Bit-mask for Aliased Register Access */
#define s0_BIT_MASK               (* (reg8 *) s0__BIT_MASK)
/* Bypass Enable */
#define s0_BYP                    (* (reg8 *) s0__BYP)
/* Port wide control signals */                                                   
#define s0_CTL                    (* (reg8 *) s0__CTL)
/* Drive Modes */
#define s0_DM0                    (* (reg8 *) s0__DM0) 
#define s0_DM1                    (* (reg8 *) s0__DM1)
#define s0_DM2                    (* (reg8 *) s0__DM2) 
/* Input Buffer Disable Override */
#define s0_INP_DIS                (* (reg8 *) s0__INP_DIS)
/* LCD Common or Segment Drive */
#define s0_LCD_COM_SEG            (* (reg8 *) s0__LCD_COM_SEG)
/* Enable Segment LCD */
#define s0_LCD_EN                 (* (reg8 *) s0__LCD_EN)
/* Slew Rate Control */
#define s0_SLW                    (* (reg8 *) s0__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define s0_PRTDSI__CAPS_SEL       (* (reg8 *) s0__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define s0_PRTDSI__DBL_SYNC_IN    (* (reg8 *) s0__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define s0_PRTDSI__OE_SEL0        (* (reg8 *) s0__PRTDSI__OE_SEL0) 
#define s0_PRTDSI__OE_SEL1        (* (reg8 *) s0__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define s0_PRTDSI__OUT_SEL0       (* (reg8 *) s0__PRTDSI__OUT_SEL0) 
#define s0_PRTDSI__OUT_SEL1       (* (reg8 *) s0__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define s0_PRTDSI__SYNC_OUT       (* (reg8 *) s0__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(s0__SIO_CFG)
    #define s0_SIO_HYST_EN        (* (reg8 *) s0__SIO_HYST_EN)
    #define s0_SIO_REG_HIFREQ     (* (reg8 *) s0__SIO_REG_HIFREQ)
    #define s0_SIO_CFG            (* (reg8 *) s0__SIO_CFG)
    #define s0_SIO_DIFF           (* (reg8 *) s0__SIO_DIFF)
#endif /* (s0__SIO_CFG) */

/* Interrupt Registers */
#if defined(s0__INTSTAT)
    #define s0_INTSTAT            (* (reg8 *) s0__INTSTAT)
    #define s0_SNAP               (* (reg8 *) s0__SNAP)
    
	#define s0_0_INTTYPE_REG 		(* (reg8 *) s0__0__INTTYPE)
#endif /* (s0__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_s0_H */


/* [] END OF FILE */
