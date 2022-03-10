#include <stdio.h>

/**
 * main - Entry point
 * Description: prints "with proper grammar, but the outcome is a piece of art"
 * Return: 0
*/

int main(void)
{
char e;
int f;
long int b;
long long int c;
float d;

printf("Size of char: %d byte(s)\n", sizeof(d));
printf("Size of int: %d byte(s)\n", sizeof(f));
printf("Size of long int: %d byte(s)\n", sizeof(b));
printf("Size of long long int: %d byte(s)\n", sizeof(c));
printf("Size of float: %d byte(s)\n", sizeof(d));
return (0); }
