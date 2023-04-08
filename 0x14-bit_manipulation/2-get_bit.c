#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns the value of bit at the given index
 *
 * @n: the number to be tested
 *
 * @index:the indext of the bit to retrieve starting from 0
 *
 * Return: the value of the bit at the specified index
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
