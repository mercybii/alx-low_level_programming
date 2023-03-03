#include "main.h"
#include <stdio.h>

/**
 * print_number - Entry point
 * Description: Prints an integer
 * @n: The integer to be printed
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num > 9)
		print_number(num / 10);

	putchar((num % 10) + '0');
}
