#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at thr end of the file
 *
 * @filename:name of the file
 * @text_content:string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int bii_open, bii_read = 0, bii_write;

	if (!filename)
		return (-1);/*check if filename is null*/

	bii_open = open(filename, O_WRONLY | O_APPEND);
	if (bii_open == -1)
		return (-1);/*open and set the mode of the file*/

	if (text_content != NULL)
	{
		for (bii_read = 0; text_content[bii_read];)
			bii_read++;

		bii_write = write(bii_open, text_content, bii_read);
		if (bii_write == -1)
			return (-1);/*write an appended text to the file*/
	}

		close(bii_open);

		return (1);
}
