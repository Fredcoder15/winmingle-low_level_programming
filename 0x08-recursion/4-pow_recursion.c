
/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Calculates the power of a number using recursion.
 */
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base number
 * @y: the exponent
 *
 * Return: The result, or -1 if the exponent is negative
 */
int _pow_recursion(int x, int y)
{
    if(y < 0)
    {
    return(-1);
    }
    if(y == 0)
    {
    return(1);
    }
    return(x * _pow_recursion(x, y - 1));
}
