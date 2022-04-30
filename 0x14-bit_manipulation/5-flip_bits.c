#include "main.h"

/**
 * flip_bits - func that returns no. of bits needed to flip to get,
 * from one number to another.
 * @n: unsigned long integer.
 * @m: unsigned long integer.
 *
 * You are not allowed to use the % or / operators.
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	/* take XOR of n and m and store in XOR_nm */
	unsigned int XOR_nm;

	/* Using Brian Kernighan’s algorithm to count set bits */
	/* count stores the total bits set in XOR_nm */
	for (XOR_nm = n ^ m; XOR_nm != 0; XOR_nm = XOR_nm >> 1)
		count += XOR_nm & 1;
	/* return count */
	return (count);
}
