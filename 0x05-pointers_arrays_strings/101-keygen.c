/* C program for the above approach */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomPasswordGeneration - function to randomly generate
 * password of length N
 * @len: integer
 * Return: No return
 */

void randomPasswordGeneration(int len)
{
	int temp;

	srand((unsigned int)(time(0)));

	temp = len;
		while (temp--)
		{
			putchar(rand() % 100 + 1);
			srand(rand());
		}
}

/**
 * main - function to call the void function
 *
 * Return: Always 0.
 */
int main(void)
{
	int len = 15;

	randomPasswordGeneration(len);

	return (0);
}
