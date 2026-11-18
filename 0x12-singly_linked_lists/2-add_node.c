#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    unsigned int len = 0;

    /*Check for safety*/
    if(head == NULL)
    {
     return(NULL);
    }
    /*Calculates length of strings*/
    while(str[len] != '\0')
    {
     len++;
    }
    /*Memory Allocation*/
    new = malloc(sizeof(list_t));
    if(new == NULL)
    {
     return(NULL);
    }
    
    /*Plus 1 for the null terminator of the string */
    new->str = malloc(len + 1);
    if(new->str == NULL)
    {
     free(new);
     return(NULL);
    }
    
    new->len = len;
    /*Copy Characters */
    len = 0;
    while(str[len] != '\0')
    {
     new->str[len] = str[len];
     len++;
    }
    new->str[len] = '\0';
    
    new->next = *head;
    *head = new;
    
    return(new);
}
