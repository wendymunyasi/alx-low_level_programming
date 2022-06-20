#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function:
 * c: integer, i: integer, f:float, s:char *
 *
 * any other char should be ignored.
 *
 * You are not allowed to use for, goto, ternary operator, else
 * do ... while.
 * You can use a maximum of 2 while loops and 2 if.
 * You can declare a maximum of 9 variables.
 * You are allowed to use printf.
 * Print a new line at the end of your function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
