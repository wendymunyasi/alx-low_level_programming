#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98- A function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: integer
 *
 * Numbers must be separated by a comma, followed by a space.
 * Numbers should be printed in order.
 * The first printed number should be the number passed to your function.
 * The last printed number should be 98.
 * You are allowed to use the standard library.
 *
 * Return: no return
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
	for (n = n; n <= 97; n++)
		printf("%d, ", n);
	}
	else
	{
	for (n = n; n > 98; n--)
		printf("%d, ", n);
	}
	printf("98\n");
}
