#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - return a pointer to 2 dimensional array
 * @width: input value
 * @height: inputvalue
 *
 * Return: (NULL);
 */
int **alloc_grid(int width, int height)
{
	int **bii;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);
	bii = malloc(sizeof(int *) * height);

	if (bii == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		bii[x] = malloc(sizeof(int) * width);
		if (bii[x] == NULL)
		{
			for (; x >= 0; x--)
				free(bii[x]);

			free(bii);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			bii[x][y] = 0;
	}
	return (bii);
}
