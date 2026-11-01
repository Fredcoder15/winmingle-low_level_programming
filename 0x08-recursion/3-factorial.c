/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Calculates the factorial of a number using recursion.
 */
#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number whose factorial is to be calculated
 *
 * Return: The factorial, or -1 if n is negative
 */
int factorial(int n)
{
    if(n < 0)
    {
    return(-1);
    }
    /* This is the base case */
    if(n == 0)
    { 
    return(1);
    }
    return(n * factorial(n - 1));
}
