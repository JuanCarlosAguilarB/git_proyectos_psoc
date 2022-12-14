/*******************************************************************************
* File Name: Vin8.h  
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

#if !defined(CY_PINS_Vin8_H) /* Pins Vin8_H */
#define CY_PINS_Vin8_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin8_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Vin8__PORT == 15 && ((Vin8__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Vin8_Write(uint8 value);
void    Vin8_SetDriveMode(uint8 mode);
uint8   Vin8_ReadDataReg(void);
uint8   Vin8_Read(void);
void    Vin8_SetInterruptMode(uint16 position, uint16 mode);
uint8   Vin8_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Vin8_SetDriveMode() function.
     *  @{
     */
        #define Vin8_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Vin8_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Vin8_DM_RES_UP          PIN_DM_RES_UP
        #define Vin8_DM_RES_DWN         PIN_DM_RES_DWN
        #define Vin8_DM_OD_LO           PIN_DM_OD_LO
        #define Vin8_DM_OD_HI           PIN_DM_OD_HI
        #define Vin8_DM_STRONG          PIN_DM_STRONG
        #define Vin8_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Vin8_MASK               Vin8__MASK
#define Vin8_SHIFT              Vin8__SHIFT
#define Vin8_WIDTH              1u

/* Interrupt constants */
#if defined(Vin8__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Vin8_SetInterruptMode() function.
     *  @{
     */
        #define Vin8_INTR_NONE      (uint16)(0x0000u)
        #define Vin8_INTR_RISING    (uint16)(0x0001u)
        #define Vin8_INTR_FALLING   (uint16)(0x0002u)
        #define Vin8_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Vin8_INTR_MASK      (0x01u) 
#endif /* (Vin8__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin8_PS                     (* (reg8 *) Vin8__PS)
/* Data Register */
#define Vin8_DR                     (* (reg8 *) Vin8__DR)
/* Port Number */
#define Vin8_PRT_NUM                (* (reg8 *) Vin8__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin8_AG                     (* (reg8 *) Vin8__AG)                       
/* Analog MUX bux enable */
#define Vin8_AMUX                   (* (reg8 *) Vin8__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin8_BIE                    (* (reg8 *) Vin8__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin8_BIT_MASK               (* (reg8 *) Vin8__BIT_MASK)
/* Bypass Enable */
#define Vin8_BYP                    (* (reg8 *) Vin8__BYP)
/* Port wide control signals */                                                   
#define Vin8_CTL                    (* (reg8 *) Vin8__CTL)
/* Drive Modes */
#define Vin8_DM0                    (* (reg8 *) Vin8__DM0) 
#define Vin8_DM1                    (* (reg8 *) Vin8__DM1)
#define Vin8_DM2                    (* (reg8 *) Vin8__DM2) 
/* Input Buffer Disable Override */
#define Vin8_INP_DIS                (* (reg8 *) Vin8__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin8_LCD_COM_SEG            (* (reg8 *) Vin8__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin8_LCD_EN                 (* (reg8 *) Vin8__LCD_EN)
/* Slew Rate Control */
#define Vin8_SLW                    (* (reg8 *) Vin8__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin8_PRTDSI__CAPS_SEL       (* (reg8 *) Vin8__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin8_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin8__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin8_PRTDSI__OE_SEL0        (* (reg8 *) Vin8__PRTDSI__OE_SEL0) 
#define Vin8_PRTDSI__OE_SEL1        (* (reg8 *) Vin8__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin8_PRTDSI__OUT_SEL0       (* (reg8 *) Vin8__PRTDSI__OUT_SEL0) 
#define Vin8_PRTDSI__OUT_SEL1       (* (reg8 *) Vin8__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin8_PRTDSI__SYNC_OUT       (* (reg8 *) Vin8__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Vin8__SIO_CFG)
    #define Vin8_SIO_HYST_EN        (* (reg8 *) Vin8__SIO_HYST_EN)
    #define Vin8_SIO_REG_HIFREQ     (* (reg8 *) Vin8__SIO_REG_HIFREQ)
    #define Vin8_SIO_CFG            (* (reg8 *) Vin8__SIO_CFG)
    #define Vin8_SIO_DIFF           (* (reg8 *) Vin8__SIO_DIFF)
#endif /* (Vin8__SIO_CFG) */

/* Interrupt Registers */
#if defined(Vin8__INTSTAT)
    #define Vin8_INTSTAT            (* (reg8 *) Vin8__INTSTAT)
    #define Vin8_SNAP               (* (reg8 *) Vin8__SNAP)
    
	#define Vin8_0_INTTYPE_REG 		(* (reg8 *) Vin8__0__INTTYPE)
#endif /* (Vin8__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Vin8_H */


/* [] END OF FILE */
