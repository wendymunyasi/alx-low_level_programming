#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: pointer to the null-terminated byte string to append to.
 * @s2: pointer to the null-terminated byte string to copy from.
 *
 * Return: NULL (fail) or a pointer to newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null-terminated (Success).
 */

char *str_concat(char *s1, char *s2)
{
	char *newStr;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	newStr = malloc(sizeof(char) * (i + j + 1));

	if (newStr == NULL)
	{
		free(newStr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		newStr[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		newStr[k] = s2[j];

	return (newStr);
}
