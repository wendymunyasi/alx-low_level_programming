#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints second half of a function
 * @str: the string
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
