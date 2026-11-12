
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Prints a variable number of integers.
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints a variable number of integers
 * @separator: string printed between the numbers
 * @n: number of integers to print
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list numb;
    unsigned int i;

    /* Initialize access to the additional arguments. */
    va_start(numb, n);

    /* Retrieve and print each integer. */
    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(numb, int));

        /* Print the separator only between numbers. */
        if (separator != NULL && i != n - 1)
        {
            printf("%s", separator);
        }
    }

    /* Finish accessing the additional arguments. */
    va_end(numb);

    /* Print a newline after all the numbers. */
    printf("\n");
}
