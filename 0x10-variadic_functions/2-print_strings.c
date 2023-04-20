#include "variadic_functions.h"

/**
 * print_numbers - prints numbers and separators
 * @separator: string separator
 * @n: number of arg
 * @...: string to print
 *
 * return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
