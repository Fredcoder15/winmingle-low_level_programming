#include <stdlib.h>
#include "lists.h"

/**                                        * free_listint - frees nodes in a list and the head
 * * @head: pointer to the head of the list  
 * * @n: value stored in node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
    listint_t *tmp;
    while(head != NULL)
    {
     tmp = head->next;
     free(head);
     head = tmp;
    }
}
