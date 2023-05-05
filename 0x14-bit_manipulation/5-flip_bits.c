#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - number of bit that needed to be flipped from one to another
 *
 * @n: the number to be flipped
 * @m: the number to be formed
 *
 * Return: flip number of bits from n to m
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bii = n ^ m;/*number to get the bits to be flipped*/
	unsigned long int bits = 0; /*count for flipped bits*/


	while (bii > 0)
	{
		bits += (bii & 1);
		bii >>= 1;

	}
	return (bits);
}

