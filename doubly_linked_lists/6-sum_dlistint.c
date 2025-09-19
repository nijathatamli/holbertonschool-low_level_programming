#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 *                of a doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n), 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
