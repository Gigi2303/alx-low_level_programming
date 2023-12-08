#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head node
 * @idx: the index
 * @n: the new node data
 *
 * Return: the address of the new node or NUll if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int lap = 0;
	dlistint_t *temp, *current, *new_node;

	temp = *h, current = *h;

	/* get the length of the doubly linked list*/
	while (temp != NULL)
	{
		lap++;
		temp = temp->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/* if node is to be added at index 0(first position) */
	if (idx == 0)
		add_dnodeint(h, n);
	/* if in the middle */
	else if (idx > 0 && idx < lap)
	{
		while (current->next != NULL)
		{
			idx -= 1;
			current = current->next;
			if (idx == 0)
			{
				new_node->next = current;
				new_node->prev = current->prev;
				current->prev->next = new_node;
				current->prev = new_node;
				return (new_node);
			}
		}
	}
	/* if last index */
	else if (idx == lap)
		add_dnodeint_end(h, n);
	return (NULL);
}

