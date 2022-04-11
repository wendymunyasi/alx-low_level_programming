#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function that prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be reversed.
 *
 * Return: No return.
 */

void print_rev(char *s)
{

	int len;

	for (len = 0; s[len] != '\0'; len++)
	{}

	for (len = len - 1; len >= 0; len--)
	{
		putchar(s[len]);
	}

	putchar('\n');
}
