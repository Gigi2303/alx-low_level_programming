#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: (0)
 */

void print_alphabet(void)
{
char b;
for (b = 'a', b <= 'z', b++)
	_putchar(b);
_putchar('/n');

return (0);
}
