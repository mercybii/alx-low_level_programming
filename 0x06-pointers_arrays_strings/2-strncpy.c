#include "main.h"

/**
 * _strncpy - Entry point
 * Description: Copies a string up to a specified byte.
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

		while (j < n && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
		return (dest);
}
