#include "lists.h"

/**
 * add_dnodeint - adds a new node
 * @head: head
 * @n: new node
 *
 * BY: HALO
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;
	dlistint_t *h;

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_node->next = h;

	if (h != NULL)
		h->prev = new_nod;

	*head = new_nod;
	return (new_nod);
}
