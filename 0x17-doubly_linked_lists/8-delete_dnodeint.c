#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes node at given index
 * @head: pointer to head of doubly linked list
 * @index: index
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	del_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(del_node);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (del_node->next != NULL))
	{
		index -= 1;
		del_node = del_node->next;
	}
	if (index == 0)
	{
		del_node->prev->next = del_node->next;
		if (del_node->next != NULL)
			del_node->next->prev = del_node->prev;
		free(del_node);
		return (1);
	}
	return (-1);
}
