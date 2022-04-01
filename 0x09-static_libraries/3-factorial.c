#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number.
 * @n: pointer to the null-terminated byte string to be examined.
 *
 * Return: -1 if n is lower than 0 and 1 if n is 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
