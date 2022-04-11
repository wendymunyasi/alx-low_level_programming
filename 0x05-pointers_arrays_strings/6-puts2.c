#include <stdio.h>
#include "main.h"
int string_lenth(char *str);

/**
 * puts2 - A function that prints every character of a string, starting with,
 * the first character, followed by a new line.
 * @str: Pointer to the string of characters.
 *
 * Return: No return.
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
 * @str: Pointer to the string of characters.
 *
 * Return: length
 */

int string_length(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
		length++;

	return (length);
}
