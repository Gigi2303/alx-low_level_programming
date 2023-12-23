#include "hash_tables.h"

/**
 * hash_djb2 - A hash function implementing the djb2 algorithm.
 * @str: input string to be hashed
 * Return: The hash value generated using the djb2 algorithm
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	int g;
	unsigned long int hash = 5381;

	while ((g = *str++))
	{
		hash = ((hash << 5) + hash) + g; /* hash * 33 + g */
	}

	return (hash);
}
