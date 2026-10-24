#include "main.h"
#include <stdio.h>
/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: This program prints the fixxbuzz uinterview challaneg
*/

int main(void)
    {
    int i;
    for (i = 0; i <= 100; i++)
    {
    if(i % 3 == 0 && i % 5 == 0)
    {
    printf("fizzbuzz");
    }
    else if(i % 3 == 0)
    {
    printf("fizz");
    }
    else if(i % 5 == 0)
    {
    printf("buzz");
    }
    else 
    {
    printf("%d", i);
    }
    if( i < 100)
    {
    printf(" ");
    }
    }
    printf("\n");
    return(0);
    }
