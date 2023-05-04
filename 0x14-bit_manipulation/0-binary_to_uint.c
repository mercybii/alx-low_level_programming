#include "main.h"
#include  <stdio.h>
#include <stdlib.h>

/**
 * binar_to_uint - convert a binary number to unsigned int
 *
 * @b: A pointer to the first symbol in binary string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int bii;

	if (b == NULL)
	{
		return (0);
	}
		for (bii = 0; b[bii] != '\0'; bii++)
		{
			if (b[bii] != '0' && b[bii] != '1')
			{
				return (0);
			}
			i = i * 2 + (b[bii] - '0');
		}

		return (i);
}
