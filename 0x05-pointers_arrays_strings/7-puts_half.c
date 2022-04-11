#include <stdio.h>
#include "main.h"

/**
 * puts_half - Function that prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 *
 * The function should print the second half of the string.
 * If the number of characters is odd, the function should print the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2.
 *
 * Return: No return.
 */

void puts_half(char *str)
{
	int j, i = 0;

	while (*(str + i))
		i++;

	j = i / 2;
	if (i % 2)
		j += 1;

	while (j < i)
	{
		putchar(*(str + j));
		j++;
	}
	putchar('\n');
}
