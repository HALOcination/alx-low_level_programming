#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash map
 * @size: size
 *
 * BY HALO
 *
 * Return: a hash table (NULL if error)
 */
hash_table_t *hash_table_create(unsigned long int size)
	{
	table_t *ht;
	node_t **array;
	ulint a;

	ht = malloc(sizeof(table_t));
	if (!ht)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}

	for (a = 0; a < size; a++)
		array[a] = NULL;

	ht->size = size;
	ht->array = array;

	return (ht);
}
