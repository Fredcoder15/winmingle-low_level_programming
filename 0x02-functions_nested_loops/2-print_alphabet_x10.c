#include "main.h"
/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description:
*/

void  print_alphabet_x10(void)
    {
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
    _putchar(c); 
    }
    
    }

int main(void)
    {
    int r;

    for(r = 0; r <= 20; r++)
    {
    print_alphabet_x10();
    _putchar('\n');
    } 

    return(0); 

    }

