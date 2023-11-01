#include "main.h"
#include <stdio.h>


char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - This function allocates 1024 bytes for a buffer.
 * @file: name of the file buffer is storing chars for.
 *
 * Return: Returns the pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - this closes file descriptors.
 * @fd: file descriptor to be closed.
 */

void close_file(int fd)
{
	int z;

	z = close(fd);

	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This function copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Returns 0 on success.
 *
 * Note: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int in, out, a, b;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	in = open(argv[1], O_RDONLY);
	a = read(in, buff, 1024);
	out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (in == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		b = write(out, buff, a);
		if (out == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		a = read(in, buff, 1024);
		out = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buff);
	close_file(in);
	close_file(out);

	return (0);
}

