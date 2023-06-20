#include "main.h"

/**
 * _abs - is point of entry
 *
 * @n: argument function
 *
 * Return: interger that is absolute
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

