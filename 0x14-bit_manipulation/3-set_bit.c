#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit- at given index set the value of bit to 1
 *
 * @n: a pointer to a  given set of bit
 * @index: from 0 of the bit set value of the index
 *
 * Return: 1 when successful -1 when there is an error
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bii;

	if (index >= (sizeof(unsigned int) * 8 - 1))

		return (-1);


	bii = 1 << index;

	*n ^= bii;

	return (1);
}
