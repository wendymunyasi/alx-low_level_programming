#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a,
 * parameter on each element of an array.
 * @array: pointer to array.
 * @size: size of the array.
 * @action: pointer to the execution function
 *
 * Return: No return.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
