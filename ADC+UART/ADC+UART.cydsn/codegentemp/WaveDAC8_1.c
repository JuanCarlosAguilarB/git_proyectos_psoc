/*******************************************************************************
* File Name: WaveDAC8_1.c
* Version 2.10
*
* Description:
*  This file provides the source code for the 8-bit Waveform DAC 
*  (WaveDAC8) Component.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "WaveDAC8_1.h"

uint8  WaveDAC8_1_initVar = 0u;

const uint8 CYCODE WaveDAC8_1_wave1[WaveDAC8_1_WAVE1_LENGTH] = { 241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u,2u };
const uint8 CYCODE WaveDAC8_1_wave2[WaveDAC8_1_WAVE2_LENGTH] = { 128u,130u,132u,135u,138u,140u,143u,145u,148u,150u,152u,155u,158u,160u,162u,165u,168u,170u,172u,175u,178u,180u,182u,185u,188u,190u,192u,195u,198u,200u,202u,205u,208u,210u,213u,215u,218u,220u,222u,225u,228u,230u,232u,235u,238u,240u,242u,245u,248u,250u,252u,250u,248u,245u,242u,240u,238u,235u,232u,230u,228u,225u,222u,220u,218u,215u,212u,210u,208u,205u,202u,200u,198u,195u,192u,190u,188u,185u,182u,180u,178u,175u,173u,170u,168u,165u,162u,160u,158u,155u,152u,150u,148u,145u,143u,140u,138u,135u,132u,130u,128u,125u,122u,120u,118u,115u,112u,110u,107u,105u,102u,100u,97u,95u,93u,90u,88u,85u,83u,80u,78u,75u,73u,70u,68u,65u,62u,60u,57u,55u,52u,50u,47u,45u,42u,40u,37u,35u,33u,30u,28u,25u,23u,20u,18u,15u,13u,10u,8u,5u,3u,5u,8u,10u,13u,15u,18u,20u,23u,25u,28u,30u,33u,35u,37u,40u,42u,45u,47u,50u,52u,55u,57u,60u,62u,65u,68u,70u,73u,75u,78u,80u,83u,85u,88u,90u,93u,95u,97u,100u,102u,105u,107u,110u,112u,115u,118u,120u,122u,125u };

static uint8  WaveDAC8_1_Wave1Chan;
static uint8  WaveDAC8_1_Wave2Chan;
static uint8  WaveDAC8_1_Wave1TD;
static uint8  WaveDAC8_1_Wave2TD;


/*******************************************************************************
* Function Name: WaveDAC8_1_Init
********************************************************************************
*
* Summary:
*  Initializes component with parameters set in the customizer.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_1_Init(void) 
{
	WaveDAC8_1_VDAC8_Init();
	WaveDAC8_1_VDAC8_SetSpeed(WaveDAC8_1_HIGHSPEED);
	WaveDAC8_1_VDAC8_SetRange(WaveDAC8_1_DAC_RANGE);

	#if(WaveDAC8_1_DAC_MODE == WaveDAC8_1_CURRENT_MODE)
		WaveDAC8_1_IDAC8_SetPolarity(WaveDAC8_1_DAC_POL);
	#endif /* WaveDAC8_1_DAC_MODE == WaveDAC8_1_CURRENT_MODE */

	#if(WaveDAC8_1_OUT_MODE == WaveDAC8_1_BUFFER_MODE)
	   WaveDAC8_1_BuffAmp_Init();
	#endif /* WaveDAC8_1_OUT_MODE == WaveDAC8_1_BUFFER_MODE */

	/* Get the TD Number for the DMA channel 1 and 2   */
	WaveDAC8_1_Wave1TD = CyDmaTdAllocate();
	WaveDAC8_1_Wave2TD = CyDmaTdAllocate();
	
	/* Initialize waveform pointers  */
	WaveDAC8_1_Wave1Setup(WaveDAC8_1_wave1, WaveDAC8_1_WAVE1_LENGTH) ;
	WaveDAC8_1_Wave2Setup(WaveDAC8_1_wave2, WaveDAC8_1_WAVE2_LENGTH) ;
	
	/* Initialize the internal clock if one present  */
	#if defined(WaveDAC8_1_DacClk_PHASE)
	   WaveDAC8_1_DacClk_SetPhase(WaveDAC8_1_CLK_PHASE_0nS);
	#endif /* defined(WaveDAC8_1_DacClk_PHASE) */
}


/*******************************************************************************
* Function Name: WaveDAC8_1_Enable
********************************************************************************
*  
* Summary: 
*  Enables the DAC block and DMA operation.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_1_Enable(void) 
{
	WaveDAC8_1_VDAC8_Enable();

	#if(WaveDAC8_1_OUT_MODE == WaveDAC8_1_BUFFER_MODE)
	   WaveDAC8_1_BuffAmp_Enable();
	#endif /* WaveDAC8_1_OUT_MODE == WaveDAC8_1_BUFFER_MODE */

	/* 
	* Enable the channel. It is configured to remember the TD value so that
	* it can be restored from the place where it has been stopped.
	*/
	(void)CyDmaChEnable(WaveDAC8_1_Wave1Chan, 1u);
	(void)CyDmaChEnable(WaveDAC8_1_Wave2Chan, 1u);
	
	/* set the initial value */
	WaveDAC8_1_SetValue(0u);
	
	#if(WaveDAC8_1_CLOCK_SRC == WaveDAC8_1_CLOCK_INT)  	
	   WaveDAC8_1_DacClk_Start();
	#endif /* WaveDAC8_1_CLOCK_SRC == WaveDAC8_1_CLOCK_INT */
}


