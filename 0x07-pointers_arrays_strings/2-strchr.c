
/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Searches a string for the first occurrence of a character.
 */
#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to find
 *
 * Return: pointer to the first matching character, or NULL if not found
 */
char *_strchr(char *s, char c)
{
    unsigned int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return (&s[i]);
        }
        i++;
    }

    if (s[i] == '\0')
    {
    return(NULL);
    }

    return (NULL);
}

