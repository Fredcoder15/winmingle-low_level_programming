
#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;
    if(h == NULL)
    {
     return(0);
    }
    /*counts the nodes*/
    while(h != NULL)
    {
     count++;
     h = h->next;
    }
    return(count);
}
