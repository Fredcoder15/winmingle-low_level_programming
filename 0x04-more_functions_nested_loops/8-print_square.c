#include "main.h"

/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Prints a square using hash tags
*/

void print_square(int size)
    {
    int i, j;
    if(size < 0)
    {
    _putchar('\n');
    return;
    }
    else if(size > 0)
    {
    for(i = 0; i < size; i++)
    {
    for(j = 0; j < size; j++)
    {
    _putchar('#');
    }
    _putchar('\n');
    }
    }
    }

