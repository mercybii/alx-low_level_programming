#include "main.h"
#include <string.h>

/**
 * rev_string -Reverser a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s);
	char temp;

	int i; 
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
