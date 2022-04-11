#include "main.h"

/**
 * print_square - Function that prints a square, followed by a new line.
 * @size: size of the square.
 *
 * You can only use _putchar function to print.
 * Where size is the size of the square.
 * If size is 0 or less, the function should print only a new line.
 * Use the character # to print the square.
 *
 * Return: no return.
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
		_putchar('\n');
	}
	_putchar('\n');
}
