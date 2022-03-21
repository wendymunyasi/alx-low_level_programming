#include <stdio.h>
#include "main.h"

/**
 * _puts - function that prints a string followed
 * by a new line to the stdout
 * @str: string
 * Return: length of string
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
