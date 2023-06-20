#include "main.h"
#include <stdio.h>

/**
 * _strchr - a string that is being located by a character
 *
 * @s: string to be search
 * @c: charecter to locate
 *
 *
 * Return: NULL when the character is not found
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

