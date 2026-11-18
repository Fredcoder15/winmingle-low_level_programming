
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @str: string to duplicate
 *
 * Return: address of the new node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{   
    list_t *new;
    list_t *current;
    unsigned int len = 0;
    /*Safety Check*/
    if(head == NULL || str == NULL)
    {
     return(NULL);
    }
     /*Calculates length of string*/
    while(str[len] != '\0')
    {
     len++;
    }

    /*Allocates memory for node and its string member */
    new = malloc(sizeof(list_t));
    if(new == NULL)
    {
     return(NULL);
    }
    new->str = malloc((len + 1) * sizeof(char));    if(new->str == NULL)
    {
     free(new);
     return(NULL);
    }

    /*Copy String */
    len = 0;
    while(str[len] != '\0')
    {
     new->str[len] = str[len];
     len++;
    }
    new->str[len] = '\0';

    new->len = len;
    new->next = NULL;

    /* Check empty list to avoid seg fault*/
    if(*head == NULL)
    {
      *head = new;
      return(new);
    }
   
    /* Find the last Node*/
    current = *head;
    while(current->next != NULL)
    {
     current = current->next;
    }

    /*Attach Node*/
    current->next = new;

    return(new);
}
