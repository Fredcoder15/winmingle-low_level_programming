
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Creates a duplicate of a string in newly
 *              allocated memory.
 */

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
    int i = 0;
    int len = 0;
    char *copy;
    if (str == NULL)
    {
    return (NULL);
    }
    while (str[len] != '\0')
    {
    len++;
    }
    copy = malloc((len + 1) * sizeof(char));
    if (copy == NULL)
    {
    return (NULL);
    }

    while (i < len)
    {
    copy[i] = str[i];
    i++;
    }
    copy[len] = '\0';
    return (copy);
}
