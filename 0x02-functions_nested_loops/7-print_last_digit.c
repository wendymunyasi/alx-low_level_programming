#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit- A fucntion that prints last digit
 * of a number
 * @n: integer number
 * Return: 0 or 1 depending on the answer
*/

int print_last_digit(int n)
{
	int num;

	if (n < 0)
		num = -1 * (n % 10);
	else
		num = n % 10;

	_putchar(num + '0');
		return (num);
}
