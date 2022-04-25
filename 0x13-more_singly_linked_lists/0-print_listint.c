#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the head of linked list.
 *
 * Format: see example.
 * You are allowed to use printf.
 *
 * Return: all the elements of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/* while we have a pointer to head */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
