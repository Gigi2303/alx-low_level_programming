#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - This function frees the memory allocated to
 * a listint_t list and sets the head to NULL.
 * @head: The pointer to a pointer to the head of the list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node;

	if (head == NULL)
	return;
	while (*head != NULL)
	{
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	}
}

