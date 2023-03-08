#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
nt _strlen_recursion(char *s);
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return (1) + _strlen_recursion(s + 1);
	}
}
int main(void)
{
	char *s = "Hello, world!";
	int len = _strlen_recursion(s);

	printf("The length of the string is %d\n", len);
		return (0);
}

