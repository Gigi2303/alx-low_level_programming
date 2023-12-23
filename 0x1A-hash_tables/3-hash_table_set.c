#include "hash_tables.h"

/**
 * hash_table_set - A function that  adds an element to the hash table
 * @ht: This is the hash table to add the key to
 * @key: Key to add to hash table
 * @value: THis is the value to store for key and must be duplicated
 * Return: 1 if success, 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	unsigned long int index_num;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index_num = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index_num];

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index_num];
	ht->array[index_num] = new_node;

	return (1);
}

