#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Checks if the lettr c is a letter,
 * lowercase or alphabet
 * Return: 0 or 1 depending on the answer
 * @c: just a letter
*/

int _isalpha(int c)
{
	if isalpha(c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
