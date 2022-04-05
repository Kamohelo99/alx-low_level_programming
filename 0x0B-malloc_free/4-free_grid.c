#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - Frees a 2d grid
 *
 * @grid: the 2d array
 * @height: array height
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
