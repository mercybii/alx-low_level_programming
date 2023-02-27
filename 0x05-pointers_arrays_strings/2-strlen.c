#include "main.h"
/**
 * _strlen -returns the length of string.
 * @s: char to check
 * return: 0;
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);

}
