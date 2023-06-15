#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head
 * @index: index
 * BY: HALO
 *
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	num = 0;

	while (head != NULL)
	{
		if (num == index)
			break;
		head = head->next;
		num++;
	}
	return (head);
}
