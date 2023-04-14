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
	int x;
	ssize_t i;
	ssize_t total = 0;
	char c;

	if (filename == NULL)
	{
		return (0);
	}

	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		return (0);
	}
	while (letters-- > 0 && (i = read(x, &c, 1)) > 0)
	{
		if (write(STDOUT_FILENO, &c, 1) != 1)
		{
			close(x);

			return (total);
		}
		total = total + i;
	}
	close(x);
	return (total);
}
