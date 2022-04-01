#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: resulting string
 * @src: string to be appended
 * @n: number of bytes from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
