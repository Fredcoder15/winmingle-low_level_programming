#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint
 * @head: pointer to the head pointer
 * Returns: a pointer to the first node of the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current;
    if(head == NULL || *head == NULL)
    {
     return(NULL);
    }
    
    current = *head;
    while(current != NULL)
    {
      *head = current->next;
      current->next = prev;
      prev = current;
      current = *head;
    }

    *head = prev;
    return(*head);
}
