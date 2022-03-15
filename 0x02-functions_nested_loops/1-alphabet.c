#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 * Description: prints alphabets is lower case followed
 * by new line
 * Return: 0
*/

void print_alphabet(void)
{

int x;
int lower_x;
for (x = 'A'; x <= 'Z'; x++)
{
lower_x = tolower(x);
_putchar(lower_x);
}
_putchar('\n'); }
