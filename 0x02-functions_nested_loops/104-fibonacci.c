#include <stdio.h>

/**
 * main - main entry point for the function
 * Description: Prints the first fabionacci numbers
 * Return: 0 if successful
 */

int main(void)
{
int i;
long int n1, n2, fabionacci[98];

n1 = 1;
n2 = 2;

printf("%ld, %ld", n1, n2);

for (i = 2; i < 96; i++)
{
fabionacci[i] = fabionacci[i - 1] + fabionacci[i - 2];
if (i == 99)
{
printf("%ld\n", fabionacci[i]);
}
else
{
printf("%ld, ", fabionacci[i]);
}

}
return (0);
}
