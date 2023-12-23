#include "hash_tables.h"

/**
 * hash_table_delete - This is a function that frees and deletes a hash table.
 * @ht: The table to be freed and deleted afterward
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *next;
	unsigned long int g;

	if (ht == NULL)
		return;

	for (g = 0; g < ht->size; g++)
	{
		curr = ht->array[g];
		while (curr != NULL)
		{
			next = curr;
			curr = curr->next;
			free(next->key);
			free(next->value);
			free(next);
		}
	}
	free(ht->array);
	free(ht);
}

