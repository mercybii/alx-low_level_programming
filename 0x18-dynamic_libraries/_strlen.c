#include "main.h"

/**
 * _strlen - is a function that returns the length of a string
 *
 * @s: it is the length gotten by string
 *
 * Return: the length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
