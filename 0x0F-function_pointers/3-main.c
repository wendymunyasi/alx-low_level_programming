#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments.
 *
 * You can assume that the result of all operations can be stored,
 * in an int.
 * If the number of arguments is wrong, print Error, followed by a,
 * new line, and exit with the status 98.
 * If the operator is none of the above, print Error, followed by a,
 * new line, and exit with the status 99.
 *
 * You are not allowed to code any other function than main in this file.
 * You are not allowed to use any kind of loop.
 * You are allowed to use a maximum of 3 if statements.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int num1, num2, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = f(num1, num2);
	printf("%d\n", c);
	return (0);
}
