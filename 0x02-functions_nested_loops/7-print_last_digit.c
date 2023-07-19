#include "main.h"

/**
 * print_last_digit - prints last digit
 * @k: function parameter
 * Return: i
 */

int print_last_digit(int k)
{
	int i;

	i = k % 10;
	if (k < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
