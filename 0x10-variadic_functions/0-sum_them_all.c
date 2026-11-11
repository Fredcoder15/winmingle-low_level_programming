
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Returns the sum of a variable number of integers.
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of additional arguments
 *
 * Return: Sum of the additional arguments, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list numb;
    unsigned int i;
    int sum = 0;

    /* Initialize access to the additional arguments. */
    va_start(numb, n);

    /* Retrieve and add each additional integer. */
    for (i = 0; i < n; i++)
    {
        sum += va_arg(numb, int);
    }

    /* Finish accessing the additional arguments. */
    va_end(numb);

    return (sum);
}
