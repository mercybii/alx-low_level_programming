#include "main.h"

/**
 * _memset - files that are pointed by the first bytes
 *
 * @s: pointer to the memomry area to br filled
 * @b: the character to fill the memory area with
 * @n: the number of byte
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
