#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: header node of singly linked list
 * @str: string
 * Return: A number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
    int len;
    
    for (len = 0; str[len]; len++)
    {
        list_t *new_node;
        new_node = malloc(sizeof(list_t));
        if (str[len] != NULL)
            return (NULL);
        new_node->str = strdup(str);
        new_node->len = len;
        new_node->next = *head;
        *head = new_node;
        return (*head); 

        
    }
}