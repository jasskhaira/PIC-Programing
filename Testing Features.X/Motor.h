/* 
 * File:   Motor.h
 * Author: Jass khaira
 *
 * Created on February 12, 2020, 9:34 AM
 */

#ifndef MOTOR_H
#define	MOTOR_H

#ifdef	__cplusplus
extern "C" {
#endif

#include<string.h>
    
    void Leftwheel_Forward(){
            LA0=1;
            LA1=0;
            LE0=1;
            
         }
    void Rightwheel_Forward(){
            LA2=1;
            LA3=0;
            LE1=1;
            
         }
    void Leftwheel_Back(){
            LA0=0;
            LA1=1;
            LE0=1;
            
         }
    void Rightwheel_Back(){
            LA2=0;
            LA3=1;
            LE1=1;
            
         }
    
    void Leftwheel_Stop() {
        LE0=0;
    }
    
    void Rightwheel_Stop() {
        LE1=0;
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
        {
        return(0);
        }
       
    }
}
#ifdef	__cplusplus
}
#endif

#endif	/* MOTOR_H */

