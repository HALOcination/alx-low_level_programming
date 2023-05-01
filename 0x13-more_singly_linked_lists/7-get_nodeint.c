#include "lists.h"
/**
* get_nodeint_at_index - returns a node to index
* @head: pointer to 1st node
* @index: index
*
* by: HALO
* Return: node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node
	unsigned int i;

	for (node = head, i = 0; node && i < index; node = node->next, i++)
		;
	return (node);
}
