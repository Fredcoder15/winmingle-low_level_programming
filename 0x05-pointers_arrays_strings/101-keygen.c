#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Generates a password with a character sum of 2772.
 */

/**
 * main - Generates a password for the crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;
    int target;
    int value;

    sum = 0;
    target = 2772;

    while (sum < target)
    {
        value = 97;

        while (value <= 122 && sum + value <= target)
        {
            _putchar(value);
            sum += value;
            value = 97;
        }

        if (sum < target)
        {
            value = 65;

            while (value <= 90 && sum + value <= target)
            {
                _putchar(value);
                sum += value;
                value = 65;
            }
        }

        if (sum < target)
        {
            value = 48;

            while (value <= 57 && sum + value <= target)
            {
                _putchar(value);
                sum += value;
                value = 48;
            }
        }
    }

    _putchar('\n');

    return (0);
}