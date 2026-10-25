#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Prints a string followed by a newline.
 */

/**
 * _puts - Prints a string followed by a newline.
 * @str: The string to print.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n');
}
