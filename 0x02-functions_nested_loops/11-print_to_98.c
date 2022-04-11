#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98- A fucntion that prints integers from
 * 0 to 98
 * Return: no return
 * @n: integer
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
	printf("%d\n", 98);
}
