#include <stdio.h>

/**
 * main - main function
 *
 * Return: (0)
 */

int main(void)
{
int a;

for (a = 0; a < 10; a++)
{
	if (a == 9)
		putchar(a + '0');
	{
		putchar(a);
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}
