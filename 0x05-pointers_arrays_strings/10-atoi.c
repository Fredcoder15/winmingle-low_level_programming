#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Converts a string to an integer.
 */

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int i;
    int sign;
    int result;
    int found_digit;

    i = 0;
    sign = 1;
    result = 0;
    found_digit = 0;

    while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
    {
        i++;
    }

    while (s[i] == '+' || s[i] == '-')
    {
        if (s[i] == '-')
        {
            sign = -sign;
        }

        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
        found_digit = 1;
        result = result * 10 + (s[i] - '0');
        i++;
    }

    if (found_digit == 0)
    {
        return (0);
    }

    return (result * sign);
}
