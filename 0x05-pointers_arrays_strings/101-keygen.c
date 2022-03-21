/* C program for the above approach */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomPasswordGeneration - function to randomly generate
 * password of length N
 * @N: integer
 * Return: No return
 */

void randomPasswordGeneration(int N)
{
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char password[N]; /* Stores the random password */
	int i = 0;
	int randomizer = 0;

	/* Seed the random-number generator then create char arrays */
	srand((unsigned int)(time(NULL)));

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

/**
 * main - function to call the void function
 * Return: 0 (success)
 */

int main(void)
{
	/* Length of the password to be generated */
	int *ptr;
	int N;

	for (N = 0; ; N++)
	{
		ptr = (int *)malloc(N * sizeof(int));
	}

	/* Function Call */
	randomPasswordGeneration(*ptr);

	putchar('\n');
	return (0);
}
