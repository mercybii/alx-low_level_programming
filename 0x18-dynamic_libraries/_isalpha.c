#include "main.h"

/**
 * _isalpha - point of entry
 *
 * @c: the character that is resived
 *
 * Return: 1 when it is true else 0 when it is false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
