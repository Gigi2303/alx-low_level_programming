#include "main.h"

/**
* _strncpy - copy a string
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int o;

	o = 0;
	while (o < n && src[o] != '\0')
	{
		dest[o] = src[o];
		o++;
	}
	while (o < n)
	{
		dest[o] = '\0';
		o++;
	}
	return (dest);
}
