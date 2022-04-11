#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 **_strspn - function that gets the length of a prefix substring.
 * @s: pointer to the null-terminated byte string to be analyzed.
 * @accept: pointer to the null-terminated byte string that contains the,
 * characters to search for.
 *
 * Return:  number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length, j;

	/* loop through string s */
	for (length = 0; *(s + length) != '\0'; length++)
	{
		/* loop through string accept */
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			/* check where the first character in string j appears */
			/* in string c and immediately break out of loop */
			if (*(s + length) == *(accept + j))
			{
				break;
			}
		}
		/* check if there is no string accept to loop through */
		if (!*(accept + j))
			break;
	}
	/* return the length where the first character appears */
	return (length);
}
