#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - Function that prints the sign of a number.
 * @n: number to be analyzed.
 * greater than, equal to or less than zero.
 *
 * Return: 0 or 1 or -1 depending on the answer
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
