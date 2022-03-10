#include <stdio.h>

/**
 * main - Entry point
 * Description: prints "Programming is like building a multilingual puzzle"
 * Return: 0
*/

int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
fwrite(str, sizeof(str), 1, stderr);
return (1); }
