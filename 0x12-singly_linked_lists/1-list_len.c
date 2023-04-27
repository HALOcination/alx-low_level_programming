#include "lists.h"

/**
 * list_len - returns length of a linked list
 * @h: pointer to first node
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
