
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

    /* Check for safety */
    if (head == NULL)
    {
        return (NULL);
    }

    /* Allocate memory for the node */
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        return (NULL);
    }

    /* Handle a NULL string */
    if (str == NULL)
    {
        new->str = NULL;
        new->len = 0;
    }
    else
    {
        /* Calculate string length */
        while (str[len] != '\0')
        {
            len++;
        }

        /* Allocate memory for the string */
        new->str = malloc(len + 1);
        if (new->str == NULL)
        {
            free(new);
            return (NULL);
        }

        /* Copy the string */
        len = 0;
        while (str[len] != '\0')
        {
            new->str[len] = str[len];
            len++;
        }
        new->str[len] = '\0';

        new->len = len;
    }

    new->next = NULL;

    /* Handle an empty list */
    if (*head == NULL)
    {
        *head = new;
        return (new);
    }

    /* Find the last node */
    current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    /* Attach the new node */
    current->next = new;

    return (new);
}
