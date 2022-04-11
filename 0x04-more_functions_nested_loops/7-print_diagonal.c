#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed.
 *
 * You can only use _putchar function to print.
 * The diagonal should end with a \n.
 * If n is 0 or less, the function should only print a \n.
 *
 * Return: No return.
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
