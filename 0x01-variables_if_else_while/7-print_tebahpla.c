#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Program that prints lower case alphabet in reverse.
 * Return: 0
*/

int main(void)
{
char chr;

for (chr = 'z'; chr >= 'a'; --chr)
putchar(chr);
putchar('\n');
return (0); }
