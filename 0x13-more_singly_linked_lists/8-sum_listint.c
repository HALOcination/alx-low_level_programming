#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a list
 * @head: pointer to 1st node
 *
 * by: HALO
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
