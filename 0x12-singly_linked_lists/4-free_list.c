#include <stdio.h>
#include "list.h"

/**
 * free_list - free list_t list
 * @head: A pointer to list list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
