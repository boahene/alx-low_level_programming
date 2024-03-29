#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - main entry
 * @array: get the array contnet
 * @action: pointer function
 * @size: take the size of the size_t
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
