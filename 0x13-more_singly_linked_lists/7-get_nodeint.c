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
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return  (NULL);
		head = head->next;
	}

	return (head);
}
