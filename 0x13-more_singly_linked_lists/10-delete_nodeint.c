#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to the head pointer
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int pos = 0;
    listint_t *current;
    listint_t *temp;

    if (head == NULL || *head == NULL)
    {
        return (-1);
    }

    /* Handles the first node */
    if (index == 0)
    {
        current = (*head)->next;
        free(*head);
        *head = current;
        return (1);
    }

    current = *head;

    while (current != NULL && pos < index - 1)
    {
        current = current->next;
        pos++;
    }

    /* Check whether the requested node exists */
    if (current == NULL || current->next == NULL)
    {
        return (-1);
    }

    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}
