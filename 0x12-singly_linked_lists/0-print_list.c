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

	while (node)
	{
	if (!node->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", node->len, node->str);
	element++;
	node = node->next;
	}

	return (element);
}
