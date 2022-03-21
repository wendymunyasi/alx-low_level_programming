#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string
 * string_length - function that reverses a string
 * @s: string to be reversed
 * Return: 0 string in reversed
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
