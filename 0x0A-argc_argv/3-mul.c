#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that adds two numbers.
 * @argc: number of arguments passed to the function.
 * @argv: argument vector of pointers to strings.
 *
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
