#include "main.h"

/**
 * _is lower - Entry point
 * Description:checks is a character is lowercase 
 * @c: the integer value it receives 
 * Retun: 1 if true. o if false.
 */
int islower(int c)
{
	int i = 'a';

		for (i = 'a'; i <= 'z'; i++)
		{
			if (c==i)
			{
				return (1);
			}
		}
return (0);
}
