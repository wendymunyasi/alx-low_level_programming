#include <stdio.h>
#include "main.h"

/**
 * _puts - function that prints a string followed
 * by a new line to the stdout
 * @s: string
 * Return: length of string
 */

void _puts(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		putchar(s[len]);
		len++;
	}
	putchar('\n');
}
