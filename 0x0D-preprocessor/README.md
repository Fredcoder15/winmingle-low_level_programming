
# 0x0D. C - Preprocessor

This project introduces the C preprocessor and how it works before the compiler translates a C program.

It covers object-like macros, function-like macros, predefined macros, and include guards.

## Files

`0-object_like_macro.h` defines the SIZE macro as 1024.

`1-pi.h` defines the PI macro as 3.14159265359.

`2-main.c` prints the name of the source file using the __FILE__ predefined macro.

`3-function_like_macro.h` defines the ABS macro to calculate the absolute value of a number.

`4-sum.h` defines the SUM macro to add two values.

## Compilation

The programs are compiled using GCC with the following options:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89

## Requirements

All header files use include guards.

All files end with a newline.

The project follows the Betty coding style.
