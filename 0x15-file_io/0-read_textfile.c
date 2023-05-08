#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - read a text file and print standard output
 *
 * @filename: read and print the name of the file
 * @letters: the number of letters to be read and printed
 *
 * Return: 0 if file name is NULL
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bii_open, bii_read, bii_write;
	char *tmp;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);

	bii_open = open(filename, O_RDONLY);/*file opening and mode stating */
	bii_read = read(bii_open, tmp, letters); /* file reading */
	bii_write = write(STDOUT_FILENO, tmp, bii_read); /*file writing to stdout */

	if (bii_open == -1 || bii_read == -1 || bii_write == -1 || bii_write != bii_read)
	{
		free(tmp);
		return (0);
	}
	free(tmp);
	close(bii_open);
	return (bii_write);
}


