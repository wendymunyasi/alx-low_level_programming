#include <stdio.h>
#include <string.h>

/**
 * _strcat - Function that concatenates two strings.
 * @dest: Pointer to the null-terminated byte string to append to.
 * @src: Pointer to the null-terminated byte string to copy from.
 *
 * Return: A pointer to the dest.
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
