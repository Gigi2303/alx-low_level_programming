#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a double linked list
 * @h: the head node
 *
 * Return: the number of elements in a double linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t node_count = 0;

	while (curr != NULL)
	{
		curr = curr->next;
		node_count++;
	}
	return (node_count);
}
