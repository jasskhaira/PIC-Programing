#include "mcc_generated_files/mcc.h"
#include"Motors.h"
#include "Hc_Sr05.h"
/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    float  Distance=0,Time=0;
     
    while (1)
    {
         __delay_ms(10);
        Distance=Get_Distance();
        
        if(Distance>=8){
        Chair_Position("FORWARD");
       // printf("moving");
        __delay_ms(10);
        }
        else
        Chair_Position("STOP");
        //printf("stop");
        __delay_ms(10);
        // Add your application code
    }
}











    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();