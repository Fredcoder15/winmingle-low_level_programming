# 0x0B. C - malloc, free

This project is about dynamic memory allocation in C using `malloc()` and `free()`.

The tasks cover how to allocate memory for characters, duplicate strings, concatenate strings, create and free a two-dimensional array, and work with program arguments and strings.

## Files

`0-create_array.c` creates an array of characters and initializes it with a given character.

`1-strdup.c` creates a copy of a string in newly allocated memory.

`2-str_concat.c` joins two strings into a newly allocated string.

`3-alloc_grid.c` allocates a two-dimensional array of integers and initializes all elements to zero.

`4-free_grid.c` frees the memory allocated for a two-dimensional array.

`100-argstostr.c` joins all program arguments into one string, with each argument on a new line.

`101-strtow.c` splits a string into words and stores them in a newly allocated array of strings.

## Compilation

The programs are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

Example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-create_array.c -o create_array
```

## Requirements

All source files follow the Betty coding style. Function prototypes are declared in `main.h`.

Only `malloc()` and `free()` are used for memory allocation and deallocation. All allocated memory should be properly freed to avoid memory leaks.
