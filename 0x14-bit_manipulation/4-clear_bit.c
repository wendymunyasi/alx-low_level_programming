#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @index: index to set.
 * @n: unsigned long integer.
 *
 * Return: 1 if it worked or -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* unsigned long int indexes go up to 63 because they have 64 nums*/
	if (index > 63)
	{
		return (-1);
	}
	/* use bitwise AND & operator to clear */
	/* use number &= ~(1UL << n) clear a bit */
	*n &= ~(1UL << index);

	return (1);
}
