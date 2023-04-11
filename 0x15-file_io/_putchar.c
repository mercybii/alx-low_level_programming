#include <unistd.h>

/**
 * _putchar - write a charcter c  to the stdout
 * @c: The chacter to be printed
 *
 * Return: 1 on success, -1 on error
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
