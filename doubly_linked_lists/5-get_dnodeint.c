#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *temp = head;
    if (head == NULL)
        return (NULL);
    while (temp != NULL && index > 0)
    {
        temp =temp->next;
        index--;
    }
    return temp;
}