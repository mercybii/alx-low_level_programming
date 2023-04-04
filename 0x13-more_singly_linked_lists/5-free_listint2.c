#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - free nodes in listint_t list
 *
 * @head: A pointer to the address of the head
 *
 * in listint_list
 *
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tem, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
