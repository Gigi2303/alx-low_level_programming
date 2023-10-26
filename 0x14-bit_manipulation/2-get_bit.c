#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number from which to get the bit.
 * @index: an index of the bit to retrieve.
 *
 * Return: returns the value of the bit at index, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int jet;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	jet = (n >> index) & 1;

	return (jet);
}

