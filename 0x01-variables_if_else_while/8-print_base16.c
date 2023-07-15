#include <stdio.h>

/**
 * main - the main function
 *
 * Return: (0)
 */

int main(void)
{
int a;
char b;

for (a = 0; a < 10; a++)
	putchar (a + '0');
		for (b = 'a'; b <= 'f'; b++)
			putchar(b);
		putchar('\n');
		return (0);
}
