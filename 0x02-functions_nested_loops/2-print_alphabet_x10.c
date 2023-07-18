#include "main.h"

/**
 * print_alphabet_x10 - displays alphabets in lowercase x10
 * Return: (0)
 */

void print_alphabeth_x10(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
	}
}
