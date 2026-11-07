
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Concatenates s1 with at most n characters of s2.
 */

#include "main.h"
#include <stdlib.h>

/**
 * string_length - Counts the characters in a string
 * @str: The string to measure
 *
 * Return: The length of the string
 */
static unsigned int string_length(char *str)
{
    unsigned int length = 0;

    /* Count characters until the null terminator is reached. */
    while(*str != '\0')
    {
     length++;
     str++;
    }
    return(length);
}

/**
 * string_nconcat - Joins s1 and the first n characters of s2
 * @s1: The first string
 * @s2: The second string
 * @n: Maximum number of characters to copy from s2
 *
 * Return: Pointer to the new string, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_string;
    unsigned int len1, len2;
    unsigned int i, j;

    /* Treat NULL strings as empty strings. */
    if(s1 == NULL)
    {
    s1 = "";
    }

    if(s2 == NULL)
    {
    s2 = "";
    }

    /* Find the lengths of both strings. */
    len1 = string_length(s1);
    len2 = string_length(s2);

    /* Do not copy more characters than s2 actually contains. */
    if(n >= len2)
    {
      n = len2;
    }

    /* Allocate space for s1, the selected part of s2, and '\0'. */
    new_string = malloc(len1 + n + 1);

    /* Return NULL if memory allocation fails. */
    if(new_string == NULL)
    {
     return (NULL);
    }

    /* Copy all characters from s1 into the new memory. */
    for(i = 0; i < len1; i++)
    {
    new_string[i] = s1[i];
    }

    /* Copy the first n characters from s2 after s1. */
    for( j = 0; j < n; j++)
    {
    new_string[i + j] = s2[j];
    }
    /* Finish the new string with a null terminator. */
    new_string[i + j] = '\0';
    return (new_string);
}
