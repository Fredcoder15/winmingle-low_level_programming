/*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Allocates buffer on the heap and fills the array with characters.
*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{    
    unsigned int i;
    char *array;
    if(size == 0)
    {
    return(NULL);
    }
    array = malloc(size * sizeof(char));
    if(array == NULL)
    {
    return(NULL);
    }
    
    for(i = 0; i < size; i++)
    {
    array[i] = c;
    }
    return(array);
}

