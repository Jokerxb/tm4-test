# include "delay.h"

void delay_ms(int ms)
{
    SysCtlDelay(SysCtlClockGet()/3000*ms);
}
