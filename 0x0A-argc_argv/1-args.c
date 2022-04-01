#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of args passed to it.
 * @argc: number of arguments passed to the function.
 * @argv: argument vector of pointers to strings.
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
