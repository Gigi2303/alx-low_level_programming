#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: pointer to the list to be freed
 */
void free_list(list_t *head)
{
	list_t *go = head;

	while (head != NULL)
	{
	head = head->next;
	free(go->str);
	free(go);
	}
}

