#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: The number to be printed in binary format.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}

