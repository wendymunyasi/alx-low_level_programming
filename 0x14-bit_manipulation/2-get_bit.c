#include "main.h"

/**
 * get_bit - func that returns the value of a bit at a given index.
 * @index: index of bit.
 * @n: integer.
 *
 * Return: the bit value or -1 if error occured.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	/* in unsigned long int bit indexes range from 0 to 63 */
	if (index > 63)
		return (-1);

	/* to get bit value */
	bit_value = (n >> index) & 1;

	/* return bit value */
	return (bit_value);
}
