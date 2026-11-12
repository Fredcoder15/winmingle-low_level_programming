
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Prints a variable number of strings.
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a variable number of strings
 * @separator: string printed between the strings
 * @n: number of strings to print
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list string;
    unsigned int i;
    char *str;

    /* Initialize access to the additional arguments. */
    va_start(string, n);

    /* Retrieve and print each string. */
    for (i = 0; i < n; i++)
    {
        str = va_arg(string, char *);

        /* Replace a NULL string with the required text. */
        if (str == NULL)
        {
            str = "(nil)";
        }

        printf("%s", str);

        /* Print the separator only between strings. */
        if (separator != NULL && i != n - 1)
        {
            printf("%s", separator);
        }
    }

    /* Finish accessing the additional arguments. */
    va_end(string);

    /* Print a newline after all the strings. */
    printf("\n");
}
