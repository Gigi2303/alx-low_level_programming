#include "main.h"
#include <stdlib.h>

/**
 * create_file - This function creates a file.
 * @filename: The pointer to the name of the file to create.
 * @text_content: Th pointer to the string to write to the file.
 *
 * Return: Returns -1 the function fails.
 *         Otherwise returnss 1.
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, pork = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (pork = 0; text_content[pork];)
			pork++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, pork);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

