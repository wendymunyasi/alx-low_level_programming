#include <stdio.h>
/**
* main - main entry point
* Description: Function that prints prime numbers of
* number
* Return: 0
*/
int main(void)
{
	long i, number = 612852475143;

for (i  = 2; i <= number; i++)
{
if (number % i == 0)
{
number = number / i;
i--;
}
}
printf("%lu\n", i);
return (0);
}
