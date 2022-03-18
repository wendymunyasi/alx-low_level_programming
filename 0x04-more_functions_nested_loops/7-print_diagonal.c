#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the int for the paramaters of my function
 * Return: 0
 */

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
