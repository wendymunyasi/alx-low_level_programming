#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer to the null-terminated byte string to append to.
 * @s2: pointer to the null-terminated byte string to copy from.
 * @n: number of bytes from s2 to concatenate.
 *
 * If n is greater or equal to the length of s2 then use the entire string s2.
 * If NULL is passed, treat it as an empty string
 *
 * Return: NULL (fail) or a pointer to newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null-terminated (Success).
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dupStr;
	unsigned int j;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;

	dupStr = malloc(sizeof(char) * (i + n + 1));
	if (dupStr == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		dupStr[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		dupStr[i] = s2[j];
		i++, j++;
	}
	dupStr[i] = '\0';
	return (dupStr);
}
