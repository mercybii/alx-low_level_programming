#include "main.h"

/**
 * _strcmp - compares two string
 *
 * @s1: the first string to be pointed
 * @s2: the second string to be pointed
 *
 * Return: negative if is diffrent
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - s2);
}
