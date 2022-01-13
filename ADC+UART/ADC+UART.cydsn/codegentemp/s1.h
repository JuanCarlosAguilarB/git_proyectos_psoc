/*******************************************************************************
* File Name: s1.h  
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

#if !defined(CY_PINS_s1_H) /* Pins s1_H */
#define CY_PINS_s1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "s1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 s1__PORT == 15 && ((s1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    s1_Write(uint8 value);
void    s1_SetDriveMode(uint8 mode);
uint8   s1_ReadDataReg(void);
uint8   s1_Read(void);
void    s1_SetInterruptMode(uint16 position, uint16 mode);
uint8   s1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the s1_SetDriveMode() function.
     *  @{
     */
        #define s1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define s1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define s1_DM_RES_UP          PIN_DM_RES_UP
        #define s1_DM_RES_DWN         PIN_DM_RES_DWN
        #define s1_DM_OD_LO           PIN_DM_OD_LO
        #define s1_DM_OD_HI           PIN_DM_OD_HI
        #define s1_DM_STRONG          PIN_DM_STRONG
        #define s1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define s1_MASK               s1__MASK
#define s1_SHIFT              s1__SHIFT
#define s1_WIDTH              1u

/* Interrupt constants */
#if defined(s1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in s1_SetInterruptMode() function.
     *  @{
     */
        #define s1_INTR_NONE      (uint16)(0x0000u)
        #define s1_INTR_RISING    (uint16)(0x0001u)
        #define s1_INTR_FALLING   (uint16)(0x0002u)
        #define s1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define s1_INTR_MASK      (0x01u) 
#endif /* (s1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define s1_PS                     (* (reg8 *) s1__PS)
/* Data Register */
#define s1_DR                     (* (reg8 *) s1__DR)
/* Port Number */
#define s1_PRT_NUM                (* (reg8 *) s1__PRT) 
/* Connect to Analog Globals */                                                  
#define s1_AG                     (* (reg8 *) s1__AG)                       
/* Analog MUX bux enable */
#define s1_AMUX                   (* (reg8 *) s1__AMUX) 
/* Bidirectional Enable */                                                        
#define s1_BIE                    (* (reg8 *) s1__BIE)
/* Bit-mask for Aliased Register Access */
#define s1_BIT_MASK               (* (reg8 *) s1__BIT_MASK)
/* Bypass Enable */
#define s1_BYP                    (* (reg8 *) s1__BYP)
/* Port wide control signals */                                                   
#define s1_CTL                    (* (reg8 *) s1__CTL)
/* Drive Modes */
#define s1_DM0                    (* (reg8 *) s1__DM0) 
#define s1_DM1                    (* (reg8 *) s1__DM1)
#define s1_DM2                    (* (reg8 *) s1__DM2) 
/* Input Buffer Disable Override */
#define s1_INP_DIS                (* (reg8 *) s1__INP_DIS)
/* LCD Common or Segment Drive */
#define s1_LCD_COM_SEG            (* (reg8 *) s1__LCD_COM_SEG)
/* Enable Segment LCD */
#define s1_LCD_EN                 (* (reg8 *) s1__LCD_EN)
/* Slew Rate Control */
#define s1_SLW                    (* (reg8 *) s1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define s1_PRTDSI__CAPS_SEL       (* (reg8 *) s1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define s1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) s1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define s1_PRTDSI__OE_SEL0        (* (reg8 *) s1__PRTDSI__OE_SEL0) 
#define s1_PRTDSI__OE_SEL1        (* (reg8 *) s1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define s1_PRTDSI__OUT_SEL0       (* (reg8 *) s1__PRTDSI__OUT_SEL0) 
#define s1_PRTDSI__OUT_SEL1       (* (reg8 *) s1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define s1_PRTDSI__SYNC_OUT       (* (reg8 *) s1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(s1__SIO_CFG)
    #define s1_SIO_HYST_EN        (* (reg8 *) s1__SIO_HYST_EN)
    #define s1_SIO_REG_HIFREQ     (* (reg8 *) s1__SIO_REG_HIFREQ)
    #define s1_SIO_CFG            (* (reg8 *) s1__SIO_CFG)
    #define s1_SIO_DIFF           (* (reg8 *) s1__SIO_DIFF)
#endif /* (s1__SIO_CFG) */

/* Interrupt Registers */
#if defined(s1__INTSTAT)
    #define s1_INTSTAT            (* (reg8 *) s1__INTSTAT)
    #define s1_SNAP               (* (reg8 *) s1__SNAP)
    
	#define s1_0_INTTYPE_REG 		(* (reg8 *) s1__0__INTTYPE)
#endif /* (s1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_s1_H */


/* [] END OF FILE */
