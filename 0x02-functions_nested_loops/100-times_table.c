#include "main.h"

/**
 * print_times_table - Function that prints the n times table, starting with 0.
 * @n: an input integer.
 *
 * If n is > than 15 or less than 0 the function should not print anything.
 *
 * Return: nothing.
 */

void print_times_table(int n)
{
	int i, d, r;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; ++i)
		{
			_putchar('0');

			for (d = 1; d <= n; ++d)
			{
				_putchar(',');
				_putchar(' ');

				r = i * d;

				if (r <= 99)
					_putchar(' ');
				if (r <= 9)
					_putchar(' ');
				if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar(((r / 10)) % 10 + '0');
				}
				else if (r <= 99 && r >= 10)
				{
					_putchar((r / 10) + '0');
				}
				_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
