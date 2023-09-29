#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to be printed in binary.
 *
 */

void print_binary(unsigned long int n)
{
	int start = 0;
	int a = 0;
	unsigned long int b;
	int num = sizeof(unsigned long int) * 8;

	for ( a = num - 1; a >= 0; a--)
	{
		b = (n >> a) & 1;

	if (b == 1)
	{
	putchar('1');
	start = 1;
	}
	else if (start)
	{
		putchar('0');
	}
	}

	if (!start)
	{
	putchar('0');
	}
}

