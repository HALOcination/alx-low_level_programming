#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: index
 *
 * by: HALO
 * Return: 1 for success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
