#include <unistd.h>

/**
 * _putchar - writes the stdout character
 * @c: the printed character
 *
 * Return: 1 when successfuly, else -1 when not successfull
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

