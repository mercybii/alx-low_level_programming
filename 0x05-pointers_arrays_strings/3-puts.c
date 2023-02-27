#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 * Description:  prints a string, followed by a new line, to stdout.
 * @str: points to the string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
