#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>


/**
 * create_tmp - Allocates 1024 bytes for tmp
 *
 * @file: The name of the file buffer is storing char
 *
 * Return: A pointer to new tmp
 */
char *create_tmp(char *file)
{
	char *p;

	p = malloc(sizeof(char) * 1024);
	if (p == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (p);
}

/**
 * _close - Closes files
 *
 * @file: The file to be closed
 */

void _close(int file)
{
	int i;

	i = close(file);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another
 *
 * @ac: argument count
 * @av: Arguments passed
 *
 * Return: 1 on success, exit otherwise
 */

int main(int ac, char *av[])
{
	int source, dest, f_read, w;
	char *tmp;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	tmp = create_tmp(av[2]);
	source = open(av[1], O_RDONLY);
	f_read = read(source, tmp, 1024);

	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (source == -1 || f_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(tmp);
			exit(98);
		}
		w = write(dest, tmp, f_read);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(tmp);
			exit(99);
		}
		f_read = read(source, tmp, 1024);

		dest = open(av[2], O_WRONLY | O_APPEND);
	} while (f_read > 0);
	free(tmp);

	_close(source);
	_close(dest);
	return (0);
}
