#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Adds a new node at the end
 * of a linked list (listint_t)
 *
 * @head: A pointer to the address of the head of
 * the listint_t list
 *
 * @n: The value of the new node added to the listint_t
 *
 *
 * Return: A new added node to the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *x;

		if (head == NULL)
		{
			return (NULL);
		}
	last = malloc(sizeof(listint_t));
	if (last == NULL)
	{
		return (NULL);
	}

	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}
	else
	{
		x = *head;
		while (x->next != NULL)
		{
			x = x->next;
		}
		x->next = last;
	}
	return (last);
}


