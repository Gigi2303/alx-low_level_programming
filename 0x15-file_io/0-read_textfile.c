#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This function reads text file print to STDOUT.
 * @filename: The text file being read
 * @letters: The number of letters to be read
 * Return: Returns the actual number of bytes read and printed
 *        and 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fog;
	ssize_t a, b, c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	fog = malloc(sizeof(char) * letters);
	c = read(a, fog, letters);
	b = write(STDOUT_FILENO, fog, c);

	free(fog);
	close(a);
	return (b);
}

