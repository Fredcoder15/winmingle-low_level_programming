#include <stdio.h>
#include "main.h"

/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: test file for 10-add.c source file
*/

int main(void)
    {
    int n;

    n = add(89,9);
    printf("%d \n", n);
    n= add(102883973, 7678499);
    printf("%d\n", n);

    n = add(-102, -2946);
    printf("%d\n", n);
    
    return(0);
    
    }
