
# 0x0E. C - Structures, typedef

This project introduces structures and typedef in the C programming language.

It demonstrates how to group related information into a structure, initialize structure members, access members through pointers, and create aliases for structure types.

The project also covers dynamic memory allocation, copying strings, and freeing allocated memory.

## Files

`dog.h` defines the dog structure, the dog_t type alias, and the function prototypes.

`1-init_dog.c` initializes a dog structure.

`2-print_dog.c` prints the information stored in a dog structure.

`4-new_dog.c` creates a new dog and stores copies of its name and owner.

`5-free_dog.c` frees the memory allocated for a dog.

## Compilation

The files are compiled using GCC with the following flags:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89

Example:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-main.c 4-new_dog.c 5-free_dog.c -o test

## Requirements

All header files use include guards.

All files end with a newline.

There are no global variables.

The project follows the Betty coding style.

Example main.c files are used for local testing and are not submitted.
