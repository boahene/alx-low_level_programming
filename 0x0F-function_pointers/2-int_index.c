#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - fucntion that searches for an integer.
 *
 * @size: this is the lenghth of the array
 * @array: this is the input array
 * @cmp: is a pointer to the funtion to be used to compare values
 *
 * Return: int_index returns the index of the first element for which the cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array ==  NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if ((cmp(array[index])) == 1)
		{
			return (index);
		}
	}
	return (-1);
}
