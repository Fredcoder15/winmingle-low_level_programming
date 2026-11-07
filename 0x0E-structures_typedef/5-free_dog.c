
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Frees memory allocated for a dog.
 */

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog and its allocated strings
 * @d: pointer to the dog structure
 */
void free_dog(dog_t *d)
{
    /* Do nothing if the pointer is NULL */
    if (d == NULL)
    {
        return;
    }

    /* Free the separately allocated strings */
    free(d->name);
    free(d->owner);

    /* Free the structure itself */
    free(d);
}
