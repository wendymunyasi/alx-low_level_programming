#include "main.h"

/**
 * set_bit - func that ets the value of a bit to 1 at a given index.
 * @index: index of bit.
 * @n: pointer to integer .
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* unsigned long int indexes go up to 63 because they have 64 nums*/
	if (index > 63)
	{
		return (-1);
	}
	/* use bitwise OR | operator to set a bit */
	/* use number |= 1UL << n to set a bit */
	*n |= (1UL << index);

	return (1);
}
