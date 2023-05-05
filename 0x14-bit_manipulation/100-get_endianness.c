#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - check the endianness
 *
 *
 *Return: 0 if big endian, 1 if little endian
 *
 */

int get_endianness(void)
{
	int bii = 1;

	char *address = (char *) (&bii);

	if (*address == 1)

		return (1);

	return (0);

}
