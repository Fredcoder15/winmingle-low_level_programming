#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Prints the second half of a string.
 */

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to print.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
    int half;
    int i = 0;
    int len = 0;

    /* This uses pointers too */
    len = _strlen(str);
    half = (len + 1)/2;

    while(*str)
    {
    if(i < half)
    {
    str++;
    i++;
    continue;
    }
    _putchar(*str);
    str++;

    }

    /* This works but I am using continue to master continue and break 
    len = _strlen(str);
    i = (len + 1) / 2;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    */

    _putchar('\n');
}
