#include "main.h"

/**
 * _strncat - concatenates two string
 *
 * @dest: a pointer to destination
 * @src: a pointer to string
 * @n: the number of bytes
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int array = 0, count = 0;

	while (dest[array++])
	{
		count++;
	}

	for (array = 0; src[array] && array < n; array++)
	{
		dest[count++] = src[array];
	}
	return (dest);
}
