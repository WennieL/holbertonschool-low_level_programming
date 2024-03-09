#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to allocate memory to grid
 * @grid: a 2D array pointer
 * @height: rows in a 2D array
 *
 * Return: free memory in grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
