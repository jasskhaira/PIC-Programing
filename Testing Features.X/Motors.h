/* 
 * File:   Motors.h
 * Author: Jass khaira
 *
 * Created on February 18, 2020, 9:04 PM
 */

#ifndef MOTORS_H
#define	MOTORS_H
#define Left_Motor1    IO_RA2_LAT      //  To BIN2
#define Left_Motor2    IO_RA1_LAT      //  To BIN1
#define Left_M_State   IO_RA0_LAT      //  To PWM B

#define Right_Motor1    IO_RA4_LAT      // To AIN1
#define Right_Motor2    IO_RA5_LAT      // To AIN2 
#define Right_M_State   IO_RE0_LAT      // To PWMA 

#ifdef	__cplusplus
extern "C" {
#endif


#include<string.h>
    
    void Motor_Initalize(){
        
        IO_RA3_LAT=1;      // STBY STATE HIGH
    }
    
    void Leftwheel_Forward(){
        IO_RA2_SetLow();
        IO_RA1_SetHigh();
        IO_RA0_SetHigh();
        printf("ok");
        /*Left_Motor1=1;
        Left_Motor2=0;
        Left_M_State=1;
         */   
         }
    void Rightwheel_Forward(){
        Right_Motor1=1;
        Right_Motor2=0;
        Right_M_State=1;
            
         }
    void Leftwheel_Back(){
        Left_Motor1=0;
        Left_Motor2=1;
        Left_M_State=1; 
            
         }
    void Rightwheel_Back(){
        Right_Motor1=0;
        Right_Motor2=1;
        Right_M_State=1;
            
         }
    
    void Leftwheel_Stop() {
         Left_M_State=0;
     
    }
    
    void Rightwheel_Stop() {
         Right_M_State=0;
     
    }
    
    void Move_Forward(){
        Leftwheel_Forward();
        Rightwheel_Forward();  
    
    }
    
    void Move_Back(){
        Leftwheel_Back();
        Rightwheel_Back();
            }
    
    void Move_left(){
        Leftwheel_Forward();
        Rightwheel_Stop();
            }
    
    void Move_Right(){
        Leftwheel_Stop();
        Rightwheel_Forward();
            }
    
    void Stop(){
          Leftwheel_Stop();
          Rightwheel_Stop();
        }
    
   /*This API accepts the direction and move the robot according to the direction
     Arguments for this API
     * FORWARD
     * BACK
     * LEFT
     * RIGHT
     * STOP
     It return 1 on success and 0 on failure
     */
    
    
    int Chair_Position(char Command[] )
    {
        if(strcmp(Command,"FORWARD")==0)
        {
            Move_Forward();
           return(1);  
        }
        
        else if(strcmp(Command,"BACK")==0)
        {
             Move_Back();
             return(1);
        }
        
        else if(strcmp(Command,"LEFT")==0)
        {
            Move_left();
            return(1);
         }
        else if(strcmp(Command,"RIGHT")==0)
        {
            Move_Right();
            return(1);
               
         }
        else if(strcmp(Command,"STOP")==0)
        {
            Stop();
            return(1);
               
         }
        else
        return(0);
        
        
    }
       
    


#ifdef	__cplusplus
}
#endif

#endif	/* MOTORS_H */

