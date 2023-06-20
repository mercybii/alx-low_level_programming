#include "main.h"

/**
 * _memcpy - copies bytes from the memmory
 *
 * @dest: pointer to the string memomery
 * @src: pointer of string to copy characters from
 * @n: bytes that needs to be copyed from
 *
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dwst[i] = scr[i];
	}
	return (dest);
}
