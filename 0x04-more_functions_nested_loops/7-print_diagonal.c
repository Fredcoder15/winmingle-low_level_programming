#include "main.h"

/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Print diagonal lines
*/

void print_diagonal(int n)
    {
    int i, j;
    if(n < 0)
    {
    _putchar('\n');
    }
    else if(n > 0)
    {
    for(i = 0; i < n; i++)
    {
    for(j = 0; j < i; j++)
    {
    _putchar(' ');
    }
    _putchar('\\');
    _putchar('\n');
    }
    }
    }
