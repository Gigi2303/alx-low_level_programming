#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - this function prints a listint_t linked list.
 * @head: pointer to the head of the list.
 * Return: returns the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *top, *beats;
	size_t count = 0;

	top = beats = head;

	while (top && beats && beats->next)
	{
	printf("[%p] %d\n", (void *)top, top->n);
	count++;

	top = top->next;
	beats = beats->next->next;

	if (top == beats)
	{
	printf("-> [%p] %d\n", (void *)top, top->n);
	exit(98);
	}
	}

	while (head)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	count++;
	head = head->next;
	}

	return (count);
}

