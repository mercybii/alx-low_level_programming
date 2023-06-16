#include "lists.h"

/**
 * dlistint_len - return a number of double linkllist
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node;

	node = 0;

	if (h == NULL)
		return (node);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}

	return (node);
}
