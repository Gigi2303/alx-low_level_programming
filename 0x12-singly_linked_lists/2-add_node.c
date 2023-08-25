#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this function adds a new node at the beginning of a list_t list
 * @head: A pointer to a pointer to the head of the list
 * @str: The string to be added to the new node
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *copy = strdup(str);
	size_t len = 0;

	if (str == NULL)
	return (NULL);

	if (new == NULL)
	return (NULL);

	if (copy == NULL)
	{
	free(new);
	return (NULL);
	}

	while (str[len] != '\0')
	len++;

	new->str = copy;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}

