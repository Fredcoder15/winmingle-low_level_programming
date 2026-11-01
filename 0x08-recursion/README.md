# 0x08. C - Recursion

## Description

This project focuses on understanding recursion in the C programming language. Recursion is a programming technique where a function calls itself to solve a problem. Instead of using loops to repeat instructions, a recursive function solves a problem by breaking it into smaller versions of the same problem until it reaches a stopping condition.

The project covers how to write recursive functions, how to identify base cases, and how recursive calls work. It also helps explain when recursion is useful and why every recursive function needs a proper stopping condition.

## Learning Objectives

At the end of this project, I should be able to explain what recursion is and how it works in C. I should understand how to implement recursive functions, identify base cases, and prevent infinite recursion. I should also understand when recursion is appropriate and when it is better to use another approach.

## Tasks

### 0. `_puts_recursion`

Write a function that prints a string followed by a new line using recursion. The function prints one character at a time and calls itself to print the remaining characters until it reaches the end of the string.

### 1. `_print_rev_recursion`

Write a function that prints a string in reverse using recursion. The function first moves through the string until it reaches the terminating null character, then prints each character while the recursive calls return.

### 2. `_strlen_recursion`

Write a function that returns the length of a string using recursion. The function counts the characters by adding one for each recursive call until it reaches the end of the string.

### 3. `factorial`

Write a function that returns the factorial of a given number. The function returns `-1` if the number is negative, and returns `1` when the number is zero. For other values, it calculates the factorial through recursive multiplication.

### 4. `_pow_recursion`

Write a function that returns the value of a number raised to the power of another number. The function returns `-1` if the exponent is negative and uses recursion to calculate the result for non-negative exponents.

### 5. `_sqrt_recursion`

Write a function that returns the natural square root of a number. The function returns `-1` if the number does not have a natural square root. It uses recursive calls to find the square root.

### 6. `is_prime_number`

Write a function that checks whether an integer is a prime number. It returns `1` if the number is prime and `0` otherwise. The function uses recursion to test possible divisors.

### 7. `is_palindrome`

Write a function that checks whether a string is a palindrome. It returns `1` if the string reads the same forward and backward, and `0` otherwise. An empty string is considered a palindrome.

### 8. `wildcmp`

Write a function that compares two strings and returns `1` if they can be considered identical, otherwise it returns `0`. The second string can contain the special character `*`, which can replace any string, including an empty string.

## Requirements

All files are compiled on Ubuntu 20.04 LTS using GCC with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

The allowed editors are `vi`, `vim`, and `emacs`. All source files must end with a new line. Global variables and static variables are not allowed. No more than five functions are allowed in each file.

The use of standard library functions such as `printf` and `puts` is forbidden. The `_putchar` function is allowed for printing characters. All function prototypes, including the `_putchar` prototype, must be included in the header file called `main.h`.

Loops are not allowed in this project. All repetition must be handled using recursion.

## Compilation

The source files can be compiled using GCC with the required compiler options. For example:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c source_file.c -o program`

The provided main files can be used to test the functions locally, but they are not required for submission.

## Author

Akpan-fred, Promise Friday
