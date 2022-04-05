#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2-D array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Each element of the grid should be initialized at 0.
 * If width or height is 0 or negative, return NULL.
 *
 * Return: NULL (failure) or a pointer to the 2-D array (success).
 */

int **alloc_grid(int width, int height)
{
	int **Array2D;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	Array2D = malloc(height * sizeof(int *));
	if (Array2D == NULL)
	{
		free(Array2D);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		Array2D[i] = malloc(width * sizeof(int));
		if (Array2D[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(Array2D[i]);
			free(Array2D);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			Array2D[i][j] = 0;

	return (Array2D);
}
