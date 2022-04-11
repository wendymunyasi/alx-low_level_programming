#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Function that copies the string pointed to by src, including the,
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: Pointer to the character array to write to.
 * @src: Pointer to the null-terminated byte string to copy from.
 *
 * Return: A pointer to *dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while
	((*dest++ = *src++));

	return (c);
}
