#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space,
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to be duplicated.
 *
 * Return: NULL (fail) or a pointer to the duplicated string (success).
 * Also return NULL if str = NULL or insufficient memory is available.
 */

char *_strdup(char *str)
{
	char *dupStr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	;

	dupStr = (char *)malloc(sizeof(char) * (i + 1));

	if (dupStr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dupStr[j] = str[j];

	return (dupStr);
}
