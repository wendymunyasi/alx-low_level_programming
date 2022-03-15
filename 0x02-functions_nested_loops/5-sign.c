#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number,
 * Description: print_signdfewfwsfsfsdf
 * Return: 0 or 1 or -1 depending on the answer
 * @n: just a number
*/


int print_sing(int n)
{
int x;

for (x = '+'; x <= '0'; x++)
{
if (n > 0 && x == '0')
{
_putchar(x);
_putchar(',');
return (1);
}
else if (n < 0 && x == '-')
{
_putchar(x);
_putchar(',');
return (-1);
}
else
{
_putchar(x);
_putchar(',');
return (0);
}

}
return (0); }
