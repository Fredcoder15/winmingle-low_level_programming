
/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Calculates and prints the sums of the two diagonals
 *              of a square matrix.
 */
#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @number: the number to print
 *
 * Return: Nothing
 */
static void print_unsigned(unsigned int number)
    {
    if (number >= 10)
        print_unsigned(number / 10);

    _putchar((number % 10) + '0');
    }

/**
 * print_number - prints an integer, including negative numbers
 * @n: the integer to print
 *
 * Return: Nothing
 */
static void print_number(int n)
    {
    unsigned int number;

    if (n < 0)
    {
        _putchar('-');
        number = (unsigned int)(-(n + 1)) + 1;
    }
    else
    {
        number = (unsigned int)n;
    }

    print_unsigned(number);
    }

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: pointer to the first element of the matrix
 * @size: number of rows and columns in the matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
    {
    int i;
    int sum1;
    int sum2;

    sum1 = 0;
    sum2 = 0;

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];
        sum2 += a[i * size + (size - 1 - i)];
    }

    print_number(sum1);
    _putchar(',');
    _putchar(' ');
    print_number(sum2);
    _putchar('\n');
    }
