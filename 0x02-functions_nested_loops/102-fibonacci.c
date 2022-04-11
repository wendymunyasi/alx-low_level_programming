#include <stdio.h>

/**
 * main - Program that prints the first 50 Fibonacci numbers, starting with,
 * 1 and 2, followed by a new line.
 *
 * The numbers must be separated by comma, followed by a space , .
 * You are allowed to use the standard library.
 *
 * Return: 0 if successful.
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
