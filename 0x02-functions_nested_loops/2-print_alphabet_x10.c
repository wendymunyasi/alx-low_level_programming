#include <ctype.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 * Description: prints alphabets in lower case 10 times
 * by new line
 * Return: 0
*/

void print_alphabet_x10(void)
{

	int x, a;
	int lower_x;

	for (a = 0; a <= 9; a++)
	{
		for (x = 'A'; x <= 'Z'; x++)
		{
			lower_x = tolower(x);
			_putchar(lower_x);
		}
	_putchar('\n');
	}
}
