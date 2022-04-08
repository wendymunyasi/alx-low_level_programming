#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - fucntion that allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * If malloc fails, the malloc_checked function should cause normal,
 * process termination with a status value of 98.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)

{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
