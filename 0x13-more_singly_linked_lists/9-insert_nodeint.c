#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts a new node at
 * a given position in a listint_t list.
 * @head: this is the pointer to a pointer to the head of the list.
 * @idx: the index at which the new node should be inserted.
 * @n: an integer value to add to the new node.
 * Return: returns the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *present = *head;
	listint_t *previous = NULL;
	unsigned int num = 0;

	if (head == NULL)
	return (NULL);

	if (new == NULL)
	return (NULL);

	new->n = n;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}

	while (num < idx && present != NULL)
	{
	previous = present;
	present = present->next;
	num++;
	}

	if (num < idx)
	{
	free(new);
	return (NULL);
	}

	new->next = present;
	previous->next = new;

	return (new);
}

