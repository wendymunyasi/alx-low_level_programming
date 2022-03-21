#include <stdio.h>
#include "main.h"
int string_lenth(char *);

/**
 * puts2 - A function that prints every character of string
 * @str: A string of characters
 */

void puts2(char *str)
{
	int i;
	int len;

	len = string_length(str);

	for (i = 0; i < len; i += 2)
	{
		putchar(i + '0');
	}
    putchar('\n');
}

/**
 * string_length - A function that prints length of string
 * @s: A string of characters
 * Return: length
 */

int string_length(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
