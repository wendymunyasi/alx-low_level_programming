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
	int count = 0;
	/* take XOR of n and m and store in XOR_nm */
	unsigned long int XOR_nm = n ^ m;

	/* Using Brian Kernighan’s algorithm to count set bits */
	/* count stores the total bits set in XOR_nm */
	while (XOR_nm)
	{
		/* clear the least significant bit */
		XOR_nm = XOR_nm & (XOR_nm - 1);
		count++;
	}
	/* return count */
	return (count);
}
