#include <stdio.h>
#include "main.h"

/**
 * rot13 - function that encodes a string into 1337
 * @string: string to be encoded using rot13
 * Return: the encoded string
 */

char *rot13(char *string)
{
	int i, j;
	char alphabeticos[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(string + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(string + i) == alphabeticos[i])
			{
				*(string + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (string);
}
