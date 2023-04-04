#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - return the nth node of a listint_t
 *
 * @head: fist node
 *
 * @index: index of the list
 *
 * return
 *
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int 1 = 0, flag;

	while (head)
	{
		i++;
		head =head->next;
		if (i == index)
		{
			flag = 1;
			return (head);
		}
	}
	if (flag != 1)
	{
		return (NULL);
	}
}
