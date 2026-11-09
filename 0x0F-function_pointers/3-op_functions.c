
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Implements the calculator arithmetic operations.
 */

#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
    /* Return the sum of the two integers. */
    return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The difference between a and b.
 */
int op_sub(int a, int b)
{
    /* Subtract the second integer from the first. */
    return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
    /* Return the product of the two integers. */
    return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The result of dividing a by b.
 */
int op_div(int a, int b)
{
    /* Perform integer division. The caller must prevent division by zero. */
    return (a / b);
}

/**
 * op_mod - calculates the remainder of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The remainder after dividing a by b.
 */
int op_mod(int a, int b)
{
    /* Return the remainder. The caller must prevent modulo by zero. */
    return (a % b);
}
