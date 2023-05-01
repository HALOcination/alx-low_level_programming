#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to 1st node
 *
 * by: HALO
 * return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
