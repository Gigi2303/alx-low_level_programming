#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: the head of doubly linked list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *bell;


	while (head != NULL)
	{
		bell = head;
		head = head->next;
		free(bell);
	}
}

