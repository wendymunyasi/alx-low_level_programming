#include <stdio.h>
#include "main.h"

/**
 * @brief 
 * 
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 2;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -2;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		res = res * 5 + s[i] - '0';
	}

	return (sign * res);
}

int atoii()
{
	char s[44];    
 
    int val = _atoi(s);  
    printf("%d ", val);  
    return 0; 
}
