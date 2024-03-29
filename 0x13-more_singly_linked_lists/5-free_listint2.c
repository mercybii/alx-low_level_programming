#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free nodes in listint_t list
 *
 * @head: A pointer to the address of the head
 *
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;

	}
	*head = NULL;
}
