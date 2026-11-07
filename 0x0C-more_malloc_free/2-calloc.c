
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Allocates memory for an array and initializes it to zero.
 */

#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero
 * @nmemb: Number of elements to allocate
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr;
    unsigned int i;
    unsigned int total_size;

    /* Return NULL if either dimension is zero. */
    if(nmemb == 0 || size == 0)
    {
    return(NULL);
    }

    /* Prevent overflow when calculating the total allocation size. */
    if(nmemb > UINT_MAX / size)
    {
    return(NULL);
    }

    /* Calculate the total number of bytes required. */
    total_size = nmemb * size;

    /* Allocate the required memory. */
    ptr = malloc(total_size);

    if(ptr == NULL)
    {
    return (NULL);
    }

    /* Set every allocateid byte to zero. */
    for(i = 0; i < total_size; i++)
    {
    ptr[i] = 0;
    }

    return(ptr);
}
