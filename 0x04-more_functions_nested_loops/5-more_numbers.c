#include "main.h"

/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Print numbers from 0 to 14, ten times.
*/

			/* This is a helper function for the program	*/
void print_number(int n)
    {
    if(n < 0)
    {
    _putchar('-');
    n = -n;
    }
    else
    {
    n = n;
    }

    if(n / 10 != 0)
    {
    print_number(n/10);
    }
    _putchar('0' + (n % 10));
    }

			/* This is the main function	*/
void more_numbers(void)
    {
    int i, j;
    
    for(i = 0; i < 10; i++)
    {
    for(j = 0; j <= 14; j++)
    {
    print_number(j);
    }
    _putchar('\n');
    }

    }
