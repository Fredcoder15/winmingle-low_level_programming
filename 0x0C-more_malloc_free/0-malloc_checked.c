/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Allocates memory and terminates the program if
 *              the allocation fails.
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    /* Request the specified number of bytes from the heap. */
    ptr = malloc(b);

    /* Terminate the program with status 98 if allocation fails. */
    if (ptr == NULL)
    {
    exit(98);
    }

    /* Return the address of the allocated memory. */
    return (ptr);
}
