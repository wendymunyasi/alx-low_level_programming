#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps two values
 * @a: integer
 * @b: integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}
