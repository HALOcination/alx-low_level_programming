#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print lowercase alphabet'
  *Return: Always 0
  */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
