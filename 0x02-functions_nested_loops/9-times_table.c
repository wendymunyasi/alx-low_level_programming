#include "main.h"

/**
 * times_table - Function that prints the 9 times table, starting with 0.
 *
 * Return: No return.
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			if ((product / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(product + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
