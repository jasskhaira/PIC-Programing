/* 
 * File:   Hc_Sr05.h
 * Author: Jass khaira
 *
 * Created on March 9, 2020, 3:32 AM
 */

#ifndef HC_SR05_H
#define	HC_SR05_H



#define ZERO 0x00

#ifdef	__cplusplus
extern "C" {
#endif
     float Time, Distance;
     
//---------------------------------------------------------------------------------------------------------
// Name Get Distance


     
     float Get_Distance(void){
             
        FRONT_TRIG_SetHigh();
       __delay_us(10);
     
      
       FRONT_TRIG_SetLow();
       
       while(FRONT_ECHO_GetValue()==0)
           ;
        
       TMR1_StartTimer();
       while(FRONT_ECHO_GetValue()==1)
           ;
       Time = TMR1_ReadTimer();
       TMR1_StopTimer();
     
       TMR1_WriteTimer(ZERO);
       Distance = Time/58.82;
       Distance += 1;
      
     
       return Distance;

    }
 //---------------------------------------------------------------------------------------------------------     
#endif	/* HC_SR05_H */

