#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * greater than, equal to or less than zero
 * Return: 0 or 1 or -1 depending on the answer
 * @n: just a number
*/


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
