#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: head
 * @idx: index
 * @n: int of new node
 *
 * BY: HALO
 * Return: NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nod;
	dlistint_t *head;
	unsigned int i;

	new_nod = NULL;
	if (idx == 0)
		new_nod = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new_nod = add_dnodeint_end(h, n);
				else
				{
					new_nod = malloc(sizeof(dlistint_t));
					if (new_nod != NULL)
					{
						new_nod->n = n;
						new_nod->next = head->next;
						new_nod->prev = head;
						head->next->prev = new_n;
						head->next = new_nod;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (new_nod);
}
