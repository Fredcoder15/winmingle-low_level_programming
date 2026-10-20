
#include "main.h"

/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Sums multiples of 3 or 5 below 1024.
*/

int main(void)
    {
    int n;
    int sum = 0;
    int divisor;
    int temp;

    for (n = 0; n < 1024; n++)
    {
        if (n % 3 == 0 || n % 5 == 0)
        {
            sum += n;
        }
    }

    divisor = 1;
    temp = sum;

    while (temp / 10 != 0)
    {
        divisor *= 10;
        temp /= 10;
    }

    while (divisor != 0)
    {
        _putchar((sum / divisor) + '0');
        sum %= divisor;
        divisor /= 10;
    }

    _putchar('\n');

    return (0);
    }
