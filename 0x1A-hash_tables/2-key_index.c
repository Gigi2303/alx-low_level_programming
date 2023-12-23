#include "hash_tables.h"

/**
 * key_index - This is a function that calculates the
 * index of a key in the hash table
 * @key: The key to hash
 * @size: size of the hash table array
 * Return: index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	int joy;

	joy = hash_value % size;

	return (joy);
}

