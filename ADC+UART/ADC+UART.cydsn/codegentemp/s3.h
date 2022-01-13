/*******************************************************************************
* File Name: s3.h  
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

#if !defined(CY_PINS_s3_H) /* Pins s3_H */
#define CY_PINS_s3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "s3_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 s3__PORT == 15 && ((s3__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    s3_Write(uint8 value);
void    s3_SetDriveMode(uint8 mode);
uint8   s3_ReadDataReg(void);
uint8   s3_Read(void);
void    s3_SetInterruptMode(uint16 position, uint16 mode);
uint8   s3_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the s3_SetDriveMode() function.
     *  @{
     */
        #define s3_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define s3_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define s3_DM_RES_UP          PIN_DM_RES_UP
        #define s3_DM_RES_DWN         PIN_DM_RES_DWN
        #define s3_DM_OD_LO           PIN_DM_OD_LO
        #define s3_DM_OD_HI           PIN_DM_OD_HI
        #define s3_DM_STRONG          PIN_DM_STRONG
        #define s3_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define s3_MASK               s3__MASK
#define s3_SHIFT              s3__SHIFT
#define s3_WIDTH              1u

/* Interrupt constants */
#if defined(s3__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in s3_SetInterruptMode() function.
     *  @{
     */
        #define s3_INTR_NONE      (uint16)(0x0000u)
        #define s3_INTR_RISING    (uint16)(0x0001u)
        #define s3_INTR_FALLING   (uint16)(0x0002u)
        #define s3_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define s3_INTR_MASK      (0x01u) 
#endif /* (s3__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define s3_PS                     (* (reg8 *) s3__PS)
/* Data Register */
#define s3_DR                     (* (reg8 *) s3__DR)
/* Port Number */
#define s3_PRT_NUM                (* (reg8 *) s3__PRT) 
/* Connect to Analog Globals */                                                  
#define s3_AG                     (* (reg8 *) s3__AG)                       
/* Analog MUX bux enable */
#define s3_AMUX                   (* (reg8 *) s3__AMUX) 
/* Bidirectional Enable */                                                        
#define s3_BIE                    (* (reg8 *) s3__BIE)
/* Bit-mask for Aliased Register Access */
#define s3_BIT_MASK               (* (reg8 *) s3__BIT_MASK)
/* Bypass Enable */
#define s3_BYP                    (* (reg8 *) s3__BYP)
/* Port wide control signals */                                                   
#define s3_CTL                    (* (reg8 *) s3__CTL)
/* Drive Modes */
#define s3_DM0                    (* (reg8 *) s3__DM0) 
#define s3_DM1                    (* (reg8 *) s3__DM1)
#define s3_DM2                    (* (reg8 *) s3__DM2) 
/* Input Buffer Disable Override */
#define s3_INP_DIS                (* (reg8 *) s3__INP_DIS)
/* LCD Common or Segment Drive */
#define s3_LCD_COM_SEG            (* (reg8 *) s3__LCD_COM_SEG)
/* Enable Segment LCD */
#define s3_LCD_EN                 (* (reg8 *) s3__LCD_EN)
/* Slew Rate Control */
#define s3_SLW                    (* (reg8 *) s3__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define s3_PRTDSI__CAPS_SEL       (* (reg8 *) s3__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define s3_PRTDSI__DBL_SYNC_IN    (* (reg8 *) s3__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define s3_PRTDSI__OE_SEL0        (* (reg8 *) s3__PRTDSI__OE_SEL0) 
#define s3_PRTDSI__OE_SEL1        (* (reg8 *) s3__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define s3_PRTDSI__OUT_SEL0       (* (reg8 *) s3__PRTDSI__OUT_SEL0) 
#define s3_PRTDSI__OUT_SEL1       (* (reg8 *) s3__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define s3_PRTDSI__SYNC_OUT       (* (reg8 *) s3__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(s3__SIO_CFG)
    #define s3_SIO_HYST_EN        (* (reg8 *) s3__SIO_HYST_EN)
    #define s3_SIO_REG_HIFREQ     (* (reg8 *) s3__SIO_REG_HIFREQ)
    #define s3_SIO_CFG            (* (reg8 *) s3__SIO_CFG)
    #define s3_SIO_DIFF           (* (reg8 *) s3__SIO_DIFF)
#endif /* (s3__SIO_CFG) */

/* Interrupt Registers */
#if defined(s3__INTSTAT)
    #define s3_INTSTAT            (* (reg8 *) s3__INTSTAT)
    #define s3_SNAP               (* (reg8 *) s3__SNAP)
    
	#define s3_0_INTTYPE_REG 		(* (reg8 *) s3__0__INTTYPE)
#endif /* (s3__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_s3_H */


/* [] END OF FILE */
