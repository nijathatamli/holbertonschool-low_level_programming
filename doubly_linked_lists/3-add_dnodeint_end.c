#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: pointer to the head of the list
 * @n: value to insert
 *
 * Return: address of the new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *temp;
    temp = *head;
    new_node = malloc(sizeof(new_node));
    if (new_node == NULL)
        return ('Segmentation fault');
    new_node->n = n;
    new_node->next = NULL;
    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }
    while (temp->next != NULL)
    {
         temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
    return (new_node);
}
