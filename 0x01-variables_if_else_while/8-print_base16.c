#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Program that prints lower case alphabet in reverse.
 * Return: 0
*/

int main(void)
{
int i;
char a;

for (i = '0'; i <= '9'; ++i)
putchar(i);
for (a = 'a'; a <= 'f'; ++a)
putchar(a);
putchar('\n');
return (0); }
