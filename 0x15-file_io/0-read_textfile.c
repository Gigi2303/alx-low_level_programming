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
	char *frog;
	ssize_t ar, br, cr;

	ar = open(filename, O_RDONLY);
	if (ar == -1)
		return (0);
	frog = malloc(sizeof(char) * letters);
	cr = read(ar, frog, letters);
	br = write(STDOUT_FILENO, frog, cr);

	free(frog);
	close(ar);
	return (br);
}

