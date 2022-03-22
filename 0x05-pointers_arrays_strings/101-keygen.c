/* C program for the above approach */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomPasswordGeneration - function to randomly generate
 * password of length N
 * @len: integer
 * @num: integer
 * Return: No return
 */

void randomPasswordGeneration(int len, int num)
{
	int temp;

	srand((unsigned int)(time(0)));

	while (num--)
	{
		temp = len;
		printf("\n");
		while (temp--)
		{
			putchar(rand() % 100 + 1);
			srand(rand());
		}
		temp = len;
	}
	printf("\n");
}

/**
 * main - function to call the void function
 *
 * Return: Always 0.
 */
int main(void)
{
	int len = 14;
	int num = 1;

	randomPasswordGeneration(len, num);

	return (0);
}
