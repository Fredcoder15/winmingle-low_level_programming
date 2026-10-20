
#include "main.h"

/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Prints the first 50 Fibonacci numbers.
*/

int main(void)
    {
    unsigned long int x = 1;
    unsigned long int y = 2;
    unsigned long int next;
    unsigned long int num;
    unsigned long int divisor;
    unsigned long int temp;
    int count;

    for (count = 1; count <= 50; count++)
    {
        if (count == 1)
        {
            num = x;
        }
        else if (count == 2)
        {
            num = y;
        }
        else
        {
            next = x + y;
            x = y;
            y = next;
            num = next;
        }

        if (count > 1)
        {
            _putchar(',');
            _putchar(' ');
        }

        divisor = 1;
        temp = num;

        while (temp / 10 != 0)
        {
            divisor *= 10;
            temp /= 10;
        }

        while (divisor != 0)
        {
            _putchar((num / divisor) + '0');
            num %= divisor;
            divisor /= 10;
        }
    }

    _putchar('\n');

    return (0);
    }
