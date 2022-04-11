#include <stdio.h>

/**
 * main - Prog that prints all possible combinations of two two-digit numbers.
 *
 * The numbers should range from 0 to 99.
 * The two numbers should be separated by a space.
 * All numbers should be printed with two digits. 1 should be printed as 01.
 * The combination of numbers must be separated by comma, followed by a space.
 * The combinations of numbers should be printed in ascending order.
 * 00 01 and 01 00 are considered as the same combination of the nums 0 and 1.
 * You can only use the putchar function (every other function (printf,
 * puts, etc…) is forbidden).
 * You can only use putchar eight times maximum in your code.
 * You are not allowed to use any variable of type char.
 * All your code should be in the main function.
 *
 * Return: 0
*/

int main(void)
{
	int tens, ones;

	for (tens = 0; tens <= 99; tens++)
	{
		for (ones = 0; ones <= 99; ones++)
		{
			if (tens < ones)
			{
				putchar((tens / 10) + 48);
				putchar((tens % 10) + 48);
				putchar(' ');
				putchar((ones / 10) + 48);
				putchar((ones % 10) + 48);
				if (tens != 98 || ones != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');

	return (0);
}
