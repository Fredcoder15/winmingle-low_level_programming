
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list safely
 * @head: pointer to the first node
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t **visited = NULL;
    const listint_t **temp;
    size_t count = 0;
    size_t i;

    while (head != NULL)
    {
        for (i = 0; i < count; i++)
        {
            if (visited[i] == head)
            {
                printf("-> [%p] %d\n", (void *)head, head->n);
                free(visited);
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
        visited[count] = head;

        printf("[%p] %d\n", (void *)head, head->n);
        count++;

        head = head->next;
    }

    free(visited);
    return (count);
}
