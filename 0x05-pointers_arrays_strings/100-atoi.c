#include <stdio.h>
#include "main.h"

/**
 * _atoi - Function that converts a string to integer.
 * @s: Pointer to string.
 *
 * The num in the string can be preceded by an infinite number of characters.
 * You need to take into account all the - and + signs before the number.
 * If there are no numbers in the string, the function must return 0.
 * You are not allowed to use long.
 * You are not allowed to declare new variables of “type” array.
 * You are not allowed to hard-code special values.
 * We will use the -fsanitize=signed-integer-overflow gcc flag to compile,
 * your code.
 *
 * Return: 0 (Success, well done!)
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
