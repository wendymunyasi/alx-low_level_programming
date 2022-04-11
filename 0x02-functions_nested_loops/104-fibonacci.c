#include <stdio.h>
/**
 * main - Prog that finds and prints the first 98 Fibonacci numbers, starting,
 * with 1 and 2, followed by a new line.
 *
 * The numbers should be separated by comma, followed by a space ,
 * You are allowed to use the standard library.
 * You are not allowed to use any other library (You can’t use GMP etc…).
 * You are not allowed to use long long, malloc, pointers, arrays/tables,
 * or structures.
 * You are not allowed to hard code any Fibonacci number (except for 1 and 2).
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{

		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");


	return (0);
}
