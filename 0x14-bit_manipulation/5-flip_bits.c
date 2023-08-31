#include "main.h"
#include <stdio.h>

/**
 * flip_bits - this function returns the number of bits
 * to flip to get from n to m.
 * @n: first number.
 * @m: second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int joy = n ^ m;
	unsigned int number = 0;

	while (joy > 0)
	{
		number += joy & 1;
		joy >>= 1;
	}

	return (number);
}

