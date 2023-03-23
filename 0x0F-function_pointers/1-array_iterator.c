#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array ele on a new 
 * @array: array 
 * @size: how many ele to print
 * @action: poiter to print in regular or hex
 * Return: void
 * */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULl)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
