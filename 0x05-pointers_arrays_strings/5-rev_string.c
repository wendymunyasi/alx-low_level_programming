#include <stdio.h>
#include "main.h"
int string_length(char *s);

/**
 * rev_string - Function that reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Return: No return.
 */

void rev_string(char *s)
{
	int len, i;
	char *begin, *end, temp;

	len = string_length(s); /* Get function from the string_length.c */
	begin = s;
	end = s;

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		/**
		 * The idea is to swap the beginning and end pointers
		 * of the string. Instead of swapping the elements, here,
		 * we will swap the pointers where the addresses of the
		 * input string are stored.
		 */

		temp   = *end;
		*end   = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

/**
 * string_length - Function that returns string length.
 * @s: Pointer to the string return length.
 *
 * Return: The length of the string.
 */

int string_length(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
