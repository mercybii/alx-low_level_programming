#include "main.h"

/**
 * _islowe - check if a character is lowercase
 *
 * @c: the character to be checked.
 *
 * Return: 1 if the character is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
