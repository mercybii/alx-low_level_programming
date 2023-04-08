#include <stdio.h>
#include "stdlib.h"
#include <string.h>

/**
 * binary_to_unit - comverts a binary number to an unsigned int
 *
 * @b: first symbol in binary string
 *
 * Return: unsigned integer
 *
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int j = 0, sum = 0, value, i;
	const char *p;

	if (b == NULL)
		return (0);

	p = b;
	while (*p != '\0')
			{
			if (*p != '0' && *p != '1')
			return (0);

			p++;
			}

			p--;
			while (p >= b)
			{
			i = *p - '0';
			value = i * (1 << j);
			sum += value;
			p--;
			j++;
			}
	return (sum);
}
