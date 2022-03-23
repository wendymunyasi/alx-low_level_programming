#include <stdio.h>
#include <string.h>

/**
 * _strcat - Function that concatenates two strings
 * @dest: - Destination for string
 * @src: - String to be appened to dest
 * Return: A pointer to the dest
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
