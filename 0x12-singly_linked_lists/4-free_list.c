#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: pointer to the list to be freed
 */
void free_list(list_t *head)
{
	list_t *tp;

	while (head)
	{
	tp = head->next;
	free(head->str);
	free(head);
	head = tp;
	}
}

