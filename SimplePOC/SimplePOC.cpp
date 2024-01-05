

#include <iostream>
#include "bct.h"

int main()
{
    
    /// made by darkmqn121, devblluettw, _luxmaster
   
    driver.initdriver();
  

    /// u can use buttons to click example 0x1 left click , but u need release button with 0x2 in last parametter
    driver.mouse_event(222, 222,0);
    Sleep(1000);
    driver.mouse_event(-222, -222,0);
   
    return 0;
}

