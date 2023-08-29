#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes the node
 * at a given index in a listint_t list.
 * @head: the pointer to a pointer to the head of the list.
 * @index: an index of the node to delete (starting at 0).
 * Return: returns 1 if the deletion succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copy = (*head)->next;
	listint_t *present = *head;
	listint_t *previous = NULL;
	unsigned int num = 0;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
	free(*head);
	*head = copy;
	return (1);
	}

	while (num < index && present != NULL)
	{
	previous = present;
	present = present->next;
	num++;
	}

	if (num < index || present == NULL)
	return (-1);

	previous->next = present->next;
	free(present);

	return (1);
}
