#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - print a binary represention of number
 *
 * @n: A decimal number to be printed in binary form
 *
 * Return: void
 */


void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);

	}
	putchar((n & 1) ? '1' : '0');


}
