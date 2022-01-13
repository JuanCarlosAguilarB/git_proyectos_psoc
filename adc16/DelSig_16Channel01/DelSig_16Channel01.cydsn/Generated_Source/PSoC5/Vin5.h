/*******************************************************************************
* File Name: Vin5.h  
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

#if !defined(CY_PINS_Vin5_H) /* Pins Vin5_H */
#define CY_PINS_Vin5_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin5_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Vin5__PORT == 15 && ((Vin5__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Vin5_Write(uint8 value);
void    Vin5_SetDriveMode(uint8 mode);
uint8   Vin5_ReadDataReg(void);
uint8   Vin5_Read(void);
void    Vin5_SetInterruptMode(uint16 position, uint16 mode);
uint8   Vin5_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Vin5_SetDriveMode() function.
     *  @{
     */
        #define Vin5_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Vin5_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Vin5_DM_RES_UP          PIN_DM_RES_UP
        #define Vin5_DM_RES_DWN         PIN_DM_RES_DWN
        #define Vin5_DM_OD_LO           PIN_DM_OD_LO
        #define Vin5_DM_OD_HI           PIN_DM_OD_HI
        #define Vin5_DM_STRONG          PIN_DM_STRONG
        #define Vin5_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Vin5_MASK               Vin5__MASK
#define Vin5_SHIFT              Vin5__SHIFT
#define Vin5_WIDTH              1u

/* Interrupt constants */
#if defined(Vin5__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Vin5_SetInterruptMode() function.
     *  @{
     */
        #define Vin5_INTR_NONE      (uint16)(0x0000u)
        #define Vin5_INTR_RISING    (uint16)(0x0001u)
        #define Vin5_INTR_FALLING   (uint16)(0x0002u)
        #define Vin5_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Vin5_INTR_MASK      (0x01u) 
#endif /* (Vin5__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin5_PS                     (* (reg8 *) Vin5__PS)
/* Data Register */
#define Vin5_DR                     (* (reg8 *) Vin5__DR)
/* Port Number */
#define Vin5_PRT_NUM                (* (reg8 *) Vin5__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin5_AG                     (* (reg8 *) Vin5__AG)                       
/* Analog MUX bux enable */
#define Vin5_AMUX                   (* (reg8 *) Vin5__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin5_BIE                    (* (reg8 *) Vin5__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin5_BIT_MASK               (* (reg8 *) Vin5__BIT_MASK)
/* Bypass Enable */
#define Vin5_BYP                    (* (reg8 *) Vin5__BYP)
/* Port wide control signals */                                                   
#define Vin5_CTL                    (* (reg8 *) Vin5__CTL)
/* Drive Modes */
#define Vin5_DM0                    (* (reg8 *) Vin5__DM0) 
#define Vin5_DM1                    (* (reg8 *) Vin5__DM1)
#define Vin5_DM2                    (* (reg8 *) Vin5__DM2) 
/* Input Buffer Disable Override */
#define Vin5_INP_DIS                (* (reg8 *) Vin5__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin5_LCD_COM_SEG            (* (reg8 *) Vin5__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin5_LCD_EN                 (* (reg8 *) Vin5__LCD_EN)
/* Slew Rate Control */
#define Vin5_SLW                    (* (reg8 *) Vin5__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin5_PRTDSI__CAPS_SEL       (* (reg8 *) Vin5__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin5_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin5__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin5_PRTDSI__OE_SEL0        (* (reg8 *) Vin5__PRTDSI__OE_SEL0) 
#define Vin5_PRTDSI__OE_SEL1        (* (reg8 *) Vin5__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin5_PRTDSI__OUT_SEL0       (* (reg8 *) Vin5__PRTDSI__OUT_SEL0) 
#define Vin5_PRTDSI__OUT_SEL1       (* (reg8 *) Vin5__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin5_PRTDSI__SYNC_OUT       (* (reg8 *) Vin5__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Vin5__SIO_CFG)
    #define Vin5_SIO_HYST_EN        (* (reg8 *) Vin5__SIO_HYST_EN)
    #define Vin5_SIO_REG_HIFREQ     (* (reg8 *) Vin5__SIO_REG_HIFREQ)
    #define Vin5_SIO_CFG            (* (reg8 *) Vin5__SIO_CFG)
    #define Vin5_SIO_DIFF           (* (reg8 *) Vin5__SIO_DIFF)
#endif /* (Vin5__SIO_CFG) */

/* Interrupt Registers */
#if defined(Vin5__INTSTAT)
    #define Vin5_INTSTAT            (* (reg8 *) Vin5__INTSTAT)
    #define Vin5_SNAP               (* (reg8 *) Vin5__SNAP)
    
	#define Vin5_0_INTTYPE_REG 		(* (reg8 *) Vin5__0__INTTYPE)
#endif /* (Vin5__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Vin5_H */


/* [] END OF FILE */