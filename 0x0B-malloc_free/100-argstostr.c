#include "main.h"
#include <stdlib.h>

/**
 *argstostr - Entry point
 *@ac: Number of args passed to the program
 * @av: An array pointer to the string
 *
 *Return: Apointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *s1;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	s1 = malloc((len + 1) * sizeof(char));

	if (s1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] i = '\0'; j++)
		{
			s1[k] = av[i][j];

		}
		s1[k] = '\n';
		k++;
	}
	s1[k] = '\0';

	return (s1);
}
