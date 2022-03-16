#include "main.h"

/**
 * print_times_table - check the code.
 * @n: an input integer.
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
