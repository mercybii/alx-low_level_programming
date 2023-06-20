#include "main.h"

/**
 * _isdigit - check for a digit 0 to 9
 *
 * @c: the character to be chected
 *
 * Return: 1 when is true, else 0 when false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
