#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Entry point
 * Description: Prints the second half of a string
 * @str: String to be printed
 * Return: void
 */

void puts_half(char *str)
{
	size_t i;
	size_t len = strlen(str);
	size_t start = len / 2;

	if (len % 2 != 0)
	{
		start++;
	}
	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
