#include "hash_tables.h"

/**
 * hash_table_print - a function to print all elements of a hash table
 * @ht: The hash table to be printed out
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int g;
	hash_node_t *curr;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (g = 0; g < ht->size; g++)
	{
		curr = ht->array[g];
		while (curr != NULL)
		{
			if (!first)
			printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			first = 0;
			curr = curr->next;
		}
	}
	printf("}\n");
}

