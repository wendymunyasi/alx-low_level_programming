#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that  returns the value of x
 * raised to the power of y.
 * @x: base value.
 * @y: exponent value.
 *
 * Return: x raised to the power of y or -1 if y < 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	/* for all other cases */
	return (x * _pow_recursion(x, y - 1));
}
