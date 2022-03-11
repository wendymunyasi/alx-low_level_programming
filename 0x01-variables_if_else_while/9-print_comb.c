#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Write a program that prints all possible combinations-.
 * Return: 0
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
return (0); }
