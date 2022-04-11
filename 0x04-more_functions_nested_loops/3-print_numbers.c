#include "main.h"

/**
 * print_numbers - Function tha prints numbers between 0 to 9,
 * followed by a new line.
 *
 * You can only use _putchar twice in your code.
 *
 * Return: no return.
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
		_putchar(ch);
	_putchar('\n');
}
