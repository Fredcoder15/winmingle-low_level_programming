0x10. C - Variadic Functions

This project introduces variadic functions in the C programming language.

It demonstrates how to write functions that accept a variable number of arguments and how to access those arguments using the macros provided by the stdarg.h header file.

The project also covers printing different data types using variadic functions and format strings.

Files

"variadic_functions.h" contains the function prototypes and the definition of the printer structure.

"0-sum_them_all.c" contains a function that calculates the sum of a variable number of integers.

"1-print_numbers.c" contains a function that prints a variable number of integers using a specified separator.

"2-print_strings.c" contains a function that prints a variable number of strings.

"3-print_all.c" contains a function that prints different data types based on a format string.

Compilation

The project files are compiled using GCC with the following flags:

"gcc -Wall -Werror -Wextra -pedantic -std=gnu89"

Example:

"gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-sum_them_all.c -o a"

Requirements

All files end with a newline.

There are no global variables.

The project follows the Betty coding style.

Only the permitted C library functions and macros are used.

Example main files are provided for local testing.
