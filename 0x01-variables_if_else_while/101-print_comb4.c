#include <stdio.h>

/**
 * main - Prog that print all possible different combinations of three digits.
 *
 * Numbers must be separated by ,, followed by a space.
 * The three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the,
 * three * digits 0, 1 and 2.
 * Print only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with three digits.
 * You can only use the putchar function (every other function (printf,
 * puts, etc…) is forbidden).
 * You can only use putchar six times maximum in your code.
 * You are not allowed to use any variable of type char.
 * All your code should be in the main function.
 *
 * Return: 0.
*/

int main(void)
{
	int hundreds, tens, ones;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
		for (tens = hundreds + 1; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if  (hundreds < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');

	return  (0);
}
