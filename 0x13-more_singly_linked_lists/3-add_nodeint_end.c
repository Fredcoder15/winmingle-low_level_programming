#include <stdlib.h>
#include "lists.h"

/**                                        * add_nodeint_end - adds a new node at the end of a list                          * @head: pointer to the head of the list  * @n: value to store in the new node      *
 * Return: address of the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;
    
    new = malloc(sizeof(listint_t));
    if(new == NULL)
    {
     return(NULL);
    }
    new->n = n;
    new->next = NULL;

    /*handles empty*/
    if(*head == NULL)
    {
     *head = new;
     return(new);
    }

    /*Finds the last node */
    current = *head;
    while(current->next != NULL)
    {
     current = current->next;
    }

    current->next = new;

    return(new);
}
