#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all member of list_t list
 * @h: The list_list
 *
 * Return: The number of node in h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);

}
