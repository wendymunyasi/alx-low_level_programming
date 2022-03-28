#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the object to fill
 * @b: fill byte
 * @n: number of bytes to fill
 *
 * Return:  a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		*(s + i) = b;
	}

	return (s);
}
