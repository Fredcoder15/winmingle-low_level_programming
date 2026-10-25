#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Generates a password with a character sum of 2772.
 */

/**
 * main - Generates a random password.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;
    int target;
    int charset_size;
    char c;
    char charset[] = "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                     "0123456789"
                     "@#$_&*";

    sum = 0;
    target = 2772;
    charset_size = sizeof(charset) - 1;

    srand(time(NULL));

    while (sum < target)
    {
        c = charset[rand() % charset_size];

        if (sum + c <= target)
        {
            if (sum + c == target)
            {
                putchar(c);
                sum += c;
                break;
            }

            if (target - (sum + c) >= 35)
            {
                putchar(c);
                sum += c;
            }
        }
    }

    putchar('\n');

    return (0);
}
