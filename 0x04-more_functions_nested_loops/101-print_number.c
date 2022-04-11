#include "main.h"
/**
 * print_number - Function that prints an integer.
 * @n: integer to print.
 *
 * You can only use _putchar function to print.
 * You are not allowed to use long.
 * You are not allowed to use arrays or pointers.
 * You are not allowed to hard-code special values.
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
