#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this function returns the number of elements in a linked list
 * @h: A pointer to the list_t
 *
 * Return: Returns the number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;
	const list_t *mode = h;

	if (mode == NULL)
	{
	return (0);
	}

	while (mode != NULL)
	{
	num++;
	mode = mode->next;
	}

	return (num);
}
