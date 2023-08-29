#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - This function returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the list.
 * Return: returns the sum of all the data, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *pet = head;

	while (pet != NULL)
	{
	sum += pet->n;
	pet = pet->next;
	}

	return (sum);
}

