#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - this function frees a listint_t list
 * @h: the pointer to the first node in the linked list
 *
 * Return: returns the number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t set = 0;
	int b;
	listint_t *copy;

	if (!h || !*h)
		return (0);

	while (*h)
	{
	b = *h - (*h)->next;
	if (b > 0)
	{
	copy = (*h)->next;
	free(*h);
	*h = copy;
	set++;
	}
	else
	{
	free(*h);
	*h = NULL;
	set++;
	break;
	}
	}

	*h = NULL;

	return (set);
}

