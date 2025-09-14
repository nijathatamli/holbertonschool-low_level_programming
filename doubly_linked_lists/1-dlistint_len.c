#include "lists.h"
/**
 * dlistint_len - a function for print  number of elements in a linked list
 * @h: pointer named head and this first node
 * Return: the len of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *ld = h;
int len = 0;
while (ld != NULL)
{
len++;
ld = ld->next;
}
return (len);
}
