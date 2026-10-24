#include "main.h"
/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Draws straight horizontal lines using underscores
*/

void print_line(int n)
    {
    int i;

    if(n < 0)
    {
    _putchar('\n');
    return;
    }
    else if(n > 0)
    {
    for(i = 0; i < n; i++)
    {
    _putchar('_');
    }
    }
    _putchar('\n');
    }
