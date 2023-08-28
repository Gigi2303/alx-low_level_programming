#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - This function frees memory allocated to a listint_t list.
 * @head: pointer to the head of the list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *new_head;

	while (head != NULL)
	{
	new_head = head->next;
	free(head);
	head = new_head;
	}
}

