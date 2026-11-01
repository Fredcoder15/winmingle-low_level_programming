
/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Calculates the natural square root of a number using recursion.
 */
#include "main.h"

/**
 * sqrt_helper - searches for the natural square root
 * @n: number whose square root is being searched for
 * @guess: current possible square root
 *
 * Return: The square root, or -1 if none exists
 */
int sqrt_helper(int n, int guess)
{
    if(guess > n / guess)
    {
    return(-1);
    }
    if(guess * guess == n)
    {
    return(guess);
    }
    return(sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is to be calculated
 *
 * Return: The natural square root, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
    if(n < 0)
    {
    return(-1);
    }
    if(n == 0)
    {
    return(0);
    }
    return(sqrt_helper(n, 1));
}

