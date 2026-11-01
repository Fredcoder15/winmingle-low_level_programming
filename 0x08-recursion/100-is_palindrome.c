
/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Checks whether a string is a palindrome using recursion.
 */
#include "main.h"

/**
 * palindrome_length - calculates the length of a string
 * @s: string whose length is being calculated
 *
 * Return: Length of the string
 */
int palindrome_length(char *s)
{
    if (*s == '\0')
    {
        return (0);
    }

    return (1 + palindrome_length(s + 1));
}

/**
 * palindrome_helper - compares characters from both ends
 * @s: string being checked
 * @start: starting position
 * @end: ending position
 *
 * Return: 1 if the characters match throughout, otherwise 0
 */
int palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
    {
        return (1);
    }

    if (s[start] != s[end])
    {
        return (0);
    }

    return (palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
    int length;

    length = palindrome_length(s);

    return (palindrome_helper(s, 0, length - 1));
}
