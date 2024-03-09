#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates memory for a 2D array of integers
 * and initializes each element to 0.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: If successful, returns a pointer to the
 * allocated 2D array of integers.
 * If memory allocation fails or if width or height
 * is 0 or negative, returns NULL.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
