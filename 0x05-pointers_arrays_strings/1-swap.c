#include <stdio.h>
#include "main.h"

/**
 * swap_int - Function that swaps two integers.
 * @a: integer
 * @b: integer
 *
 * Return: No return.
 */

void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}
