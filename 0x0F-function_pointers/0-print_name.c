#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: the string name
 * @f: the value
 *
 * Return: void
 */


void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
