#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - at a given index set value of bit to 0
 *
 * @n: set the binary number to 0
 * @index: to be set to 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)/*index should be within the range*/


		return (-1);


	*n &= ~(1UL << index);/*the requested index to set the bit to 0*/

	return (1);


}
