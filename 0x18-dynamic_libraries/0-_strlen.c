#include "main.h"

/**
 * _strlen - This function calculates the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int lengt = 0;

	while (*s != '\0')
	{
		lengt++;
		s++;
	}
	return (lengt);
}
