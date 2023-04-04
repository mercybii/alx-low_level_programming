#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add a new node
 *
 * @head: it is the first node
 *
 * @n: is the value to be stored
 *
 * Return: The added node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;

	*head = add;

	return (add);
}
