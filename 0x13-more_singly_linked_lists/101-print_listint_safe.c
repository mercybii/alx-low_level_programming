#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: first node
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *i = head;
	const listint_t *y = head;

	if (head == NULL)
		exit(98);

	while (i != NULL && y != NULL && y->next != NULL)
	{
		printf("[%p] %d\n", (void *)i, i->n);

		i = i->next;
		y = y->next->next;

		if (i == y)
		{
			i = head;
		while (i != y)
		{
			printf("[%p] %d\n", (void *)i, i->n);

			i = i->next;
			y = y->next;

		}

		exit(98);
		}
		counter++;
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);

		head = head->next;
		counter++;
	}

	return (counter);
}
