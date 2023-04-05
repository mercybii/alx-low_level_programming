#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node of nth at the index
 *
 * @head: point to the first node of the adress
 *
 * @unsigned int: the node to be deleted
 *
 * @index: the node index to be deleted
 *
 * Return: 1 if succeeded -1 if it fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *x = *head;
	unsigned int l;

	if (x == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}
	for (l = 1; l < index; l++)
	{
		if (x->next == NULL)
			return (-1);
		x = x->next;
	}
	node = x->next;
	x->next = node->next;
	free(node);
	return (1);
}

