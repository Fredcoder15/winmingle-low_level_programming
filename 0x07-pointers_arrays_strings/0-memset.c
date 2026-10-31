/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Fills a memory area with a constant byte.
 */
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: byte to fill the memory area with
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
    {
    unsigned int i;

    for (i = 0; i < n; i++)
    {
    s[i] = b;
    }

    return (s);
    }
