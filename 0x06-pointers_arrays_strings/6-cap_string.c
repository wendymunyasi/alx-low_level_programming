#include <stdio.h>
#include "main.h"

/**
 * cap_string - func to capitalize words of a string
 * @string: string to be capitalized
 * Return: the capitalized string
 */

char *cap_string(char *string)
{
	const char OFFSET = 'a' - 'A';
	int i = 0;

	while (string[i])
	{
		if ((i - 1 == 0 && string[i] != ' ' && string[i] != ',' && string[i] != ';'
			&& string[i] != '.' && string[i] != '!' && string[i] != '?'
			&& string[i] != '"'	&& string[i] != '(' && string[i] != ')'
			&& string[i] != '{' && string[i] != '}' && string[i] != '\n'
			&& string[i] != '\t')
			
		/**
		 * string[i - 1] means the previous character and this
		 * program is accessing an array out of bounds which is an undefined
		 * behavior
		 */
			|| (string[i - 1] >= 'a' && string[i - 1] <= 'z')
			|| (string[i - 1] >= 'A' && string[i - 1] <= 'Z')
			|| (string[i - 1] >= '1' && string[i - 1] <= '9'))
		{
		}
		else if (string[i] >= 'a' && string[i] <= 'z')
			string[i] -= OFFSET;
		i++;
	}
	return (string);
}
