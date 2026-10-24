#include "main.h"
#include <stdio.h>
/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Prints the largest prime factor of the number 
*/

int main(void)
    {
    long int n;
    long int factor;

    n =	612852475143;
    factor = 2;

    while(factor <= n/factor)
    {
    while(n % factor == 0)
    {
    n = n / factor;
    }
    factor++;
    }

    printf("%ld\n", n);
    return(0);
    }