/*******************************************************************************
* Function Name: WaveDAC8_1_Start
********************************************************************************
*
* Summary:
*  The start function initializes the voltage DAC with the default values, 
*  and sets the power to the given level.  A power level of 0, is the same as 
*  executing the stop function.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void WaveDAC8_1_Start(void) 
{
	/* If not Initialized then initialize all required hardware and software */
	if(WaveDAC8_1_initVar == 0u)
	{
		WaveDAC8_1_Init();
		WaveDAC8_1_initVar = 1u;
	}
	
	WaveDAC8_1_Enable();
}


/*******************************************************************************
* Function Name: WaveDAC8_1_StartEx
********************************************************************************
*
* Summary:
*  The StartEx function sets pointers and sizes for both waveforms
*  and then starts the component.
*
* Parameters:  
*   uint8 * wavePtr1:     Pointer to the waveform 1 array.
*   uint16  sampleSize1:  The amount of samples in the waveform 1.
*   uint8 * wavePtr2:     Pointer to the waveform 2 array.
*   uint16  sampleSize2:  The amount of samples in the waveform 2.
*
* Return: 
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void WaveDAC8_1_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)

{
	WaveDAC8_1_Wave1Setup(wavePtr1, sampleSize1);
	WaveDAC8_1_Wave2Setup(wavePtr2, sampleSize2);
	WaveDAC8_1_Start();
}


/*******************************************************************************
* Function Name: WaveDAC8_1_Stop
********************************************************************************
*
* Summary:
*  Stops the clock (if internal), disables the DMA channels
*  and powers down the DAC.
*
* Parameters:  
*  None  
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_1_Stop(void) 
{
	/* Turn off internal clock, if one present */
	#if(WaveDAC8_1_CLOCK_SRC == WaveDAC8_1_CLOCK_INT)  	
	   WaveDAC8_1_DacClk_Stop();
	#endif /* WaveDAC8_1_CLOCK_SRC == WaveDAC8_1_CLOCK_INT */
	
	/* Disble DMA channels */
	(void)CyDmaChDisable(WaveDAC8_1_Wave1Chan);
	(void)CyDmaChDisable(WaveDAC8_1_Wave2Chan);

	/* Disable power to DAC */
	WaveDAC8_1_VDAC8_Stop();
}


/*******************************************************************************
* Function Name: WaveDAC8_1_Wave1Setup
********************************************************************************
*
* Summary:
*  Sets pointer and size for waveform 1.                                    
*
* Parameters:  
*  uint8 * WavePtr:     Pointer to the waveform array.
*  uint16  SampleSize:  The amount of samples in the waveform.
*
* Return: 
*  None 
*
*******************************************************************************/
void WaveDAC8_1_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)

{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (WaveDAC8_1_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
		
		WaveDAC8_1_Wave1Chan = WaveDAC8_1_Wave1_DMA_DmaInitialize(
		WaveDAC8_1_Wave1_DMA_BYTES_PER_BURST, WaveDAC8_1_Wave1_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		WaveDAC8_1_Wave1Chan = WaveDAC8_1_Wave1_DMA_DmaInitialize(
		WaveDAC8_1_Wave1_DMA_BYTES_PER_BURST, WaveDAC8_1_Wave1_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(WaveDAC8_1_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
    * Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(WaveDAC8_1_Wave1TD, sampleSize, WaveDAC8_1_Wave1TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)WaveDAC8_1_Wave1_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(WaveDAC8_1_Wave1TD, LO16((uint32)wavePtr), LO16(WaveDAC8_1_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(WaveDAC8_1_Wave1Chan, WaveDAC8_1_Wave1TD);
}


/*******************************************************************************
* Function Name: WaveDAC8_1_Wave2Setup
********************************************************************************
*
* Summary:
*  Sets pointer and size for waveform 2.                                    
*
* Parameters:  
*  uint8 * WavePtr:     Pointer to the waveform array.
*  uint16  SampleSize:  The amount of samples in the waveform.
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_1_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
 
{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (WaveDAC8_1_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
			
		WaveDAC8_1_Wave2Chan = WaveDAC8_1_Wave2_DMA_DmaInitialize(
		WaveDAC8_1_Wave2_DMA_BYTES_PER_BURST, WaveDAC8_1_Wave2_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		WaveDAC8_1_Wave2Chan = WaveDAC8_1_Wave2_DMA_DmaInitialize(
		WaveDAC8_1_Wave2_DMA_BYTES_PER_BURST, WaveDAC8_1_Wave2_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(WaveDAC8_1_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
	* Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(WaveDAC8_1_Wave2TD, sampleSize, WaveDAC8_1_Wave2TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)WaveDAC8_1_Wave2_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(WaveDAC8_1_Wave2TD, LO16((uint32)wavePtr), LO16(WaveDAC8_1_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(WaveDAC8_1_Wave2Chan, WaveDAC8_1_Wave2TD);
}


/* [] END OF FILE */