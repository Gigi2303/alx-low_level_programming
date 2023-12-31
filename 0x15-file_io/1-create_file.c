#include "main.h"

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
	int au, bu, puork = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (puork = 0; text_content[puork];)
			puork++;
	}

	au = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bu = write(au, text_content, puork);

	if (au == -1 || bu == -1)
		return (-1);

	close(au);

	return (1);
}

