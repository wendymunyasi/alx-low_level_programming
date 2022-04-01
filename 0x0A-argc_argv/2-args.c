#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the name of the program.
 * @argc: number of arguments passed to the function.
 * @argv: argument vector of pointers to strings.
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
