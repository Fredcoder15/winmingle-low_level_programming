
/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Compares two strings using recursive wildcard matching.
 */
#include "main.h"

/**
 * wildcmp - compares two strings with wildcard support
 * @s1: first string
 * @s2: second string, which may contain the wildcard *
 *
 * Return: 1 if the strings match, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '\0' && *s1 == '\0')
    {
        return (1);
    }

    if (*s2 == '*')
    {
        return (wildcmp(s1, s2 + 1) ||
                (*s1 != '\0' && wildcmp(s1 + 1, s2)));
    }

    if (*s1 == *s2)
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }

    return (0);
}
