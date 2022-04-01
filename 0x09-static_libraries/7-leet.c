#include <stdio.h>
#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @string: string to be encoded
 * Return: the encoded string
 */

char *leet(char *string)
{
	int i, j = 0;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
		str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (string[j])
	{
		for (i = 0; i < 10; i++)
		{
			if (string[j] == str[i])
				string[j] = subs[i];
		}
		j++;
	}
	return (string);
}
