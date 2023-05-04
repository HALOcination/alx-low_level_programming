#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * by: HALO
 * return: void
 */
void print_binary(unsigned long int n)
{
	int count = sizeof(n) * 8, i = 0;

	while (count)
	{
		if (n & 1L << --count)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
