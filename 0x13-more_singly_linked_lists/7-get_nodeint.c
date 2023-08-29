#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the
 * nth node of a listint_t linked list.
 * @head: the pointer to the head of the list.
 * @index: index of the node to retrieve (starting at 0).
 *
 * Return: returns the pointer to the nth node,
 * or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *present = head;
	unsigned int number = 0;

	while (present != NULL)
	{
	if (number == index)
	return (present);
	present = present->next;
	number++;
	}

	return (NULL);
}

