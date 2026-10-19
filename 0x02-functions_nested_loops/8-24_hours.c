#include "main.h"
/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: This is a jack buer hands of a clock
*/

void jack_bauer(void)
    {
    int hour;
    int minute;
    
    for (hour = 0 ; hour <= 23; hour++)
    {
    for (minute = 0; minute <= 59; minute++)
    {
    _putchar((hour / 10) + '0');
    _putchar((hour % 10) + '0');
    _putchar(':');
    _putchar((minute / 10) + '0');
    _putchar((minute % 10) + '0');
    _putchar('\n');
    }
    
    }
    
    }
