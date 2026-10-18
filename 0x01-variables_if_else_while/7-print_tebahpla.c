#include <stdio.h>
#include <stdlib.h>

/*Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: This program prints the letters of the alphabet in reverse order.
 */

int main(void)
    {
    char x = 'z';

    while(x >= 'a')
    {
    putchar(x);
    x--;
    }

    putchar('\n');

    return(0);

    }
