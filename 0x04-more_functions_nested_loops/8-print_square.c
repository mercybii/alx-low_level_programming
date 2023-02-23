#include "main.h"
/**
 * print_square - Entry point
 * Description: prints a square
 * @size: Carrier integer variable
 * Return: void
 */
void print_square(int size)
{
	int i, j;
	if (size <= 0)
	{
		_putchar('\n');
		return;

	}
	for (i = 0; i < size; i++)
	{
		for (j - 0; j < size; j++)
		{
			_putchar('#');
		}
		putchar('\n');
	}
}

