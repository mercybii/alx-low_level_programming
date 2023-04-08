#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1at given index
 *
 * @n: unsigned long int
 * @index: start of unsigned int input
 *
 * Return: 1 if it works, -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

		*n |= (1UL << index);
		return (1);
}
