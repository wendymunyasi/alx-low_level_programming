#include "main.h"
#include <stdio.h>

/**
 **_strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to the null-terminated byte string to be analyzed
 * @accept: pointer to the null-terminated byte string that contains the
 * characters to search for
 *
 * Return:  pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	/* loop through string s characters */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* loop through string accept characters */
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			/* check where any character in accept appears first in s */
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (0);
}
