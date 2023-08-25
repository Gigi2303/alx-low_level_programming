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

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	element++;
	h = h->next;
	}

	return (element);
}
