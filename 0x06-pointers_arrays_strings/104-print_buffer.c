#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n is a printable ASCII char.
 * @n: integer
 *
 * Return: 1 if true, 0 if false.
 */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - func that prints hex values for string b in formatted form.
 * @b: pointer to string to print.
 * @start: starting position.
 * @end: ending position.
 *
 * Return: No return.
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - function that prints ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: pointer to string to print.
 * @start: starting position.
 * @end: ending position.
 *
 * Return: No return.
 */
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - function that prints content of size bytes buffer,
 * pointed by b.
 * @b: pointer to string.
 * @size: size of buffer.
 *
 * The output should print 10 bytes per line.
 * Each line starts with the position of the first byte of the line in,
 * hexadecimal (8 chars), starting with 0.
 * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes,
 * at a time, separated by a space.
 * Each line shows the content of the buffer. If the byte is a printable,
 * character, print the letter, if not, print . (dot)
 * Each line ends with a new line \n.
 * If size is 0 or less, the output should be a new line only \n.
 * You are allowed to use the standard library.
 * The output should look like the example shown, and formatted exactly the,
 * same way
 *
 * Return: No return.

 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
