#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 * @c: character to classify.
 *
 * Return: 1 if c is lowercase or otherwise 0.
 *
*/

int _islower(int c)
{
	if islower(c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
