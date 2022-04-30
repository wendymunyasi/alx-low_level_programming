#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int n = 1; /* 00 00 00 01 */
	char *c = (char *) &n;

	/**
	 * if little endian, n will be stored in memory as
	 * 01 00 00 00, so *c = 1
	 */
	if (*c)
		return (1);
	/* otherwise return 0 meaning it is big endian */
	return (0);
}
