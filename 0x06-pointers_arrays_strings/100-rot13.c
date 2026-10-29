#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Encodes a string using ROT13.
 */
char *rot13(char *s)
    {
    int i = 0;

    while (s[i] != '\0')
    {
        if ((s[i] >= 'A' && s[i] <= 'M') ||
            (s[i] >= 'a' && s[i] <= 'm'))
        {
            s[i] = s[i] + 13;
        }
        else if ((s[i] >= 'N' && s[i] <= 'Z') ||
                 (s[i] >= 'n' && s[i] <= 'z'))
        {
            s[i] = s[i] - 13;
        }

        i++;
    }

    return (s);
    }
