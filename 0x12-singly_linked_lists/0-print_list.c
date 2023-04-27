#include "lists.h"

/**
  * _strlen - prints the length of string
  * @s: the string
  *
  * Return: int string length
  */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to print
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->nest;
		i++;
	}
	return (i);
}
