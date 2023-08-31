#include "main.h"
#include <stdio.h>

/**
 * get_endianness - This function checks for the endianness of the system.
 *
 * Return: Returns 0 if big endian, 1 if little endian.
 *
 */

int get_endianness(void)
{
	unsigned int joy = 1;
	unsigned char *checker = (unsigned char *)&joy;

	return (*checker);
}

