#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**                                        *  * insert_nodeint_at_index - returns the address of a newmy added node at idx position
 *  *   * @head: pointer to the address of a head pointer to the first node
 *   *  Return: newly added node or NULL if failed.
 *   */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *current;
    listint_t *new;
    unsigned int index = 0;

    if(head == NULL)
    {
     return(NULL);
    }

    /*Create the node itself*/
    new = malloc(sizeof(listint_t));
    if(new == NULL)
    {
     return(NULL);
    }
    new->n = n;

    /*Handles empty list*/
    if(*head == NULL)
    {
     *head = new;
     return(new);
    }
    

    if(idx == 0)
    {
      current = *head;
      new->next = current;
      *head = new;
      return(new);
    }
    
    current = *head;
    while(current != NULL && index < idx - 1)
    {
      current = current->next;
      index++;
      if(current == NULL)
      {
       free(new);
       return(NULL);
      }
    }
    
    new->next = current->next;
    current->next = new;
    return(new);
}
