/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Searches a string for any character in another string.
 */
#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first matching character in a string
 * @s: string to search
 * @accept: string containing characters to look for
 *
 * Return: Pointer to the first matching character, or NULL if none is found
 */
char *_strpbrk(char *s, char *accept)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                return (&s[i]);
            }
        }
    }

    return (NULL);

}

