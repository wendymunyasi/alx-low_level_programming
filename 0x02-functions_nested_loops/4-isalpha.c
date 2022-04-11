#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 * @c: character to classify.
 *
 * Return: 1 if c is a letter, lowercase or uppercase else 0.
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
