#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - unction that creates an array of chars, and initializes,
 * it with a specific char.
 * @size: size of array to create.
 * @c: specific character to initialize array with.
 *
 * Return: NULL if size = 0 (fails) or pointer to the array (success).
 */

char *create_array(unsigned int size, char c)
{
	char *buffer = malloc(sizeof(c) * size);
	unsigned int i;

	if (size == 0 || buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
