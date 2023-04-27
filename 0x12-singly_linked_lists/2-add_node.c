#include "lists.h"

/**
  * add_node - add new nodes to the start of the list
  * @head: current place in the list
  * @str: string to add to the list
  *
  * Return: pointer to current position in list
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = str;
	new->next = *head;
	*head = new;
	return (*head);
}
