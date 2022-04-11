#include "main.h"
#include <stdio.h>

/**
 **_strchr - function that locates a character in a string.
 * @s: pointer to the null-terminated byte string to be analyzed.
 * @c: character to search for.
 *
 * Return:  a pointer to first occurence of c.
 */


char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	/* loop through string s */
	for (; *(s + i) != '\0'; i++)
	{
		/* check if a character in s is in c */
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
