#include <stdio.h>
/**
 * print all possible diffrent combination of three digits
 * rainging from 0-9
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
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(' ');
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (j != 98 || j)
			{
				putchar(',');
				putchar('');
			}
		}
	}
}
retun 0;
}
