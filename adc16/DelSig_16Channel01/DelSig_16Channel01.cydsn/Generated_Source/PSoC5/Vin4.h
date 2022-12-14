/*******************************************************************************
* File Name: Vin4.h  
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

#if !defined(CY_PINS_Vin4_H) /* Pins Vin4_H */
#define CY_PINS_Vin4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin4_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Vin4__PORT == 15 && ((Vin4__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Vin4_Write(uint8 value);
void    Vin4_SetDriveMode(uint8 mode);
uint8   Vin4_ReadDataReg(void);
uint8   Vin4_Read(void);
void    Vin4_SetInterruptMode(uint16 position, uint16 mode);
uint8   Vin4_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Vin4_SetDriveMode() function.
     *  @{
     */
        #define Vin4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Vin4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Vin4_DM_RES_UP          PIN_DM_RES_UP
        #define Vin4_DM_RES_DWN         PIN_DM_RES_DWN
        #define Vin4_DM_OD_LO           PIN_DM_OD_LO
        #define Vin4_DM_OD_HI           PIN_DM_OD_HI
        #define Vin4_DM_STRONG          PIN_DM_STRONG
        #define Vin4_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Vin4_MASK               Vin4__MASK
#define Vin4_SHIFT              Vin4__SHIFT
#define Vin4_WIDTH              1u

/* Interrupt constants */
#if defined(Vin4__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Vin4_SetInterruptMode() function.
     *  @{
     */
        #define Vin4_INTR_NONE      (uint16)(0x0000u)
        #define Vin4_INTR_RISING    (uint16)(0x0001u)
        #define Vin4_INTR_FALLING   (uint16)(0x0002u)
        #define Vin4_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Vin4_INTR_MASK      (0x01u) 
#endif /* (Vin4__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin4_PS                     (* (reg8 *) Vin4__PS)
/* Data Register */
#define Vin4_DR                     (* (reg8 *) Vin4__DR)
/* Port Number */
#define Vin4_PRT_NUM                (* (reg8 *) Vin4__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin4_AG                     (* (reg8 *) Vin4__AG)                       
/* Analog MUX bux enable */
#define Vin4_AMUX                   (* (reg8 *) Vin4__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin4_BIE                    (* (reg8 *) Vin4__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin4_BIT_MASK               (* (reg8 *) Vin4__BIT_MASK)
/* Bypass Enable */
#define Vin4_BYP                    (* (reg8 *) Vin4__BYP)
/* Port wide control signals */                                                   
#define Vin4_CTL                    (* (reg8 *) Vin4__CTL)
/* Drive Modes */
#define Vin4_DM0                    (* (reg8 *) Vin4__DM0) 
#define Vin4_DM1                    (* (reg8 *) Vin4__DM1)
#define Vin4_DM2                    (* (reg8 *) Vin4__DM2) 
/* Input Buffer Disable Override */
#define Vin4_INP_DIS                (* (reg8 *) Vin4__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin4_LCD_COM_SEG            (* (reg8 *) Vin4__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin4_LCD_EN                 (* (reg8 *) Vin4__LCD_EN)
/* Slew Rate Control */
#define Vin4_SLW                    (* (reg8 *) Vin4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin4_PRTDSI__CAPS_SEL       (* (reg8 *) Vin4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin4_PRTDSI__OE_SEL0        (* (reg8 *) Vin4__PRTDSI__OE_SEL0) 
#define Vin4_PRTDSI__OE_SEL1        (* (reg8 *) Vin4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin4_PRTDSI__OUT_SEL0       (* (reg8 *) Vin4__PRTDSI__OUT_SEL0) 
#define Vin4_PRTDSI__OUT_SEL1       (* (reg8 *) Vin4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin4_PRTDSI__SYNC_OUT       (* (reg8 *) Vin4__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Vin4__SIO_CFG)
    #define Vin4_SIO_HYST_EN        (* (reg8 *) Vin4__SIO_HYST_EN)
    #define Vin4_SIO_REG_HIFREQ     (* (reg8 *) Vin4__SIO_REG_HIFREQ)
    #define Vin4_SIO_CFG            (* (reg8 *) Vin4__SIO_CFG)
    #define Vin4_SIO_DIFF           (* (reg8 *) Vin4__SIO_DIFF)
#endif /* (Vin4__SIO_CFG) */

/* Interrupt Registers */
#if defined(Vin4__INTSTAT)
    #define Vin4_INTSTAT            (* (reg8 *) Vin4__INTSTAT)
    #define Vin4_SNAP               (* (reg8 *) Vin4__SNAP)
    
	#define Vin4_0_INTTYPE_REG 		(* (reg8 *) Vin4__0__INTTYPE)
#endif /* (Vin4__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Vin4_H */


/* [] END OF FILE */
