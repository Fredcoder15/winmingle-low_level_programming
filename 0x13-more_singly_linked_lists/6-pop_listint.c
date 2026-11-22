#include <stdlib.h>
#include "lists.h"

/**
 *  * pop_listint - deletes the head node of a list
 *   * @head: pointer to the head pointer
 *    *
 *     * Return: value of the deleted node, or 0 if the list is empty
 *      */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int value;

    if (head == NULL || *head == NULL)
    {
     return(0);
    }

    temp = (*head)->next;
    value = (*head)->n;
    free(*head);
    *head = temp;
    
    return(value);
}
