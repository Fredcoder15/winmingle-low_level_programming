/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Locates a character in a string.
 */
#include "main.h"

/**
 * _strchr - locates the first occurrence of a character
 * @s: string to search
 * @c: character to locate
 *
 * Return: Pointer to the first occurrence, or NULL if not found
 */
char *_strchr(char *s, char c)
    {
    while (*s != '\0')
    {
        if (*s == c)
        {
            return (s);
        }

        s++;
    }

    if (c == '\0')
    {
        return (s);
    }

    return (NULL);
    }
