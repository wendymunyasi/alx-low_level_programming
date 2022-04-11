#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string,
 * to uppercase.
 * @string: pointer to string to be converted to upper.
 *
 * Return: the string in upper case.
 */

char *string_toupper(char *string)
{
	const char OFFSET = 'a' - 'A';
	int i = 0;

	while (*(string + i))
	{
		if (*(string + i) >= 'a' && *(string + i) <= 'z')
		{
			*(string + i) -= OFFSET;
		}
		i++;
	}
	return (string);
}
