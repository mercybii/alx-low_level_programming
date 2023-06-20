#include "main.h"


/**
 * _strcpy - copies the sting pointed to
 *
 * @dest: pointer to the buffer to copy the stringto
 * @src: the sring to copies to
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j])
	{
		dest[i] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
