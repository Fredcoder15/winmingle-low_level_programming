#include "main.h"
/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Checks if input is a number or letter and returns 1 if it is letter and 0 if it is something else
*/

int _isalpha(int c)
    {
    if((c >= 'a' && c <=  'z') || (c >= 'A' && c <= 'Z'))
    {
    return (1);
    }
    else 
    {
    return(0);
    }
    
    }
