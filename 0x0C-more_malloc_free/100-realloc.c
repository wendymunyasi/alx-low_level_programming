#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated with a call to,
 * malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: new size, in bytes of the new memory block.
 *
 * The contents will be copied to the newly allocated space, in the,
 * range from the start of ptr up to the minimum of the old and new sizes.
 * If new_size > old_size, the “added” memory should not be initialized.
 * If new_size == old_size do not do anything and return ptr.
 * If ptr is NULL, the behavior is the same as calling malloc(new_size),
 * for all values of old_size and new_size.
 * If there is not enough memory, the old memory block is not freed and,
 * null pointer is returned.
 * If new_size is equal to zero, and ptr is not NULL, then the call is,
 * equivalent to free(ptr). Return NULL.
 * Don’t forget to free ptr when it makes sense.
 *
 * To avoid a memory leak, the returned pointer must be deallocated,
 * with free() or realloc() but realloc is forbidden here..
 *
 * Return: A pointer to the beginning of newly allocated memory (success).
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
