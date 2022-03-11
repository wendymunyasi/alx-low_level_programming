#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: prints all alphabet in lower case
 * Return: 0
*/

int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch !='e' && ch !='q')
putchar(ch);
}
return (0); }
