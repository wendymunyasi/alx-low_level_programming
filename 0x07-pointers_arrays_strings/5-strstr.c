#include "main.h"
#include <stdio.h>

/**
 * compare - function that compares two strings
 * @haystack: pointer to the first null-terminated byte string.
 * @needle: pointer to the second null-terminated byte string.
 *
 * Return: true if haystack and needle are the same
 */

int compare(char *haystack, char *needle)
{
	/* loop through both strings */
	while (*haystack && *needle)
	{
		/* compare both strings */
		if (*haystack != *needle)
			return (0);

		haystack++;
		needle++;
	}

	return (*needle == '\0');
}



/**
 *_strstr - function that locates a substring.
 * @haystack: pointer to the null-terminated byte string to examine.
 * @needle: pointer to the null-terminated byte string to search for.
 *
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
