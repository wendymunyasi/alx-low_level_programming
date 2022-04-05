#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2-D grid previously created by,
 * my alloc_grid function.
 * @grid: 2-D array of integers.
 * @height: height of the 2D array or frid.
 *
 * Compilation will be done with the alloc_grid.c file.
 *
 * Return: No return.
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
