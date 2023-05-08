#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 *
 * @filename: name of the file being created
 * @text_content: string to be written to the file
 *
 * Return: 1 on success  and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f_open, f_read = 0, f_write;

	if (!filename)/*check if filename if NULL*/
		return (-1);

	f_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_open == -1)
		return (-1);/*open set the mode of the file*/

	if (text_content == NULL)
		text_content = "";/*check if text_content is NULL*/

	for (f_read = 0; text_content[f_read] != '\0';)
		f_read++; /*calculate the number*/


	f_write = write(f_open, text_content, f_read);
	if (f_write == -1)
		return (-1);

	close(f_open);

	return (1);
}
