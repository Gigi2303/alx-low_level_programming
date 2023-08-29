#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - This function frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t set = 0;
	listint_t *copy;

	while (*h)
	{
	set++;
	copy = (*h)->next;
	free(*h);
	*h = copy;

	if ((void *)copy == (void *)*h)
	{
	*h = NULL;
	break;
	}
	}

	return (set);
}

