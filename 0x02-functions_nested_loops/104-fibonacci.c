#include "main.h"

/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Prints the first 98 Fibonacci numbers.
*/

void print_big_number(unsigned long int n)
    {
    unsigned long int divisor;
    unsigned long int temp;

    divisor = 1;
    temp = n;

    while (temp / 10 != 0)
    {
        divisor *= 10;
        temp /= 10;
    }

    while (divisor != 0)
    {
        _putchar((n / divisor) + '0');
        n %= divisor;
        divisor /= 10;
    }
    }

void print_big_fibonacci(unsigned long int high, unsigned long int low)
    {
    unsigned long int divisor;

    if (high != 0)
    {
        print_big_number(high);
        divisor = 100000000;

        while (divisor != 0)
        {
            _putchar((low / divisor) + '0');
            low %= divisor;
            divisor /= 10;
        }
    }
    else
    {
        print_big_number(low);
    }
    }

int main(void)
    {
    unsigned long int x_high = 0;
    unsigned long int x_low = 1;
    unsigned long int y_high = 0;
    unsigned long int y_low = 2;
    unsigned long int next_high;
    unsigned long int next_low;
    unsigned long int carry;
    unsigned long int base = 1000000000;
    int count;

    for (count = 1; count <= 98; count++)
    {
        if (count == 1)
        {
            print_big_fibonacci(x_high, x_low);
        }
        else if (count == 2)
        {
            print_big_fibonacci(y_high, y_low);
        }
        else
        {
            next_low = x_low + y_low;
            carry = 0;

            if (next_low >= base)
            {
                next_low -= base;
                carry = 1;
            }

            next_high = x_high + y_high + carry;

            x_high = y_high;
            x_low = y_low;
            y_high = next_high;
            y_low = next_low;

            print_big_fibonacci(y_high, y_low);
        }

        if (count != 98)
        {
            _putchar(',');
            _putchar(' ');
        }
    }

    _putchar('\n');

    return (0);
    }
