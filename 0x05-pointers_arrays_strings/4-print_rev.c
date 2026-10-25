#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Prints a string in reverse order.
 */

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to print.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
    int i;

    i = _strlen(s) - 1;

    while (i >= 0)
    {
        _putchar(s[i]);
        i--;
    }

    _putchar('\n');
}
