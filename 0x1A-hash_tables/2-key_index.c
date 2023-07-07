#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index - calculating the index for a given key
 *
 * @key: the key to be calcuated
 * @size: the size of the hash table
 *
 * Return: the calculated index for the given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
