#include "mcc_generated_files/mcc.h"
#include"Motors.h"
#include "Hc_Sr05.h"
#include"Esp_8266.h"





/*
                         Main application
 */
   



 
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    char rec[100], Direction; 
    float  Distance=0, Time=0;
   // __delay_ms(900);
   // __delay_ms(900);
    
    esp8266_isStarted();
   
    esp8266_mode(1);
    __delay_ms(10);
    esp8266_connect("Kajal","KajalKajal");
    __delay_ms(10);
    esp8266_start("TCP","api.thingspeak.com","80");
    __delay_ms(10);
    esp8266_send("GET /update?api_key=231FL6YWUTJLN6BR&field1=88.9990");
    __delay_ms(10);
    
    //BUZZER_SetHigh();
     //__delay_ms(500);  
    /*Esp_data("AT\r\n") ;
    Esp_data("AT+CWMODE=1\r\n");
    Esp_data("AT+CJWAP=\"Kajal\",\"KajalKajal\"\r\n");
   
   
     Esp_data("AT+CIPMUX=1\r\n");
    Esp_data("AT+CIPSTART=0,\"TCP\",\"api.thingspeak.com\",""80");
    */
    
    
    while (1)
    {
        __delay_ms(900);
        __delay_ms(900);
             esp8266_send("GET /update?api_key=231FL6YWUTJLN6BR&field1=33.9990");
         __delay_ms(900);
         __delay_ms(900);
        //Esp_data("AT+CWMODE=""KAJAL"",""\r\n");   
       /*
         if(EUSART1_is_rx_ready()){
        Direction= EUSART1_Read();
        
        if(Direction=='F')
        {
             Chair_Position("FORWARD");
              __delay_ms(10);
              Direction = 'N';
              Esp_data("Moving");
        }
        
        if(Direction=='B')
        {
             Chair_Position("BACK");
              __delay_ms(10);
              Direction = 'N';
               Esp_data("Back");
        }
        
        
        else if(Direction=='L'){
             Chair_Position("LEFT");
              __delay_ms(10);
              Direction = 'N';
               Esp_data("LEFT");
        
        }
         else if(Direction=='R'){
             Chair_Position("RIGHT");
              __delay_ms(10);
              Direction = 'N';
               Esp_data("RUGHT");
        
        }
         else if(Direction=='S'){
             Chair_Position("STOP");
              __delay_ms(10);
              Direction = 'N';
               Esp_data("STOP");
        
        }
        else
            Chair_Position("STOP");
       
         }
         
         while(Get_Distance_Front()<8)
         {
          Chair_Position("STOP");
           BUZZER_SetHigh();
           __delay_us(10);
         }
        
         while(Get_Distance_Rear()<8)
         {
          Chair_Position("STOP");
           BUZZER_SetHigh();
           __delay_us(10);
         }*/
         //BUZZER_SetHigh();
          __delay_ms(500);
        //  BUZZER_SetLow();
         
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