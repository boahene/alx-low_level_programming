#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width: get the width for the matrcs
 * @height: get the height of matrics
 * Return: return the result
 */

int **alloc_grid(int width, int height)
{
	int j, i;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	err = (int **)malloc(sizeof(int *) * height);
	if (err == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	return (arr);
}
