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
	listint_t *copy = *head;
	listint_t *present = NULL;
	unsigned int num = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(copy);
	return (1);
	}

	while (num < index - 1)
	{
	if (!copy || !(copy->next))
	return (-1);
	copy = copy->next;
	num++;
	}

	present = copy->next;
	copy->next = present->next;
	free(present);

	return (1);
}
