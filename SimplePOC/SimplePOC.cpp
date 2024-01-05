#include <iostream>
#include "bct.h"

int main()
{
    
    /// made by darkmqn121, devblluettw, _luxmaster
    driver.initdriver();

    // Simulate a Left Click
    // 0x1 = Left Click Down
    // 0x2 = Left Click Up
    // driver.mouse_event(0, 0, 0x1);
    // driver.mouse_event(0, 0, 0x2);
    
    driver.mouse_event(100, 100, 0);
   
    return 0;
}

