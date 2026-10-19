#include "main.h"
/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: A test file for 4-isalpha.c
*/

int main(void)
    {
    int r;
   
    r = _isalpha('H');
    _putchar(r + '0');
	
    r = _isalpha('0');
    _putchar(r + '0');

    r = _isalpha(108);
    _putchar(r + '0');

    _putchar('\n');
    
    return(0);
    
    }
