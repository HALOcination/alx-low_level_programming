#include "lists.h"

/**
* pop_listint - deletes the head node
* @head: pointer to the 1st node
*
* by: HALO
* Return: value of head node
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!*head)
		return (0);
	tmp = *head;
	i = node->n;
	*head = (*head)->next;

	free(node);
	return (i);
}
