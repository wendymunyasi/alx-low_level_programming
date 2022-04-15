#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: pointer to the string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * You are allowed to use printf.
 * If separator is NULL, don’t print it.
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function.
 *
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
