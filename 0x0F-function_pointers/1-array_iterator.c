#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: the int array
 * @size: the size of array
 * @action: pointer to function used
 *
 * return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
