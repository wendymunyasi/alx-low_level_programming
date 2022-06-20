#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - function that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: pointer to array of arguments.
 *
 * Print the result, followed by a new line.
 * If the number of arguments is incorrect, print Error, followed by a,
 * new line, and exit with a status of 98.
 * num1 and num2 should only be composed of digits. If not, print Error,
 * followed by a new line, and exit with a status of 98.
 * You are allowed to use more than 5 functions in your file.
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int length1, length2, length, i, carry, digit1, digit2, *result, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	length1 = _strlen(str1);
	length2 = _strlen(str2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = str1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(str2) - 1; length2 >= 0; length2--)
		{
			digit2 = str2[length2] - '0';
			carry += result[length1 + length2 + 1] + (digit1 * digit2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

/**
 * is_digit - function that checks if a string contains a non-digit char.
 * @str: pointer to null-terminated byte string to be examined.
 *
 * Return: 0 if a non-digit is found, 1 otherwise.
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - function that returns the length of a string.
 * @str: pointer to null-terminated byte string to be examined.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - function that handles errors for main.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
