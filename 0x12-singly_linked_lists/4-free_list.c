#include "lists.h"
#include <stdlib.h>
/*
 * free - frees a list_t list
 * head - pointer to the first node
 */
 void free_list(list_t *head)
{
    list_t *tmp;
    if(head == NULL)
    {
     return;
    }

    while(head != NULL)
    {
     tmp = head->next;
     free(head->str);
     free(head);
     head = tmp;
    }
}
