/* 
 * File:   Motors.h
 * Author: Jass khaira
 *
 * Created on March 9, 2020, 3:32 AM
 */

#ifndef MOTORS_H
#define	MOTORS_H


#ifdef	__cplusplus
extern "C" {
#endif


#include<string.h>
    
//------------------------------------------------------------------------------    
    void Leftwheel_Forward(){
          A0_LM_PWM_SetHigh();
          A2_LM_BIN1_SetHigh();
          A1_LM_BIN2_SetLow();
         
         }
    
//------------------------------------------------------------------------------ 
    void Rightwheel_Forward(){
         E0_RM_PWM_SetHigh(); 
         A4_RM_AIN1_SetHigh();
         A2_RM_AIN2_SetLow() ;
         
    }
      
//------------------------------------------------------------------------------             
         
    void Leftwheel_Back(){
        A0_LM_PWM_SetHigh();
        A2_LM_BIN1_SetLow();
        A1_LM_BIN2_SetHigh();
      }
    
//------------------------------------------------------------------------------     

    void Rightwheel_Back(){
        E0_RM_PWM_SetHigh(); 
        A4_RM_AIN1_SetLow();
        A2_RM_AIN2_SetHigh() ;
            
         }
//------------------------------------------------------------------------------ 
    
    void Leftwheel_Stop() {
         A0_LM_PWM_SetLow();
     
    }

//------------------------------------------------------------------------------ 
    
    void Rightwheel_Stop() {
          E0_RM_PWM_SetLow();
     
    }

//------------------------------------------------------------------------------ 
    
    void Move_Forward(){
        Leftwheel_Forward();
        Rightwheel_Forward();  
    
    }

//------------------------------------------------------------------------------ 
    
    void Move_Back(){
        Leftwheel_Back();
        Rightwheel_Back();
            }

//------------------------------------------------------------------------------ 

    void Move_left(){
        Leftwheel_Forward();
        Rightwheel_Stop();
            }
    
//------------------------------------------------------------------------------ 
    
    
    void Move_Right(){
        Leftwheel_Stop();
        Rightwheel_Forward();
            }
    
//------------------------------------------------------------------------------ 

    
    void Stop(){
          Leftwheel_Stop();
          Rightwheel_Stop();
        }
    
//------------------------------------------------------------------------------ 
    
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

//------------------------------------------------------------------------------ 
    
    
#endif	/* MOTORS_H */

