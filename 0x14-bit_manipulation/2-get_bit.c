#include "main.h"
#include <stdio.h>

/**
 * get_bit - This function returns the value of a bit at a given index.
 * @n: The number from which to get the bit.
 * @index: The index of the bit to retrieve.
 *
 * Return: returns the value of the bit at index, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	value = (n >> index) & 1;

	return (value);
}

