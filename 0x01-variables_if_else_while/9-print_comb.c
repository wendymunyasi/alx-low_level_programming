#include <stdio.h>
#include <ctype.h>

/**
 * main - Program that print all possible combinations of single-digit numbers.
 *
 * Numbers must be separated by ,, followed by a space.
 * Numbers should be printed in ascending order.
 * You can only use the putchar function (every other function (printf,
 * puts, etc…) is forbidden).
 * All your code should be in the main function.
 * You can only use putchar four times maximum in your code.
 * You are not allowed to use any variable of type char.
 *
 * Return: 0.
*/

int main(void)
{
int i;

	for (i = '0'; i <= '9'; ++i)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
