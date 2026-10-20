
#include "main.h"

/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Sums even Fibonacci numbers not exceeding 4000000.
*/

int main(void)
    {
    unsigned long int f = 1;
    unsigned long int r = 2;
    unsigned long int next;
    unsigned long int sum = 0;
    unsigned long int divisor;
    unsigned long int temp;

    while (r <= 4000000)
    {
        if (r % 2 == 0)
        {
            sum += r;
        }

        next = f + r;
        f = r;
        r = next;
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
