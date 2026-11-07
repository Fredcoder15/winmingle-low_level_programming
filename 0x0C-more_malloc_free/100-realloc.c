
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Changes the size of an existing memory allocation.
 */

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the previously allocated memory
 * @old_size: Size of the old memory block in bytes
 * @new_size: Requested size of the new memory block in bytes
 *
 * Return: Pointer to the new memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *old_mem;
    char *new_mem;
    unsigned int i;
    unsigned int copy_size;

    /* Return the original pointer when the sizes are equal. */
    if(new_size == old_size)
    {
    return (ptr);
    }

    /* Behave like malloc when the original pointer is NULL. */
    if(ptr == NULL)
    {
    return (malloc(new_size));
    }

    /* Free the old allocation when the requested size is zero. */
    if(new_size == 0)
    {
    free(ptr);
    return(NULL);
    }

    /* Allocate a new block with the requested size. */
    new_mem = malloc(new_size);

    /* Preserve the original block if the new allocation fails. */
    if(new_mem == NULL)
    {
    return (NULL);
    }

    /* Convert both pointers to character pointers for byte copying. */
    old_mem = (char *)ptr;

    /* Determine how many bytes must be copied. */
    if(old_size < new_size)
    {
    copy_size = old_size;
    }
    else
    {
    copy_size = new_size;
    }

    /* Copy the required bytes from the old block to the new block. */
    for (i = 0; i < copy_size; i++)
    {
    new_mem[i] = old_mem[i];
    }

    /* Release the old memory after successfully copying its contents. */
    free(ptr);

    return(new_mem);
}
