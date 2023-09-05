#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: Returns -1 if the function fails or filename is NULL.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, log = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (log = 0; text_content[log];)
			log++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, log);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

