#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a singly linked list (listint_t)
 * @head: a point to the head of the listint_t list
 * @n: the value of the new node added to the list
 *
 * Return: the added node
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
