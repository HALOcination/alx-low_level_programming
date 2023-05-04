#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: the number
 * @index: index
 *
 * by: HALO
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
