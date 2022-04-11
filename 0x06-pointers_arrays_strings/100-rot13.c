#include <stdio.h>
#include "main.h"

/**
 * rot13 - function that encodes a string into using rot13.
 * @string: pointer to string to be encoded.
 *
 * You can only use if statement once in your code.
 * You can only use two loops in your code.
 * You are not allowed to use switch.
 * You are not allowed to use any ternary operation.
 *
 * Return: the encoded string.
 */

char *rot13(char *string)
{
	int i = 0, j;
	char alphabeticos[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(string + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(string + i) == alphabeticos[j])
			{
				*(string + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (string);
}
