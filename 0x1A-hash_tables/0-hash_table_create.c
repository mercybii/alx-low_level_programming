#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * hash_table_create - creating a new table
 *
 * @size: is the size of a new table to create
 *
 * Return: null if malloc fails or new pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	/* intialization */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
