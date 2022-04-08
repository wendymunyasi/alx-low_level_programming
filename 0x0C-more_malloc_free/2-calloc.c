#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements in array.
 * @size: size of each object in array.
 *
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
 *
 * To avoid a memory leak, the returned pointer must be deallocated,
 * with free() or realloc() but realloc is forbidden here..
 *
 * Return: A pointer to the beginning of newly allocated memory (success),
 * or NULL (failure).
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memAlloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memAlloc = malloc(nmemb * size);

	if (memAlloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(memAlloc + i) = 0;

	return (memAlloc);
}
