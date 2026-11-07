
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Prints the information stored in a dog structure.
 */

#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints information about a dog
 * @d: pointer to the dog structure
 */
void print_dog(struct dog *d)
{
    /* Print nothing if the structure pointer is NULL */
    if (d == NULL)
    {
        return;
    }

    /* Print the name, or nil if the name pointer is NULL */
    if (d->name == NULL)
    {
        printf("Name: (nil)\n");
    }
    else
    {
        printf("Name: %s\n", d->name);
    }

    /* Print the age */
    printf("Age: %f\n", d->age);

    /* Print the owner, or nil if the owner pointer is NULL */
    if (d->owner == NULL)
    {
        printf("Owner: (nil)\n");
    }
    else
    {
        printf("Owner: %s\n", d->owner);
    }
}
