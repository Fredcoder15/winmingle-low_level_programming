#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Converts lowercase letters in a string to uppercase.
 */
char *string_toupper(char *s)
    {
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }

        i++;
    }

    return (s);
    }
