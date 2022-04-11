#include <stdio.h>
/**
 * main - Program that finds and prints the largest prime factor of the,
 * number 612852475143, followed by a new line.
 *
 * You are allowed to use the standard library.
 * Your program will be compiled with this command:
 * gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o
 * 100-prime_factor -lm
 *
 * Return: 0
*/

int main(void)
{
	long i, number = 612852475143;

	for (i  = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
