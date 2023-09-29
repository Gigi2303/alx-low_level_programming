#include "main.h"
#include <stdio.h>

/**
 * flip_bits - A function that returns the number of bits
 * to flip to get from n to m.
 * @n:The  first number.
 * @m: The second number.
 *
 * Return: Returns the number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int elf = n ^ m;
	unsigned int nu = 0;

	while (elf > 0)
	{
		nu += elf & 1;
		elf >>= 1;
	}

	return (nu);
}

