#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - func that copies a string
 * @dest: pointer to character array to copy to
 * @src: pointer to character array to copy from
 * @n: maximum number of characters to copy
 * Return: returns the copies string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
