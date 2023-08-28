#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - This function adds a new node at
 * the beginning of a listint_t list.
 * @head: the pointer to a pointer to the head of the list.
 * @n: integer value to add to the new node.
 * Return: returns address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	return (NULL);

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}

