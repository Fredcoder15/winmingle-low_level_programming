
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to duplicate
 *
 * Return: address of the new node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
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

        /* Copy characters */
        len = 0;
        while (str[len] != '\0')
        {
            new->str[len] = str[len];
            len++;
        }
        new->str[len] = '\0';

        new->len = len;
    }

    /* Insert at the beginning */
    new->next = *head;
    *head = new;

    return (new);
}
