#include <stdio.h>
#include "main.h"
int string_lenth(char *str);

/**
 * puts2 - A function that prints every character of string
 * @str: A string of characters
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	len = string_length(str);

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

/**
 * string_length - A function that prints length of string
 * @str: A string of characters
 * Return: length
 */

int string_length(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
		length++;

	return (length);
}
