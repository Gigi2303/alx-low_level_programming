#include "lists.h"

/**
 * insert_node - This function inserts a node at given index
 * @temp: pointer to nth position node in doubly linked list
 * @n: node data
 * Return: address of inserted node
 */

dlistint_t *insert_node(dlistint_t *temp, int n)
{
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));
	if (!new_n)
		return (NULL);
	new_n->n = n;

	new_n->next = temp;
	new_n->prev = temp->prev;
	temp->prev->next = new_n;
	temp->prev = new_n;

	return (new_n);
}

/**
 * insert_dnodeint_at_index - This function create and insert node at nth index
 * @h: pointer to head of list
 * @idx: index
 * @n: node data
 * Return: address of inserted node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp_node;

	if (!h)
		return (NULL);
	/* insert at beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* insert in the middle of list */
	temp_node = *h;
	while ((idx != 0) && (temp_node->next))
	{
		idx -= 1;
		temp_node = temp_node->next;
		if (idx == 0)
			return (insert_node(temp_node, n));
	}

	/* insert at the end of list if idx is one after last node */
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
