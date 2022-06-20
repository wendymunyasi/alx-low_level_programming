#include "main.h"
#include <stdlib.h>

/**
 * main - Program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: pointer to array of arguments.
 *
 * Return: 0 (Always 0)
 */
int main(int argc, char *argv[])
{
	int length1, length2, length, ti, i;
	char *a;
	char *t;
	char error[] = "Error\n";

	if (argc != 3 || sonnum(argv))
	{
		for (ti = 0; error[ti]; ti++)
			_putchar(error[ti]);
		exit(98);
	}
	for (length1 = 0; argv[1][length1]; length1++)
		;
	for (length2 = 0; argv[2][length2]; length2++)
		;
	length = length1 + length2 + 1;
	a = malloc(length * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; error[ti]; ti++)
			_putchar(error[ti]);
		exit(98);
	}
	init(a, length - 1);
	for (ti = length2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], length1 - 1, a, (length - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; error[ti]; ti++)
				_putchar(error[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, length - 1);
	return (0);
}

/**
 * _print - function that prints a string.
 * @str: pointer to null-terminated byte string to be examined.
 * @l: int variable.
 *
 * Return: No return.
 */

void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - fucntion pointer.
 * @n: char variable.
 * @num: pointer to char variable.
 * @num_index: int variable.
 * @dest: pointer to null-terminated byte string to be examined.
 * @dest_index: int variable.
 *
 * Return: dest.
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mul_rem, add, add_rem;

	mul_rem = add_rem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mul_rem;
		mul_rem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + add_rem;
		add_rem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (add_rem += mul_rem; k >= 0 && add_rem; k--)
	{
		add = (dest[k] - '0') + add_rem;
		add_rem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (add_rem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * sonnum - function that 
 * @av: double pointer to array of arguments
 *
 * Return: 0 if digits, 1 if not.
 */

int sonnum(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - function that inits
 * @str: pointer to null-terminated byte string to be examined.
 * @l: integer variable
 *
 * Return: No return
 */
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}
