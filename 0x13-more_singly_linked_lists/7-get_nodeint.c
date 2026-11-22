#include "lists.h"

/**
 *  * get_nodeint_at_index - returns the node at a given index
 *   * @head: pointer to the first node
 *   @index: index of the node to return
 *
 *  Return: address of the node, or NULL if it does not exist
 *       */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count = 0;
    if(head == NULL)
    {
      return(NULL);
    }
    
    while(head != NULL)
    {
     if(index == count){
       return(head);
     }
     count++;
     head = head->next;
    }

    return(NULL);
}
