#include "main.h"

/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Descriptionn: Prints 1 if a letter is lowercase and 0 if it is uppercase
*/

int _islower(int c)
    {
    if(c >= 'a' && c <= 'z')
    {
    return(1);
    }
    else
    {
    return(0);
    }
   
    }

int main(void){
    int r;
    r = _islower('H');
    _putchar(r + '0');
   
    r=_islower(108);
    _putchar(r + '0');

    r =_islower('b');
    _putchar(r + '0') ;

    _putchar('\n');

    return(0);
    
    }
