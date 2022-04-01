#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: pointer to the string to be reversed.
 *
 * Return: no return.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
