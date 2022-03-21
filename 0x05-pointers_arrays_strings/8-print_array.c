#include <stdio.h>
#include "main.h"

/**
 * print_array - Function that prints an array of integers
 * @n: number of elements to be printed
 * @a: an array of integers
 */

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d", a[len]);
		if (len != n - 1)
			printf(", ");
	}
	printf("\n");
}
