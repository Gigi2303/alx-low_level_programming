#include "lists.h"

/**
 * find_listint_loop - this function finds the loop in the linked list
 * @head: the linked list to search for
 *
 * Return: returns an address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *afro = head;
	listint_t *beats = head;

	if (!head)
		return (NULL);

	while (afro && beats && beats->next)
	{
		beats = beats->next->next;
		afro = afro->next;
		if (beats == afro)
		{
			afro = head;
			while (afro != beats)
			{
				afro = afro->next;
				beats = beats->next;
			}
			return (beats);
		}
	}

	return (NULL);
}
