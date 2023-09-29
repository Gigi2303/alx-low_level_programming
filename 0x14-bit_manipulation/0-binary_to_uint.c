#include "main.h"

/**
 * binary_to_uint - This funcion converts a binary number to an unsigned int.
 * @b: the pointer to a string of 0 and 1 chars.
 *
 * Return: return the converted number, or 0 if there is an invalid
 * character in the string or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int j = 0;
	unsigned int gig = 0;

	if (!b)
	{
		return (0);
	}

	while (b[j])
	{
		if (b[j] == '0' || b[j] == '1')
		{
			gig = gig << 1;
			gig += b[j] - '0';
			j++;
		}
	else
		{
			return (0);
		}
	}

	return (gig);
}

