#include <stdio.h>
#include "main.h"
/**
*Author: Akpan-fred, promise Friday
*Program: winmingle Community C Training
*Description: prints all numbers between n to 98
*/

void print_to_98 (int n)
    {

    if (n <= 98){
    while (n <= 98)
    {
    printf("%d", n);
    if (n != 98 )
    {
    printf(", ");
	
    }
    n++;
    }

    }

    else
    {
    while (n >= 98)
    {
    printf("%d", n);
    if (n != 98 )
    {
    printf(", ");
    }
    n--;
    }
    
    }
    printf("\n");
    }
