#include "lists.h"

/**
 * print_dlistint - This function print all elements of a doubly linked list
 * @h: the head node
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_counter = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_counter++;
	}
	return (node_counter);
}
