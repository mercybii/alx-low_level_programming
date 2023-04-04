#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of list_t list
 * @head: A pointer to the head of listint_t
 * @index: The node index to be printed
 *
 * Return: the node to be returned an printed
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *checker_node = head;
	unsigned int counter = 0;


	while (checker_node != NULL)
	{
		if (counter == index)
			return (checker_node);

		else
			counter++;
		checker_node = checker_node->next;
	}

	return (NULL);
}
