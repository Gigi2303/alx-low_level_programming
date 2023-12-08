#include "lists.h"

/**
 * sum_dlistint - This function get the sum of all the data(n) of a
 * doubly linked list
 * @head: the head node
 *
 * Return: the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sums = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sums += head->n;
		head = head->next;
	}
	return (sums);
}
