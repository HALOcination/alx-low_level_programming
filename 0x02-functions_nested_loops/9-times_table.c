#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int n = 0;
	int m = 0;
	int l = 0;

	while (n < 10)
	{
		m = 0;
		while (m < 10)
		{
			l = n * m;
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (l <= 9)
					_putchar(' ');
			}
			if (l >= 0 && l < 10)
				_putchar(l + '0');
			else
			{
				_putchar(l / 10 + '0');
				_putchar(l % 10 + '0');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
