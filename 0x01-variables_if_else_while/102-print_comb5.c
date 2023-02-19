#include <stdio.h>

/**
 *main- Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	int j;
	int i;

	for (j = 0; j < 100; j++)
{
	for (i = j; i < 100; i++)
	{
		if (i != j)
		{
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (j != 98 || i !=99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
return (0);
}
