#include "main.h"
#include <stdio.h>

/**
 **_strchr - function that locates a character in a string
 * @s: pointer to the null-terminated byte string to be analyzed
 * @c: character to search for
 *
 * Return:  a pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	/* loop through the string 8*/
	while (*s != '\0')
	{
		/* check if a characer at particular index = c */
		if (*(s + i) == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
