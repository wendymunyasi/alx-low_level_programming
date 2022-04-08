#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum integer in array.
 * @max: maximum integer in array.
 *
 * The array created should contain all the values from min (included),
 * to max (included), ordered from min to max.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 *
 * To avoid a memory leak, the returned pointer must be deallocated,
 * with free() or realloc() but realloc is forbidden here..
 *
 * Return: A pointer to the newly created array (success).
 */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++, min++)
		*(p + i) = min; /* p[i] */
	return (p);
}
