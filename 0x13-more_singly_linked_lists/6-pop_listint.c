#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - this function deletes the head
 * node of a listint_t linked list.
 * @head: thepointer to a pointer to the head of the list.
 * Return: returns the data of the deleted head node,
 * and 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int content;

	if (head == NULL || *head == NULL)
	return (0);

	content = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (content);
}

