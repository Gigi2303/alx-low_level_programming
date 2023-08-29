#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - this function reverses a listint_t linked list.
 * @head: the pointer to a pointer to the head of the list.
 * Return: returns a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *present = (*head);
	listint_t *next = NULL;

	while (present)
	{
	next = present->next;
	present->next = previous;
	previous = present;
	present = next;
	}

	*head = previous;

	return (*head);
}

