#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - this function adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 * Return:returns the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	char *copy = strdup(str);
	size_t len = 0;

	if (str == NULL)
	return (NULL);

	if (node == NULL)
	return (NULL);

	if (copy == NULL)
	{
	free(node);
	return (NULL);
	}

	while (str[len] != '\0')
	len++;

	node->str = copy;
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
	*head = node;
	}
	else
	{
	list_t *current = *head;

	while (current->next != NULL)
	current = current->next;
	current->next = node;
	}

	return (node);
}
