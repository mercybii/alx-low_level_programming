#include "main.h"
/**
 * _abs - Entry point
 * @n: n is an integer
 * Description: prints the absolute value of an integer
 * Return: int
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;

		return (abs_val);
	}
	return (n);
}
