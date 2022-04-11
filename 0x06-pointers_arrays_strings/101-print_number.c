#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer.
 *
 * You can only use _putchar function to print.
 * You are not allowed to use long.
 * You are not allowed to use arrays or pointers.
 * You are not allowed to hard-code special values.
 *
 * Return: no return
 */

void print_number(int n)
{
	unsigned int b;

	if (n < 0)
	{
		b = -n;
		_putchar('-');
	} else
	{
		b = n;
	}

	if (b / 10)
		print_number(b / 10);

	_putchar((b % 10) + '0');
}
