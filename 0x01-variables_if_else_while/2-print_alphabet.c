#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
