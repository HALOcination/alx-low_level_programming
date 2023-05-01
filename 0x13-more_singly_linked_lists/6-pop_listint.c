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
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (num);
}
