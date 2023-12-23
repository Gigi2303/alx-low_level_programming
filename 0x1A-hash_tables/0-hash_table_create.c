#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 * @size: The size of the array
 *
 * Return: the new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	unsigned long int g;

	if (size == 0)
		return (NULL);

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);

	tab->size = size;
	tab->array = malloc(sizeof(hash_node_t *) * size);

	if (tab->array == NULL)
	{
		free(tab);
		return (NULL);
	}
	for (g = 0; g < size; g++)
	{
		tab->array[g] = NULL;
	}

	return (tab);
}

