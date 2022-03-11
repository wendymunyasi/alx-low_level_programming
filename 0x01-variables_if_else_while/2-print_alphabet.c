#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: prints all alphabet in lower case
 * Return: 0
*/

int main(void)
{
int x;
int lower_x;
for (x = 'A'; x <= 'Z'; x++)
{
lower_x = tolower(x);
putchar(lower_x);
}
return (0); }
