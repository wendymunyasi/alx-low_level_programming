#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "Techie Delight Ace the Technical Interviews";
	char *f = "Ace";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
