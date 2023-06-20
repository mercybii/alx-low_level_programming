#include "main.h"

/**
 * _puts - print a string
 * @str: the string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
