#include "main.h"
#include <stdio.h>

/**
 * print_number - print numbers chars
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		putchar('-');
		x = -n;
	}

	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	putchar((x % 10) + '0');
}
