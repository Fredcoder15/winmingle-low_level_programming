
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to the head of the list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t **visited = NULL;
    listint_t *current;
    listint_t *next;
    listint_t **temp;
    size_t count = 0;
    size_t i;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;

    while (current != NULL)
    {
        for (i = 0; i < count; i++)
        {
            if (visited[i] == current)
            {
                free(visited);
                *h = NULL;
                return (count);
            }
        }

        temp = realloc(visited, (count + 1) * sizeof(*visited));
        if (temp == NULL)
        {
            free(visited);
            exit(98);
        }

        visited = temp;
        visited[count] = current;

        next = current->next;
        free(current);
        count++;

        current = next;
    }

    free(visited);
    *h = NULL;

    return (count);
}
