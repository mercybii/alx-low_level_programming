#include "main.h"

/**
 * _strncpy - number to be copied from one bytes to another
 *
 * @dest: the string to be copied
 * @src: the source string
 * @n: the number of bytes to be copied
 *
 * Return: final result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, cnt = 0;

	while (src[i++])
	{
		cnt++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = cnt; i < n i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
