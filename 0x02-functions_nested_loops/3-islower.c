
#include "main.h"

/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Prints 1 if a letter is lowercase and 0 otherwise.
*/

int _islower(int c)
    {
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
    }
