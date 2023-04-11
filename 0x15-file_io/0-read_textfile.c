#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read a text file and prints it to the POSIX standard out put
 *
 * @filename: Name of the file to be read and printed
 * @letters: The number of letter to be read and printed
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_open, f_read, f_write;
	char *tmp;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return ();

	f_open = open(filename, O_RDONLY);

	f_read = read(f_open, tmp, letters);

	f_write = write(STDOUT_FILENO, tmp, f_read);

	if (f_open == -1 || f_read == -1 || f_write == -1 || f_write != f_read)
			{
			free(tmp);
			return (0);
			}

			free(tmp);

			close(f_open);

			return (f_write);
}
