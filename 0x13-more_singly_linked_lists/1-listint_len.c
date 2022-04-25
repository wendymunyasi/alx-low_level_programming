#include "lists.h"
#include <stdio.h>

/**
 * listint_len -  function that returns the number of elements in,
 * a linked listint_t list.
 * @h: pointer to the head of linked list.
 *
 * Format: see example.
 * You are allowed to use printf.
 *
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
