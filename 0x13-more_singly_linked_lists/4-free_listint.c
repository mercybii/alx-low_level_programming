#include "stdlib.h"
#include <stdio.h>
#include "lists.h"


/**
 * free_listint - free lintin_t list
 *
 * @head: A point to the head of the listint_t list
 *
 * Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *x;

		while (head != NULL)
		{
			x = head;
			head = head->next;
			free(x);
		}
}
