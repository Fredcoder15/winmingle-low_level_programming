
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Searches an array for an integer matching a condition.
 */

#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function
 *
 * Return: Index of the first matching element, or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    /* Return -1 if the array, comparison function, or size is invalid. */
    if (array == NULL || cmp == NULL || size <= 0)
    {
      return (-1);
    }

    /* Check each array element using the supplied comparison function. */
    for(i = 0; i < size; i++)
    {
        /* Return the index immediately when an element matches. */
	if(cmp(array[i]) != 0)
	{
          return(i);
	}
    }
        
    /* No element matched the condition. */
    return(-1);
}
