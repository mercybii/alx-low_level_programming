#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints out a linked list
 *
 * @head: first node
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *x = head;
	const listint_t *i = head;

	if (head == NULL)
		exit(98);

	while (x != NULL && i != NULL && i->next != NULL)
	{
		printf("[%p] %d\n", (void *)x, x->n);

		x = x->next;
		i = i->next->next;

		if (x == i)
		{
			x = head;
		while (x != i)
		{
			printf("[%p] %d\n", (void *)x, x->n);

			x = x->next;
			i = i->next;

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
