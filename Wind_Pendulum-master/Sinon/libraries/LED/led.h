#ifndef LED_H

#define LED_H

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib\gpio.h"
#include "driverlib\sysctl.h"
void Led_Init();//三色LED灯初始化

#define RED_1 GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_PIN_1)//红灯亮
#define BLUE_1 GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, GPIO_PIN_2)//蓝灯亮
#define GREEN_1 GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, GPIO_PIN_3)//绿灯亮

#define RED_0 GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0)//红灯灭
#define BLUE_0 GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0)//蓝灯灭
#define GREEN_0 GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0)//绿灯灭

#endif
