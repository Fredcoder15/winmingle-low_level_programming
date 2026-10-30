# 0x07. C - Pointers, Arrays and Strings

## Description

This project focuses on pointers, arrays and strings in C programming. It explores how pointers work, how memory addresses are stored and accessed, and how arrays and strings are represented in memory.

The project involves recreating some standard C library functions without using the standard library. This helps to develop a better understanding of how these functions work internally and how pointers can be used to manipulate memory directly.

It also covers the relationship between pointers and arrays, string manipulation, character searching, memory copying and memory filling. Through the tasks, I practised accessing array elements using pointers and working with multidimensional arrays.

Another important concept covered in this project is double pointers. I learned how a pointer to a pointer can be used to modify the value of an original pointer from within another function.

## Learning Objectives

By completing this project, I gained a better understanding of pointers, arrays and strings in C. I learned how to use pointers to access and manipulate memory, how to traverse arrays and strings, and how to recreate common string and memory functions.

I also learned how to work with two-dimensional arrays, access elements using row and column indexing, and calculate the sums of the primary and secondary diagonals of a square matrix.

The project further improved my understanding of pointer arithmetic, memory addresses, function arguments and double pointers.

## Tasks

### Task 0 - 0-memset.c

This task involves writing a function that fills a memory area with a constant byte. It introduces how to access and modify memory using pointers.

### Task 1 - 1-memcpy.c

This task involves copying a specified number of bytes from one memory area to another. It helps in understanding pointer movement and how memory can be accessed and copied.

### Task 2 - 2-strchr.c

This task involves writing a function that locates the first occurrence of a character in a string. It introduces string traversal and character comparison.

### Task 3 - 3-strspn.c

This task involves calculating the length of the initial segment of a string that contains only characters found in another string. It helps in understanding nested loops and character matching.

### Task 4 - 4-strpbrk.c

This task involves searching a string for the first occurrence of any character from another string. It provides more practice with nested loops and string traversal.

### Task 5 - 5-strstr.c

This task involves locating the first occurrence of a substring within another string. It helps in understanding how to compare strings character by character and search for matching sequences.

### Task 6 - 6-chessboard.c

This task involves printing a chessboard represented by a two-dimensional array. It introduces working with multidimensional arrays and accessing their elements using row and column indices.

### Task 7 - 7-diagsums.c

This task involves calculating and printing the sums of the primary and secondary diagonals of a square matrix. It provides practical experience with multidimensional array indexing and pointer arithmetic.

### Task 8 - 100-set_string.c

This task involves writing a function that changes a pointer to point to another string. It introduces double pointers and explains how a function can modify the original pointer passed to it.

## Requirements

The programs are written in C and compiled on Ubuntu 20.04 using GCC. The compilation options are `-Wall -Werror -Wextra -pedantic -std=gnu89`.

All code follows the Betty coding style. Global variables are not allowed, and each file must contain no more than five functions. Standard library functions are not used unless specifically permitted by the task.

Function prototypes are declared in the `main.h` header file.

## Compilation

The files can be compiled using GCC with the required compilation flags.

Example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c filename.c -o test
```

## Author

Akpan-fred, Promise Friday