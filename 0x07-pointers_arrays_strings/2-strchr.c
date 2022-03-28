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
	int i;
	char *null = NULL;
	/* loop through the string s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* check if a characer at particular index = c */
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == '\0')
		return (s + i);
	else
		return (null);
}
