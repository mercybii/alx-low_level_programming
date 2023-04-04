#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a singly
 * linked list(listint_t)
 *
 * @head: it is the first node
 *
 * @n: is the value to be stored
 *
 * Return: The added node
 *
 */

istint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == null)
		return (NULL);

	add->n = n;
	add->next = *head;

	*head = add;

	return (add);

