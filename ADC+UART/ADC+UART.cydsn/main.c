


#include "project.h"
#include <stdio.h>
 //#include <s0.h>
volatile int32 time=0;
float32 VoltsADC[3];
char str[12],str2[12];
char recibir;
int canal=0,cont=1;;



void pines(int a);

CY_ISR(Enviar)
{   
    
   sprintf(str2,"%ld \n  ",(ADC_GetResult32()));
   UART_PutString(str2); 
   //ADC_Stop(); 

//if(cont==0){
   //  s0_Write(1);
 //   }
   // if(cont==1){
     //s0_Write(0); 
     //}
    //if(cont==1){cont=0; UART_PutString("\n"); } else{ cont++;}
    //sprintf(str2," %.9f \n  ",ADC_CountsTo_Volts(ADC_GetResult32()));
   
//ADC_StartConvert();
    
//    AMux_FastSelect(cont);
  //  ADC_Start();
    //ADC_StartConvert();    
    
    
        
}

CY_ISR(InterruptRX)
{
    recibir = UART_GetChar();
    
    if(recibir == '0')
    {
        canal=0;
    }
    
    if(recibir == '1')
    {
        canal=1;
    }
    
    if(recibir == '2')
    {
        canal=2;
    }
}
int i=1;
CY_ISR(cambio)
{   
    isr_glitch_ClearPending();
    if(i==0){ADC_stopConversion; ADC_StopConvert();i=1;} else {ADC_Start();i=0;ADC_StartConvert();}
    LED_Write(~LED_Read());
    
}

CY_ISR_PROTO(cambio);





int main(void)
{
    
    CyGlobalIntEnable;
    isr_glitch_StartEx(cambio);    
    WaveDAC8_1_Start();
    
    
    
    UART_Start();
    
    isrRX_StartEx(InterruptRX);
    isrEnvio_StartEx(Enviar);
    
    for(;;)
    {/*
        AMux_FastSelect(0);
        ADC_StartConvert();
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        enteros[0]=ADC_GetResult32();
        ADC_StopConvert();
        
        AMux_FastSelect(1);
        ADC_StartConvert();
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        enteros[1]=ADC_GetResult32();
        ADC_StopConvert();
        
        AMux_FastSelect(2);
        ADC_StartConvert();
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        enteros[2]=ADC_GetResult32();
        ADC_StopConvert();
        
        VoltsADC[0] = ADC_CountsTo_Volts(enteros[0]);
        VoltsADC[1] = ADC_CountsTo_Volts(enteros[1]);
        VoltsADC[2] = ADC_CountsTo_Volts(enteros[2]);
        */
       
        
    }
}

/* [] END OF FILE */


void pines(int a){

switch (a){

    case 1:
    s0_Write(0);
    s1_Write(0);
    s2_Write(0);
    s3_Write(0);
    break;
    
    case 2:
    s0_Write(1);
    s1_Write(0);
    s2_Write(0);
    s3_Write(0);
    
    
    break;


}
    

}


