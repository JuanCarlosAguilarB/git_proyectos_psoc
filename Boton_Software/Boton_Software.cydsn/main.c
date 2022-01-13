#include "project.h"

CY_ISR(cambio)
{        
    isr_glitch_ClearPending();
    LED_Write(~LED_Read());
}

CY_ISR_PROTO(cambio);

int main(void)
{
    CyGlobalIntEnable; 
    isr_glitch_StartEx(cambio);
    
    for(;;)
    {
        
    }
}
