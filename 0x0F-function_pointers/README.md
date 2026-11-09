# 0x0F. C - Function Pointers

This project introduces function pointers in the C programming language.

It demonstrates how to store and use pointers to functions, pass functions as arguments, and execute different operations using function pointers.

The project also covers searching arrays using callback functions and building a simple calculator with function pointers.

## Files

`function_pointers.h` contains the function prototypes and include guards.

`0-print_name.c` prints a name using a function passed as an argument.

`1-array_iterator.c` executes a given function on every element of an array.

`2-int_index.c` searches an array for an element that matches a given condition.

`3-calc.h` defines the calculator structure and function prototypes.

`3-op_functions.c` contains the calculator's arithmetic operations.

`3-get_op_func.c` selects the appropriate arithmetic function based on an operator.

`3-main.c` contains the calculator program.

`100-main_opcodes.c` prints the opcodes of its own main function.

## Compilation

The project files are compiled using GCC with the following flags:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

Example:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-array_iterator.c -o b`

## Requirements

All files end with a newline.

There are no global variables.

The project follows the Betty coding style.

All function prototypes are included in the appropriate header files.

Example main files are used for local testing and are not submitted unless required.
