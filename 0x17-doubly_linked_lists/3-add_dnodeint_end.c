#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: the new node
 *
 * BY: HALO
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_nod;

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_n;
	}
	else
	{
		*head = new_nod;
	}

	new_nod->prev = h;
	return (new_nod);
}
