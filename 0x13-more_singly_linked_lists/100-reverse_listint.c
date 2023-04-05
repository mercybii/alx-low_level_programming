#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverse listint_t linked list
 *
 * @head: Pointer to the first node
 *
 * Return: A pointer to the first node
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}
	*head = p;

	return (*head);
}
