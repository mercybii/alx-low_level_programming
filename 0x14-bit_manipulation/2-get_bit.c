#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - return a bit in a given index
 *
 * @n: the bit
 * @index: retrieve the value of any bit within the range of 0
 *
 * Return: return the value given else -1
 *
 */

int get_bit(unsigned long int n, unsigned int index)

{
	unsigned long int tina;

	if (index >= sizeof(unsigned long int) * 8)

	{
		return (-1);
	}

	tina = (1UL << index);

	return ((n & tina) != 0);
}
