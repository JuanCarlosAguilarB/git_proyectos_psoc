#include "project.h"

CY_ISR(cambio)
{        
    CyDelay(30);
    Boton_ClearInterrupt();
    LED_Write(~LED_Read());
}

CY_ISR_PROTO(cambio);

int main(void)
{
    CyGlobalIntEnable; 
    isr_btn_StartEx(cambio);
    
    for(;;)
    {
        
    }
}
