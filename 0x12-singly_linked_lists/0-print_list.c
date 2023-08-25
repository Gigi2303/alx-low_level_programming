#include <stdio.h>
#include "lists.h"

/**
 * print_list - This function  prints the
 * elements of a linked list
 * @h: A pointer to list_t
 *
 * Return: the number of nodes it prints
 */

size_t print_list(const list_t *h)
{
	size_t element = 0;
	const list_t *node = h;

	if (node == NULL)
	{
	printf("[0] (nil)\n");
	return (0);
	}

	while (node != NULL)
	{
	printf("[%lu] %s\n", element, node->str);
	element++;
	node = node->next;
	}

	return (element);
}
