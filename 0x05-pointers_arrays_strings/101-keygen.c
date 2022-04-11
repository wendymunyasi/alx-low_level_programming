/* C program for the above approach */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prog that generates random valid passwords for the prog 101-crackme.
 *
 * You are allowed to use the standard library.
 * You don’t have to pass the betty-style tests (you still need to pass the,
 * betty-doc tests).
 * man srand, rand, time.
 * gdb and objdump can help.
 *
 * Return: 0
 */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
