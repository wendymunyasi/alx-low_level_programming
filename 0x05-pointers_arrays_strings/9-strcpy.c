#include <stdio.h>
#include "main.h"

/**
 * @brief 
 * 
 */

char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while ((*dest++ = *src++));
	return (c);
}
