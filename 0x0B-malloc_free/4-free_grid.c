#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - A function that frees a two dimentional grid
 * @grid: The grid to be freed
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
	int d = 0;

	while (d < height)
	{
		free(grid[d]);
		d++;
	}
	free(grid);
}
