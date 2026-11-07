
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Creates an array containing integers from min to max.
 */

#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: The smallest integer in the array
 * @max: The largest integer in the array
 *
 * Return: Pointer to the array, or NULL if allocation fails
 */
int *array_range(int min, int max)
{
    int *arr;
    size_t size;
    size_t i;
    long value;

    /* A range cannot be created when min is greater than max. */
    if (min > max)
    {
    return (NULL);
    }

    /* Calculate the range length without signed integer overflow. */
    size = (size_t)((long)max - (long)min) + 1;

    /* Allocate enough memory for every integer in the range. */
    arr = malloc(size * sizeof(int));

    if(arr == NULL)
    {
    return (NULL);
    }

    /* Fill the array with consecutive integers. */
    for(i = 0; i < size; i++)
    {
    value = (long)min + (long)i;
    arr[i] = (int)value;
    }
    return (arr);
}
