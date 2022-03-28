#include "main.h"
#include <stdio.h>

/**
 **_memcpy - function that copies memory area
 * @dest: pointer to the object to copy to
 * @src: pointer to the object to copy from
 * @n: number of bytes to copy
 *
 * Return:  a pointer dest or 0 on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
