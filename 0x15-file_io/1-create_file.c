#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_file - create a file
 *
 * @filename: the name of the file create
 *
 * @text_content: is a null terminated string to write to the file
 *
 * Return: if the file name is NULL (-1)
 *		if text_content isnull create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int descriptor;
	int written;

	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);

	}
	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);


	if (descriptor == -1)

	{

		return (-1);
	}

	if (text_content)
	{
		written = write(descriptor, text_content, strlen(text_content));

		if (written == -1)

		{

			close(descriptor);
			return (-1);

		}
	}
		close(descriptor);

		return (1);

}
