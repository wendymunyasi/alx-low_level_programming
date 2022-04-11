#include "main.h"

/**
 * print_most_numbers - Function tha prints numbers between 0 to 9,
 * followed by a new line.
 *
 * Do not print 2 and 4.
 * You can only use _putchar twice in your code.
 *
 * Return: no return.
 */

void print_most_numbers(void)
{

int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		_putchar('0' + i);
	}
	_putchar('\n');
}
