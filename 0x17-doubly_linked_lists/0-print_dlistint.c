#include "lists.h"

/**
* print_dlistint - prints all the elements of a list
* @h: head of the list
*
*BY: HALO
* Return: num of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (; h; count++, h = h->next)
		printf("%d\n", h->n);

	return (count);
}
