#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to the null-terminated byte string to append to.
 * @src: pointer to the character array to copy from.
 * @n: maximum number of characters to copy.
 *
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
