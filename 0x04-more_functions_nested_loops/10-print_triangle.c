#include "main.h"
/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @size: size of the triangle.
 *
 * You can only use _putchar function to print.
 * If size is 0 or less, the function should print only a new line.
 * Use the character # to print the triangle.
 *
 * Return: No return.
 */

void print_triangle(int size)
{
	int x, y = 0;
	int space;

	if (size > 0)
	{
		while (y < size)
		{
			space = size - y - 1;
			while (x < size)
			{
				if (space > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
		_putchar ('\n');
		}
	}
	else
	_putchar('\n');
}
