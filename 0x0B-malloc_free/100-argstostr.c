/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Concatenates all program arguments into a
 *              dynamically allocated string.
 */

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all program arguments
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: Pointer to the new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
    int i;
    int j;
    int k = 0;
    int size = 0;
    char *str;
    if(ac == 0 || av == NULL)
    {
      return (NULL);
    }
    /* The outer loop checks each argument */
    for(i = 0; i < ac; i++)
    {
    /* The inner loop checks each character in the argument */
      for(j = 0; av[i][j] != '\0'; j++)
      {
        size++;
      }
      /* This is for every extra newline character that is required */
      size++;
    }
    /* This does the memory allocation */
    str = malloc((size + 1) * sizeof(char));
    if(str == NULL)
    {
    return (NULL);
    }
    /* This is where the catenation happens */
    for(i = 0; i < ac; i++)
    {
      for(j = 0; av[i][j] != '\0'; j++)
      {
        str[k] = av[i][j];
	/* Moves to the next position for the next character, also this is not a inner loop controlled increment but necessary */
        k++;
      }
      /* At the end of every argument comes a newline character */
      str[k] = '\n';
      k++;
    }
    str[k] = '\0';
    return(str);
}

