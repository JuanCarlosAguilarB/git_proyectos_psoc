/*******************************************************************************
* File Name: s2.h  
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

#if !defined(CY_PINS_s2_H) /* Pins s2_H */
#define CY_PINS_s2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "s2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 s2__PORT == 15 && ((s2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    s2_Write(uint8 value);
void    s2_SetDriveMode(uint8 mode);
uint8   s2_ReadDataReg(void);
uint8   s2_Read(void);
void    s2_SetInterruptMode(uint16 position, uint16 mode);
uint8   s2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the s2_SetDriveMode() function.
     *  @{
     */
        #define s2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define s2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define s2_DM_RES_UP          PIN_DM_RES_UP
        #define s2_DM_RES_DWN         PIN_DM_RES_DWN
        #define s2_DM_OD_LO           PIN_DM_OD_LO
        #define s2_DM_OD_HI           PIN_DM_OD_HI
        #define s2_DM_STRONG          PIN_DM_STRONG
        #define s2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define s2_MASK               s2__MASK
#define s2_SHIFT              s2__SHIFT
#define s2_WIDTH              1u

/* Interrupt constants */
#if defined(s2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in s2_SetInterruptMode() function.
     *  @{
     */
        #define s2_INTR_NONE      (uint16)(0x0000u)
        #define s2_INTR_RISING    (uint16)(0x0001u)
        #define s2_INTR_FALLING   (uint16)(0x0002u)
        #define s2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define s2_INTR_MASK      (0x01u) 
#endif /* (s2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define s2_PS                     (* (reg8 *) s2__PS)
/* Data Register */
#define s2_DR                     (* (reg8 *) s2__DR)
/* Port Number */
#define s2_PRT_NUM                (* (reg8 *) s2__PRT) 
/* Connect to Analog Globals */                                                  
#define s2_AG                     (* (reg8 *) s2__AG)                       
/* Analog MUX bux enable */
#define s2_AMUX                   (* (reg8 *) s2__AMUX) 
/* Bidirectional Enable */                                                        
#define s2_BIE                    (* (reg8 *) s2__BIE)
/* Bit-mask for Aliased Register Access */
#define s2_BIT_MASK               (* (reg8 *) s2__BIT_MASK)
/* Bypass Enable */
#define s2_BYP                    (* (reg8 *) s2__BYP)
/* Port wide control signals */                                                   
#define s2_CTL                    (* (reg8 *) s2__CTL)
/* Drive Modes */
#define s2_DM0                    (* (reg8 *) s2__DM0) 
#define s2_DM1                    (* (reg8 *) s2__DM1)
#define s2_DM2                    (* (reg8 *) s2__DM2) 
/* Input Buffer Disable Override */
#define s2_INP_DIS                (* (reg8 *) s2__INP_DIS)
/* LCD Common or Segment Drive */
#define s2_LCD_COM_SEG            (* (reg8 *) s2__LCD_COM_SEG)
/* Enable Segment LCD */
#define s2_LCD_EN                 (* (reg8 *) s2__LCD_EN)
/* Slew Rate Control */
#define s2_SLW                    (* (reg8 *) s2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define s2_PRTDSI__CAPS_SEL       (* (reg8 *) s2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define s2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) s2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define s2_PRTDSI__OE_SEL0        (* (reg8 *) s2__PRTDSI__OE_SEL0) 
#define s2_PRTDSI__OE_SEL1        (* (reg8 *) s2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define s2_PRTDSI__OUT_SEL0       (* (reg8 *) s2__PRTDSI__OUT_SEL0) 
#define s2_PRTDSI__OUT_SEL1       (* (reg8 *) s2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define s2_PRTDSI__SYNC_OUT       (* (reg8 *) s2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(s2__SIO_CFG)
    #define s2_SIO_HYST_EN        (* (reg8 *) s2__SIO_HYST_EN)
    #define s2_SIO_REG_HIFREQ     (* (reg8 *) s2__SIO_REG_HIFREQ)
    #define s2_SIO_CFG            (* (reg8 *) s2__SIO_CFG)
    #define s2_SIO_DIFF           (* (reg8 *) s2__SIO_DIFF)
#endif /* (s2__SIO_CFG) */

/* Interrupt Registers */
#if defined(s2__INTSTAT)
    #define s2_INTSTAT            (* (reg8 *) s2__INTSTAT)
    #define s2_SNAP               (* (reg8 *) s2__SNAP)
    
	#define s2_0_INTTYPE_REG 		(* (reg8 *) s2__0__INTTYPE)
#endif /* (s2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_s2_H */


/* [] END OF FILE */
