#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments passed to the function.
 * @argv: argument vector of pointers to strings.
 *
 * if one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1.
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
