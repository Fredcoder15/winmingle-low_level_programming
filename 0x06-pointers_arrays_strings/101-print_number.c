#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Prints an integer using _putchar.
 */
static void print_unsigned(unsigned int n)
    {
    if (n / 10U != 0)
    {
        print_unsigned(n / 10U);
    }

    _putchar((n % 10U) + '0');
    }

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
    {
    unsigned int magnitude;

    if (n < 0)
    {
        _putchar('-');
        magnitude = (unsigned int)(-(n + 1)) + 1U;
    }
    else
    {
        magnitude = (unsigned int)n;
    }

    print_unsigned(magnitude);
    }
