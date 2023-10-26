#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness - This function checks for the endianness of the system.
 *
 * Return: Returns 0 if big endian, 1 if little endian.
 *
 */

int get_endianness(void)
{
	unsigned int lv = 1;
	unsigned char *checking = (unsigned char *)&lv;

	return (*checking);
}

