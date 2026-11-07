
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Creates a dog and copies its string members.
 */

#include <stdlib.h>
#include "dog.h"

/**
 * string_length - counts the characters in a string
 * @str: string whose length is required
 *
 * Return: Number of characters in the string
 */
static unsigned int string_length(char *str)
{
    unsigned int length = 0;
    while(str[length] != '\0')
    {
      length++;
    }
    return(length);
}

/**
 * copy_string - copies one string into another
 * @dest: destination buffer
 * @src: source string
 *
 * Return: Pointer to the destination string
 */
static char *copy_string(char *dest, char *src)
{
    unsigned int i = 0;
    while(src[i] != '\0')
    {
     dest[i] = src[i];
     i++;
    }
    dest[i] = '\0';
    return(dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{  
    dog_t *dog;
    /* Reject NULL string arguments */
    if(name == NULL || owner == NULL)
    {
    return(NULL);
    }
    /* Allocate memory for the structure */
    dog = malloc(sizeof(dog_t));
    if(dog == NULL)
    {
    return(NULL);
    }
    /* Allocate enough memory for the name and its null terminator */
    dog->name = malloc(string_length(name) + 1);
    if(dog->name == NULL)
    {
      free(dog);
      return(NULL);
    }
    /* Allocate enough memory for the owner and its null terminator */
    dog->owner = malloc(string_length(owner) + 1);
    if(dog->owner == NULL)
    {
     free(dog->name);
     free(dog);
     return(NULL);
    }
    /* Copy both strings into their allocated memory */
    copy_string(dog->name, name);
    copy_string(dog->owner, owner);
    /* Store the age directly in the structure */
    dog->age =age;

    return(dog);
}   

