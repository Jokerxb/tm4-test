#ifndef KEY_H

#define KEY_H

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_ints.h"
#include "inc/hw_gpio.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom_map.h"
#include "driverlib\sysctl.h"
#include "libraries\delay\delay.h"
#include "libraries\LED\led.h"
#include "libraries\KEY\key.h"
#include "driverlib/interrupt.h"
#include "inc/hw_types.h"


void key_Init();//按键1和2初始化
void key_Int_Init();//按键1中断初始化
void IntHandler_GPIOF();//按键1中断处理函数（需要在key.c中修改功能）

#define SW_1 (GPIOPinRead(GPIO_PORTF_BASE, GPIO_PIN_4)&GPIO_PIN_4)?0:1//检测按键1是否按下，1为按下，0为没有按下
#define SW_2 (GPIOPinRead(GPIO_PORTF_BASE, GPIO_PIN_0)&GPIO_PIN_0)?0:1//检测按键2是否按下，1为按下，0为没有按下

#endif
