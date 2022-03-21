#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of
 * string
 * @s: pointe character
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
