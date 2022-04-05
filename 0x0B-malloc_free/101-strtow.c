#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: No return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - function that  splits a string into words.
 * @str: pointer to the string to split.
 *
 * Returns NULL if str == NULL or str == "".
 *
 * Return: NULL (failure) or pointer to an array of strings (words) (success).
 */

char **strtow(char *str)
{
char **array;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	array = malloc((height + 1) * sizeof(char *));
	if (array == NULL || height == 0)
	{
		free(array);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				array[i] = malloc((c - a1 + 2) * sizeof(char));
				if (array[i] == NULL)
				{
					ch_free_grid(array, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			array[i][j] = str[a1];
		array[i][j] = '\0';
	}
	array[i] = NULL;
	return (array);
}
