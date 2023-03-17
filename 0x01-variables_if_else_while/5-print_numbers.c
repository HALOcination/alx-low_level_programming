#include <stdio.h>

/**
* main - Print all single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
