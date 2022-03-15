#include <stdio.h>

/**
 * main - main entry point for the function
 * Return: 0 if successful
 */

int main(void)
{
int i, sum;
for (i = 1; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
sum += i;
}

}
printf("%d\n", sum);

return (0);
}
