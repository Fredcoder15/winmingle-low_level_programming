
/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Prints a string in reverse using recursion.
 */
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to print
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
    {
    return;
    }
          /* Moves to the end of the string and prints backwards */

    _print_rev_recursion(s + 1);
    _putchar(*s);
}

