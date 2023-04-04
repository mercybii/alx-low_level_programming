#include "stdlib.h"
#include <stdio.h>
/**
 * free_listint - free lintin_t list
 *
 * @head: A point to the head of the listint_t list
 *
 * Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *current;


	while (head != NULL)
	{
		curent = head->next;
		free(head);
		head = current;
	}
	return ();

}
