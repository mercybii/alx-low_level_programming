#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverse  linked list
 *
 * @head: Pointer to the first node
 *
 * Return: A pointer to the first node
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;

	return (*head);
}
