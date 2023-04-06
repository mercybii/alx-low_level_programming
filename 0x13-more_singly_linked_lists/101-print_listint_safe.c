#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *i, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	i = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (i == hare)
		{
			i = head;
			while (i != hare)
			{
				nodes++;
				i = i->next;
				hare = hare->next;
			}

			i = i->next;
			while (i != hare)
			{
				nodes++;
				i  = i->next;
			}

			return (nodes);
		}

		i = i->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - print_listint linked list
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, j = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (j = 0; j < nodes; j++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
