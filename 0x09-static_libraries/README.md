# 0x09. C - Static Libraries in 2026

## Description

This project introduces static libraries in C. I learned how to create a static library, add object files to it and use the library when compiling a program.

A static library is a collection of object files stored in one archive file. It makes it possible to reuse functions without compiling their source files every time they are needed.

## Task 0: Create the Static Library

I created a static library called `libmy.a` containing the required functions from previous C programming tasks.

The functions cover character checking, number operations, string manipulation and memory operations.

The function prototypes are declared in `main.h`.

I used the `gcc` command to compile the C files into object files, the `ar` command to create the library and the `nm` command to inspect its symbols.

## Task 1: Create a Script to Make a Static Library

I created a Bash script called `create_static_lib.sh`. The script compiles all the C files in the current directory into object files and creates a static library called `liball.a`.

The script is made executable using `chmod +x create_static_lib.sh` and can be run with `./create_static_lib.sh`.

## Compilation

The C files are compiled using GCC with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.

A program can be linked with the static library using the `-L.` and `-lmy` options.

## Requirements

- All C files are compiled on Ubuntu 20.04 LTS.
- All C files follow the Betty coding style.
- No global variables are used.
- No more than five functions are used in each file.
- Standard library functions are not used in the submitted implementations.
- All function prototypes are included in `main.h`.
- The Bash script starts with `#!/bin/bash` and is executable.
- All files end with a new line.

## Author

Akpan-fred, Promise Friday
