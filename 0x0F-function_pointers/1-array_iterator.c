 
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Executes a function on every element of an array.
 */

#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on each array element
 * @array: pointer to the array
 * @size: number of elements in the array
 * @action: pointer to the function to execute
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    /* Stop if the array, action function, or size is invalid. */
    if(array == NULL || action == NULL || size == 0)
    {
      return;
    }

    /* Visit each array element and pass it to the supplied function. */
    for(i = 0; i < size; i++)
    {
      action(array[i]);
    }
}
