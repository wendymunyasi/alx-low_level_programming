#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Program that prints nums from 0, followed by a new line.
 * Return: 0
*/

int main(void)
{
int i;

for (i = '0'; i <= '9'; ++i)
putchar(i);
putchar('\n');
return (0); }
