#include "main.h"
#include <stdio.h>
/**
 * main - Program that prints the numbers from 1 to 100.
 *
 * Print Fizz if divisible by 3 and Buzz if divisible by 5.
 * Each number or word should be separated by a space.
 * You are allowed to use the standard library.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
