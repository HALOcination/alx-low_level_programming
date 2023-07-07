#include "hash_tables.h"

/**
 * key_index - Gets the index
 * @key: The key
 * @size: size
 *
 * BY HALO
 *
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
