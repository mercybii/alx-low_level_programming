#include <stdio.h>
#include <stdlib.h>
#include"lists.h"

/**
 * sum_listint - return the sum of all the data(n)
 *
 * @head: begining of node
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
