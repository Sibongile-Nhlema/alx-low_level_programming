#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2D grid created in task 3
 * @grid: grid
 * @height: height of grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}

	free(grid);
	grid = NULL;
}
