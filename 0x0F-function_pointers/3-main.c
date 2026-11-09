
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Runs a simple calculator using function pointers.
 */

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - runs the calculator
 * @argc: number of command-line arguments
 * @argv: array containing the command-line arguments
 *
 * Return: 0 on success, or an error status on failure.
 */
int main(int argc, char *argv[])
{
    int (*f)(int, int);
    int num1, num2;
    char *operator;

    /* Require exactly three arguments after the program name. */
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    /* Read the operator and find its corresponding function. */
    operator = argv[2];
    f = get_op_func(operator);

    /* Reject operators that are not supported by the calculator. */
    if (f == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    /* Convert the two number arguments from strings to integers. */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    /* Prevent division and modulo operations when the second number is zero. */
    if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    /* Execute the selected arithmetic function and print its result. */
    printf("%d\n", f(num1, num2));

    return (0);
}
