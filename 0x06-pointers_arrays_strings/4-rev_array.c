#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - function that reverses an array.
 * @a: pointer to the array to reverse.
 * @n: size of elements in the array.
 *
 * Return: No return.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp = 0;
	n -= 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
