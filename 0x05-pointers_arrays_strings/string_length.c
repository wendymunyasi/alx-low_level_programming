#include <stdio.h>
#include "main.h"


/**
 * rev_string - function that reverses a string
 * string_length - function that reverses a string
 * @s: string to be reversed
 * Return: 0 string in reversed
 */

int string_length(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}