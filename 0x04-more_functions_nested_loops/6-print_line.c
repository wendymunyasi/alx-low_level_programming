#include "main.h"
/**
 * print_line - Function that draws a straight line in the terminal.
 * @n: number of times to print _ character.
 *
 * You can only use _putchar function to print.
 * The line should end with a \n.
 * If n is 0 or less, the function should only print \n.
 *
 * Return: No return.
 */

void print_line(int n)
{

	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
