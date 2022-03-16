#include <stdio.h>

/**
 * main - main entry point for the function
 * Description: Prints the first fabionacci numbers
 * Return: 0 if successful
 */

int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next;

	while (i < 95)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 96)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
