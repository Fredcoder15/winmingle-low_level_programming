#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Calculates the length of a string.
 */

/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The number of characters in the string.
 */
int _strlen(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    return (i);
}
