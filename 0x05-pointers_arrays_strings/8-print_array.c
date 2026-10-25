#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Prints elements of an integer array.
 */

/**
 * print_integer - Prints an integer.
 * @n: The integer to print.
 *
 * Return: Nothing.
 */
static void print_integer(int n)
{
    unsigned int value;
    char digits[10];
    int i;

    if (n < 0)
    {
        _putchar('-');
        value = (unsigned int)(-(n + 1));
        value++;
    }
    else
    {
        value = (unsigned int)n;
    }

    i = 0;

    do
    {
        digits[i] = (value % 10) + '0';
        value /= 10;
        i++;
    }
    while (value != 0);

    while (i > 0)
    {
        i--;
        _putchar(digits[i]);
    }
}

/**
 * print_array - Prints n elements of an integer array.
 * @a: The array to print.
 * @n: The number of elements to print.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (i > 0)
        {
            _putchar(',');
            _putchar(' ');
        }

        print_integer(a[i]);
    }

    _putchar('\n');
}
