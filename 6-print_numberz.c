#include <stdio.h>

/**
 *main-all single digit numbers of base 10 starting from 0
 *
 *Return: always 0
 */

int main(void)

{
	int c = '0';

	while (c <= '9')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
