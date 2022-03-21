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
	char letter[] = "agnorst";
	char LETTER[] = "CT";
	char symbols[] = "!";
	char *password = (char *)malloc(20 * sizeof(char)); /* Stores the rand pass */
	int i = 0;
	int randomizer = 0;

	/* Seed the random-number generator then create char arrays */
	srand((unsigned int)(time(NULL)));

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = letter[rand() % 7];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = LETTER[rand() % 2];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = symbols[rand() % 1];
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
