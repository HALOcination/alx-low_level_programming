#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * by: HALO
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		if (diff & 1ul)
			count++;
		diff = diff >> 1;
	}
	return (count);
}

