#include "main.h"
#include <stdio.h>

/**
 * wildcmp - function that compares two strings.
 * @s1: pointer to the first null-terminated byte string to be examined.
 * @s2: pointer to the second null-terminated byte string to be examined.
 *
 * s2 can contain the special character *.
 * The special char * can replace any string (including an empty string).
 *
 * Return: 1 if strings are identical and 0 if otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
