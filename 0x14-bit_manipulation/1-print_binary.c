#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - This function prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}

