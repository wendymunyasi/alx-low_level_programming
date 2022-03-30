#include "main.h"
#include <stdio.h>

/**
 * is_divisible - check if num is divisble
 * @num: the number to be checked.
 * @div: the result of division.
 *
 * Return: 1 if num is divisible or 0 if num is not divisible
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}


/**
 * is_prime_number - function that checks if n is a prime number.
 * @n: integer to be analyzed.
 *
 * Return: 1 if n is prime number otherwise return 0.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}
