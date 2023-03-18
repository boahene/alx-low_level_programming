#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - entry point
 * @min: represent the minum memory allocation
 * @max: represent the maximum emeory allocation
 * Return: return allocation memory
 */

int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
		return (NULL);

	j = min;

	ptr = (int *)malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = j;
		j++;
	}
	return (ptr);
}
