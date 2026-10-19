#include "main.h"
/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Prints the last digit of a number
*/

int print_last_digit(int n)
    {
    int r;
    
    if (n < 0)
    {
    n = -n;
    }
    r = n % 10;
    
    _putchar(r + '0');
    
    return(r);
    
    }
