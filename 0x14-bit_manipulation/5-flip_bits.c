#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits need to be flip
 *
 * @n: number to flip
 * @m: number that was flip
 *
 * Return: bit to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int j = 0;

	while (i)
	{
		j = j + (i & 1);
		i >>= 1;
	}
	return (j);
}
