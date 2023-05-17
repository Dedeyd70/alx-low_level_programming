#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - Returning a pointer to 2D
 * @width: argument to be used
 * @height: argument to be used
 * Return: null if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int d;
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (d = 0; d < height; d++)
	{
		grid[d] = (int *)malloc(width * sizeof(int));
		if (grid[d] == NULL)
		{
			for (j = 0; j < d; j++)
			{
				free(grid[j]);
				grid[j] = NULL;
			}
			free(grid);
			grid = NULL;
			return (NULL);
		}
	}
	return (grid);
}
