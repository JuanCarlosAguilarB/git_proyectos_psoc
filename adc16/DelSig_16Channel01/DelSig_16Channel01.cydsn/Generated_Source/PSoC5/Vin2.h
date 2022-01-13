/*******************************************************************************
* File Name: Vin2.h  
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

#if !defined(CY_PINS_Vin2_H) /* Pins Vin2_H */
#define CY_PINS_Vin2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Vin2__PORT == 15 && ((Vin2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Vin2_Write(uint8 value);
void    Vin2_SetDriveMode(uint8 mode);
uint8   Vin2_ReadDataReg(void);
uint8   Vin2_Read(void);
void    Vin2_SetInterruptMode(uint16 position, uint16 mode);
uint8   Vin2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Vin2_SetDriveMode() function.
     *  @{
     */
        #define Vin2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Vin2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Vin2_DM_RES_UP          PIN_DM_RES_UP
        #define Vin2_DM_RES_DWN         PIN_DM_RES_DWN
        #define Vin2_DM_OD_LO           PIN_DM_OD_LO
        #define Vin2_DM_OD_HI           PIN_DM_OD_HI
        #define Vin2_DM_STRONG          PIN_DM_STRONG
        #define Vin2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Vin2_MASK               Vin2__MASK
#define Vin2_SHIFT              Vin2__SHIFT
#define Vin2_WIDTH              1u

/* Interrupt constants */
#if defined(Vin2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Vin2_SetInterruptMode() function.
     *  @{
     */
        #define Vin2_INTR_NONE      (uint16)(0x0000u)
        #define Vin2_INTR_RISING    (uint16)(0x0001u)
        #define Vin2_INTR_FALLING   (uint16)(0x0002u)
        #define Vin2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Vin2_INTR_MASK      (0x01u) 
#endif /* (Vin2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin2_PS                     (* (reg8 *) Vin2__PS)
/* Data Register */
#define Vin2_DR                     (* (reg8 *) Vin2__DR)
/* Port Number */
#define Vin2_PRT_NUM                (* (reg8 *) Vin2__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin2_AG                     (* (reg8 *) Vin2__AG)                       
/* Analog MUX bux enable */
#define Vin2_AMUX                   (* (reg8 *) Vin2__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin2_BIE                    (* (reg8 *) Vin2__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin2_BIT_MASK               (* (reg8 *) Vin2__BIT_MASK)
/* Bypass Enable */
#define Vin2_BYP                    (* (reg8 *) Vin2__BYP)
/* Port wide control signals */                                                   
#define Vin2_CTL                    (* (reg8 *) Vin2__CTL)
/* Drive Modes */
#define Vin2_DM0                    (* (reg8 *) Vin2__DM0) 
#define Vin2_DM1                    (* (reg8 *) Vin2__DM1)
#define Vin2_DM2                    (* (reg8 *) Vin2__DM2) 
/* Input Buffer Disable Override */
#define Vin2_INP_DIS                (* (reg8 *) Vin2__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin2_LCD_COM_SEG            (* (reg8 *) Vin2__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin2_LCD_EN                 (* (reg8 *) Vin2__LCD_EN)
/* Slew Rate Control */
#define Vin2_SLW                    (* (reg8 *) Vin2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin2_PRTDSI__CAPS_SEL       (* (reg8 *) Vin2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin2_PRTDSI__OE_SEL0        (* (reg8 *) Vin2__PRTDSI__OE_SEL0) 
#define Vin2_PRTDSI__OE_SEL1        (* (reg8 *) Vin2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin2_PRTDSI__OUT_SEL0       (* (reg8 *) Vin2__PRTDSI__OUT_SEL0) 
#define Vin2_PRTDSI__OUT_SEL1       (* (reg8 *) Vin2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin2_PRTDSI__SYNC_OUT       (* (reg8 *) Vin2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Vin2__SIO_CFG)
    #define Vin2_SIO_HYST_EN        (* (reg8 *) Vin2__SIO_HYST_EN)
    #define Vin2_SIO_REG_HIFREQ     (* (reg8 *) Vin2__SIO_REG_HIFREQ)
    #define Vin2_SIO_CFG            (* (reg8 *) Vin2__SIO_CFG)
    #define Vin2_SIO_DIFF           (* (reg8 *) Vin2__SIO_DIFF)
#endif /* (Vin2__SIO_CFG) */

/* Interrupt Registers */
#if defined(Vin2__INTSTAT)
    #define Vin2_INTSTAT            (* (reg8 *) Vin2__INTSTAT)
    #define Vin2_SNAP               (* (reg8 *) Vin2__SNAP)
    
	#define Vin2_0_INTTYPE_REG 		(* (reg8 *) Vin2__0__INTTYPE)
#endif /* (Vin2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Vin2_H */


/* [] END OF FILE */
