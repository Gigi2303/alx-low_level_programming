#include "main.h"

/**
 * binary_to_uint - this funcion converts a binary number to an unsigned int.
 * @b: the pointer to a string of 0 and 1 chars.
 *
 * Return: returns the converted number, or 0 if there is an invalid
 * character in the string or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int jet = 0;
	int x = 0;

	while (b[x])
	{
		if (b[x] == '0' || b[x] == '1')
		{
			jet = jet << 1;
			jet += b[x] - '0';
			x++;
		}
	else
		{
			return (0);
		}
	}

	if (!b)
	{
		return (0);
	}

	return (jet);
}
