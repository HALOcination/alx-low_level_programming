#include <stdio.h>
/**
  *main - Entry point
  *Description:'print lowercase alphabet except for q and e'
  *Return: Always 0
  */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 'q' || n == 'e')
			n++;
		else
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
