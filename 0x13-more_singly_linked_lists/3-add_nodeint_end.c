#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - This function adds a new node
 * at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: An integer value to add to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *note = malloc(sizeof(listint_t));
    if (note == NULL)
        return NULL;

    note->n = n;
    note->next = NULL;

    if (*head == NULL)
    {
        *head = note;
    }
    else
    {
        listint_t *current = *head;
        while (current->next != NULL)
	current = current->nextpent->next = note;
	}

	return (note);
}

