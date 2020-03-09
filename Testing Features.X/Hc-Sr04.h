/* 
 * File:   Hc-Sr04.h
 * Author: Jass khaira
 *
 * Created on March 7, 2020, 6:33 PM
 */

#ifndef HC_SR04_H
#define	HC_SR04_H
#define ZERO 0x00

#ifdef	__cplusplus
extern "C" {
#endif
   
    float Get_Distance(void){
     
        float Time, Distance;
        
        
        IO_RD0_SetHigh();
       __delay_ms(10);
       //EUSART1_Write('1');
        IO_RD0_SetLow();
       
       while(IO_RD1_GetValue()==0)
           ;
        //EUSART1_Write('2');
        TMR0_StartTimer();
       while(IO_RD1_GetValue()==1)
           ;
       TMR0_StopTimer();
        //EUSART1_Write('3');
       Time = TMR0_ReadTimer();
       
       //EUSART1_Write(Time);
      // TMR0_Reload();
       TMR0_WriteTimer(ZERO);
       Distance = Time/59;
       Distance += 1;
      
      // EUSART1_Write(Distance);
       return Distance;

    }

#ifdef	__cplusplus
}
#endif

#endif	/* HC_SR04_H */

