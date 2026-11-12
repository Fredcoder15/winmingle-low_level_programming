
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Prints different data types using a format string.
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character
 * @args: pointer to the argument list
 *
 * Return: Nothing.
 */
void print_char(va_list *args)
{
    printf("%c", va_arg(*args, int));
}

/**
 * print_int - prints an integer
 * @args: pointer to the argument list
 *
 * Return: Nothing.
 */
void print_int(va_list *args)
{
    printf("%d", va_arg(*args, int));
}

/**
 * print_float - prints a floating-point number
 * @args: pointer to the argument list
 *
 * Return: Nothing.
 */
void print_float(va_list *args)
{
    printf("%f", va_arg(*args, double));
}

/**
 * print_string - prints a string
 * @args: pointer to the argument list
 *
 * Return: Nothing.
 */
void print_string(va_list *args)
{
    char *str;

    /* Retrieve the next string argument. */
    str = va_arg(*args, char *);

    /* Replace NULL with the required text. */
    if (str == NULL)
    {
        str = "(nil)";
    }

    printf("%s", str);
}

/**
 * print_all - prints anything based on the format string
 * @format: string containing the types to print
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
    printer p[] = {
        {"c", print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_string},
        {NULL, NULL}
    };

    va_list args;
    unsigned int i = 0;
    unsigned int j;
    int printed = 0;

    /* Initialize access to the additional arguments. */
    va_start(args, format);

    /* Read each character in the format string. */
    while (format != NULL && format[i] != '\0')
    {
        j = 0;

        /* Find the matching printing function. */
        while (p[j].symbol != NULL && format[i] != p[j].symbol[0])
        {
            j++;
        }

        /* Print only when a supported format is found. */
        if (p[j].symbol != NULL)
        {
            /* Separate values, but not the first one. */
            if (printed == 1)
            {
                printf(", ");
            }

            p[j].print(&args);
            printed = 1;
        }

        i++;
    }

    /* Finish accessing the additional arguments. */
    va_end(args);

    /* End the output with a newline. */
    printf("\n");
}
