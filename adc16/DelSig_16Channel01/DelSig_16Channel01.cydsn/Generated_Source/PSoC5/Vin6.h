/*******************************************************************************
* File Name: Vin6.h  
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

#if !defined(CY_PINS_Vin6_H) /* Pins Vin6_H */
#define CY_PINS_Vin6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin6_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Vin6__PORT == 15 && ((Vin6__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Vin6_Write(uint8 value);
void    Vin6_SetDriveMode(uint8 mode);
uint8   Vin6_ReadDataReg(void);
uint8   Vin6_Read(void);
void    Vin6_SetInterruptMode(uint16 position, uint16 mode);
uint8   Vin6_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Vin6_SetDriveMode() function.
     *  @{
     */
        #define Vin6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Vin6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Vin6_DM_RES_UP          PIN_DM_RES_UP
        #define Vin6_DM_RES_DWN         PIN_DM_RES_DWN
        #define Vin6_DM_OD_LO           PIN_DM_OD_LO
        #define Vin6_DM_OD_HI           PIN_DM_OD_HI
        #define Vin6_DM_STRONG          PIN_DM_STRONG
        #define Vin6_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Vin6_MASK               Vin6__MASK
#define Vin6_SHIFT              Vin6__SHIFT
#define Vin6_WIDTH              1u

/* Interrupt constants */
#if defined(Vin6__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Vin6_SetInterruptMode() function.
     *  @{
     */
        #define Vin6_INTR_NONE      (uint16)(0x0000u)
        #define Vin6_INTR_RISING    (uint16)(0x0001u)
        #define Vin6_INTR_FALLING   (uint16)(0x0002u)
        #define Vin6_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Vin6_INTR_MASK      (0x01u) 
#endif /* (Vin6__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin6_PS                     (* (reg8 *) Vin6__PS)
/* Data Register */
#define Vin6_DR                     (* (reg8 *) Vin6__DR)
/* Port Number */
#define Vin6_PRT_NUM                (* (reg8 *) Vin6__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin6_AG                     (* (reg8 *) Vin6__AG)                       
/* Analog MUX bux enable */
#define Vin6_AMUX                   (* (reg8 *) Vin6__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin6_BIE                    (* (reg8 *) Vin6__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin6_BIT_MASK               (* (reg8 *) Vin6__BIT_MASK)
/* Bypass Enable */
#define Vin6_BYP                    (* (reg8 *) Vin6__BYP)
/* Port wide control signals */                                                   
#define Vin6_CTL                    (* (reg8 *) Vin6__CTL)
/* Drive Modes */
#define Vin6_DM0                    (* (reg8 *) Vin6__DM0) 
#define Vin6_DM1                    (* (reg8 *) Vin6__DM1)
#define Vin6_DM2                    (* (reg8 *) Vin6__DM2) 
/* Input Buffer Disable Override */
#define Vin6_INP_DIS                (* (reg8 *) Vin6__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin6_LCD_COM_SEG            (* (reg8 *) Vin6__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin6_LCD_EN                 (* (reg8 *) Vin6__LCD_EN)
/* Slew Rate Control */
#define Vin6_SLW                    (* (reg8 *) Vin6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin6_PRTDSI__CAPS_SEL       (* (reg8 *) Vin6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin6_PRTDSI__OE_SEL0        (* (reg8 *) Vin6__PRTDSI__OE_SEL0) 
#define Vin6_PRTDSI__OE_SEL1        (* (reg8 *) Vin6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin6_PRTDSI__OUT_SEL0       (* (reg8 *) Vin6__PRTDSI__OUT_SEL0) 
#define Vin6_PRTDSI__OUT_SEL1       (* (reg8 *) Vin6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin6_PRTDSI__SYNC_OUT       (* (reg8 *) Vin6__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Vin6__SIO_CFG)
    #define Vin6_SIO_HYST_EN        (* (reg8 *) Vin6__SIO_HYST_EN)
    #define Vin6_SIO_REG_HIFREQ     (* (reg8 *) Vin6__SIO_REG_HIFREQ)
    #define Vin6_SIO_CFG            (* (reg8 *) Vin6__SIO_CFG)
    #define Vin6_SIO_DIFF           (* (reg8 *) Vin6__SIO_DIFF)
#endif /* (Vin6__SIO_CFG) */

/* Interrupt Registers */
#if defined(Vin6__INTSTAT)
    #define Vin6_INTSTAT            (* (reg8 *) Vin6__INTSTAT)
    #define Vin6_SNAP               (* (reg8 *) Vin6__SNAP)
    
	#define Vin6_0_INTTYPE_REG 		(* (reg8 *) Vin6__0__INTTYPE)
#endif /* (Vin6__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Vin6_H */


/* [] END OF FILE */
