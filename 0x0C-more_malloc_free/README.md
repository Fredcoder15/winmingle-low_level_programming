# 0x0C. More malloc and free

This project is part of the WinMingle Community C Training. It focuses on dynamic memory allocation in C and how to manage memory using malloc and free.

## Learning Objectives

The aim of this project is to understand how to allocate memory dynamically, initialize allocated memory, concatenate strings, create arrays, resize memory blocks, and perform multiplication of large numbers.

## Tasks

### 0. malloc_checked

A function that allocates memory using malloc and terminates the program with exit status 98 if the allocation fails.

### 1. string_nconcat

A function that concatenates two strings and uses only the first n characters of the second string.

### 2. _calloc

A function that allocates memory for an array and initializes all allocated bytes to zero.

### 3. array_range

A function that creates an array containing all integers from min to max.

### 4. _realloc

A function that changes the size of an existing memory allocation while preserving the required contents.

### 5. mul

A program that multiplies two positive numbers and prints the result. It also handles invalid arguments by printing an error message and exiting with status 98.

## Compilation

The programs are compiled using GCC with the following options:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Testing

The main.c files used during testing are only for checking the functions locally and should not be submitted.

The multiplication program can be compiled and tested with:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 101-mul.c _putchar.c -o 101-mul
./101-mul 123 45
```

The expected output is:

```text
5535
```

## Author

Akpan-fred, Promise Friday.

WinMingle Community C Training.
