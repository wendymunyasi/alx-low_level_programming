#include "main.h"
/**
 ** print_line - print character ' _'
 ** @n: number of time to print character
 ** Return: 0 (success)
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
