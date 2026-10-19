#include "main.h"
#include <stdio.h>
 
/**
 * Author: Akpan-fred, Promise Friday
 *Program: Winmingle Community C Training
 * Description: Test file for the absolute value source file
 */

int main(void)
    {
    int r;
 
    r = _abs(-1);
    printf("%d\n", r);
    r =   _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);

    return (0);
    
    }
