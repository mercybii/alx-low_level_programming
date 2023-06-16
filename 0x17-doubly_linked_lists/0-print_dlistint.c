#include "lists.h"

/**
 * print_dlistint - prints all the element od a dlistint_t
 *
 * h: pointer to the nodes
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node;
	node = 0;

	if (h == NULL)
		return (node);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}
