#include "main.h"
/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description:  Prints multiplication table\
*/

void times_table(void)
    {
    int row, col, result;
    
    for (row = 0; row <= 9; row++)
    {
    for (col = 0; col  <= 9; col++)
    {
    result = row * col;
  
    if(result < 10)
    {
    _putchar(' ');
    }

    if (result >= 10)
    {
    _putchar((result/ 10) + '0');
    _putchar((result % 10) + '0');
    }
    
    }
    _putchar('\n');
    }
    
    } 
