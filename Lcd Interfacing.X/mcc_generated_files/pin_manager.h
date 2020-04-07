/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.80.0
        Device            :  PIC18F43K22
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set D5 aliases
#define D5_TRIS                 TRISAbits.TRISA6
#define D5_LAT                  LATAbits.LATA6
#define D5_PORT                 PORTAbits.RA6
#define D5_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define D5_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define D5_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define D5_GetValue()           PORTAbits.RA6
#define D5_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set D4 aliases
#define D4_TRIS                 TRISAbits.TRISA7
#define D4_LAT                  LATAbits.LATA7
#define D4_PORT                 PORTAbits.RA7
#define D4_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define D4_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define D4_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define D4_GetValue()           PORTAbits.RA7
#define D4_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set D6 aliases
#define D6_TRIS                 TRISCbits.TRISC0
#define D6_LAT                  LATCbits.LATC0
#define D6_PORT                 PORTCbits.RC0
#define D6_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define D6_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define D6_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define D6_GetValue()           PORTCbits.RC0
#define D6_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define D6_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set D7 aliases
#define D7_TRIS                 TRISCbits.TRISC1
#define D7_LAT                  LATCbits.LATC1
#define D7_PORT                 PORTCbits.RC1
#define D7_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define D7_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define D7_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define D7_GetValue()           PORTCbits.RC1
#define D7_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define D7_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set EN aliases
#define EN_TRIS                 TRISCbits.TRISC4
#define EN_LAT                  LATCbits.LATC4
#define EN_PORT                 PORTCbits.RC4
#define EN_ANS                  ANSELCbits.ANSC4
#define EN_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define EN_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define EN_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define EN_GetValue()           PORTCbits.RC4
#define EN_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define EN_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define EN_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define EN_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RS aliases
#define RS_TRIS                 TRISDbits.TRISD3
#define RS_LAT                  LATDbits.LATD3
#define RS_PORT                 PORTDbits.RD3
#define RS_ANS                  ANSELDbits.ANSD3
#define RS_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define RS_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define RS_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define RS_GetValue()           PORTDbits.RD3
#define RS_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define RS_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define RS_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define RS_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/