#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Prints every other character of a string.
 */

/**
 * puts2 - Prints characters at even-numbered positions.
 * @str: The string to print.
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
    /*int i; */

    /* Method 1, using indexing pointers and indexing explicitly */
    int j = 0;
    while(*str)
    {
    if(j % 2 == 0)
    {
    _putchar(*str);
    }
    str++;
    j++;
    }

    /* Method 2, using only pointers 
    while(*str)
    {
    _putchar(*str);
    str += 2;
    }
    */

    /* Uses index method but for loop 
    for(i = 0; str[i] != '\0'; i += 2)
    {
    _putchar(str[i]);
    }
    */
    _putchar('\n');
}
