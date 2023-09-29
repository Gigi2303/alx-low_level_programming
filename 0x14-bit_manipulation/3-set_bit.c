#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1 at a given index.
 * @n: The pointer to the number in which to set the bit.
 * @index: The index of the bit to set.
 *
 * Return: Returns 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int g;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	g = 1UL << index;

	*n = (*n) | g;

	return (1);
}

