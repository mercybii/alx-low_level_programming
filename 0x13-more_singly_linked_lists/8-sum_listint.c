#include <stdio.h>
#include <stdlib.h>
#include"lists.h"

/**
 * sum_listint - sum of all the data(n)
 *
 * @head: first node
 *
 * Return: if empty return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
