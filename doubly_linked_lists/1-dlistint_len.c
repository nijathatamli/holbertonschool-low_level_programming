#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
    dlistint_t *ld = h;
    int len = 0;
    while (ld != NULL)
    {
        len++;
        ld = ld->next; 
    }
    return (len);
}
