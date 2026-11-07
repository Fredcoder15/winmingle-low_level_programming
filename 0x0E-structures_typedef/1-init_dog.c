
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Initializes the members of a dog structure.
 */

#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a dog structure
 * @d: pointer to the dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    /* Do nothing if the structure pointer is NULL */
    if (d == NULL)
    {
        return;
    }

    /* Assign the supplied values to the structure members */
    d->name = name; /* or (*d).name = name;*/
    d->age = age; /* (*d).age = age */
    d->owner = owner; /* (*d).owner = owner */
}
