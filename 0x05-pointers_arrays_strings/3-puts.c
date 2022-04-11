#include <stdio.h>
#include "main.h"

/**
 * _puts - Function that prints a string followed by a new line to the stdout.
 * @str: pointer to the string to be written.
 *
 * Return: No return.
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		putchar(str[len]);
		len++;
	}
	putchar('\n');
}
