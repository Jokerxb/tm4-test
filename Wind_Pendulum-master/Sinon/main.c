
#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_ints.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom_map.h"
#include "driverlib\sysctl.h"
#include "libraries\delay\delay.h"
#include "libraries\LED\led.h"
#include "libraries\KEY\key.h"
#include "driverlib/interrupt.h"
#include "inc/hw_types.h"
#include "inc/hw_gpio.h"

void main(void)
{
    bool keypress=false;
    SysCtlClockSet(SYSCTL_SYSDIV_5 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN |SYSCTL_XTAL_16MHZ);
    Led_Init();
    key_Int_Init();
    while(1)
    {
        if(SW_2)
        {
            delay_ms(20);
            if(SW_2)
            {
                keypress=true;
            }
            while(SW_2);
        }
        if(keypress==true)
        {
            keypress=false;
            RED_1;
            delay_ms(500);
            RED_0;
        }
    }
}

