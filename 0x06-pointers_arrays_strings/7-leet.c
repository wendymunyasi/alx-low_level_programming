#include <stdio.h>
#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @string: pointer to string to be encoded.
 *
 * Letters a and A should be replaced by 4.
 * Letters e and E should be replaced by 3.
 * Letters o and O should be replaced by 0.
 * Letters t and T should be replaced by 7.
 * Letters l and L should be replaced by 1.
 *
 * You can only use one if in your code.
 * You can only use two loops in your code.
 * You are not allowed to use switch.
 * You are not allowed to use any ternary operation.
 *
 * Return: the encoded string.
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
