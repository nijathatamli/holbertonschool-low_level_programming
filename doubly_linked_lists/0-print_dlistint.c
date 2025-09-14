#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of  list.
 * @h: pointer named head and this first node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *pdl = h;

int count = 0;
while (pdl != NULL)
{
printf("%d\n", pdl->n);
pdl = pdl->next;
count++;
}
return (count);
}
