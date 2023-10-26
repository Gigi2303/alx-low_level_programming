#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: The pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear.
 *
 * Return: Returns 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = 1UL << index;
	*n = *n & ~i;
	return (1);
}

