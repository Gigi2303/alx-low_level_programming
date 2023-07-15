#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int q;

for (q = 0; q < 52; q++)
	putchar(alp[q]);
putchar('\n');
	return (0);
}
