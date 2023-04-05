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
	listint_t *i;
	unsigned int l;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
		return (1);
	}
	node = *head;

	for (l = 0; l < index - 1; l++)
	{
		if (node == NULL || node == NULL)
			return (-1);

		node = node->next;
	}

		i = node->next;
		node->next = i->next;
		free(i);

		return (1);

}

