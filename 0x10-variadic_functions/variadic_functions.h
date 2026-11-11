
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Contains the prototypes and structure for variadic functions.
 */

#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* Returns the sum of a variable number of integers. */
int sum_them_all(const unsigned int n, ...);

/* Prints a variable number of integers. */
void print_numbers(const char *separator, const unsigned int n, ...);

/* Prints a variable number of strings. */
void print_strings(const char *separator, const unsigned int n, ...);

/* Structure for selecting the appropriate printing function. */
typedef struct printer
{
    char *symbol;
    void (*print)(va_list *args);
} printer;

/* Functions used to print individual data types. */
void print_char(va_list *args);
void print_int(va_list *args);
void print_float(va_list *args);
void print_string(va_list *args);

/* Prints different data types based on a format string. */
void print_all(const char * const format, ...);

#endif
