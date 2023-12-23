#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a value
 * associated with a key in the hash table
 * @ht: The hash table to look into
 * @key: The key to search for
 * Return: Value associated with the element, or NULL if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_num;
	hash_node_t *curr_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index_num = key_index((unsigned char *)key, ht->size);
	curr_node = ht->array[index_num];

	while (curr_node != NULL)
	{
		if (strcmp(curr_node->key, key) == 0)
		return (curr_node->value);
		curr_node = curr_node->next;
	}

	return (NULL);
}

