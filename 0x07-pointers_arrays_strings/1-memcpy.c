/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Copies bytes from one memory area to another.
 */
#include "main.h"

/**
 * _memcpy - copies n bytes from source to destination
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: A pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }

    return (dest);
}

