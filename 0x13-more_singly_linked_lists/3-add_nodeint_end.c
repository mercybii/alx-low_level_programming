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
	listint_t *add_end, *current;

	add_end= malloc(sizeof(listint_t));
	if (add_end == NULL)
		return (NULL);

	add_end->n = n;
	add_end->next = NULL;

	if (*head == NULL)
		*head = add_end;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = add_end;
	}
	return (*head);
}
