#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * You can only use _putchar twice in your code.
 *
 * Return: 0.
*/

void print_alphabet(void)
{

	int x;
	int lower_x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		lower_x = tolower(x);
		_putchar(lower_x);
	}
	_putchar('\n');
}
