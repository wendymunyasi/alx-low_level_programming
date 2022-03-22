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
			putchar(rand());
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
	int len = 14;

	randomPasswordGeneration(len);

	return (0);
}
