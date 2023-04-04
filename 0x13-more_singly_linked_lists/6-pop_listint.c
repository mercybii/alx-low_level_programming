#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - this code will delete the first node and return its data
 *
 * @head: the first node
 *
 *
 * Return: the head node’s data (n).
 *
 */

int pop_listint(listint_t **head)
{
	int content;
	listint_t *x;

	if (head == NULL || *head == NULL)
	{
		return (0);

	}

	x = *head;
	content = x->n;
	*head = x->next;
	free(x);

	return (content);

}
