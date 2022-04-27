#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to pointer to the head of linked list.
 *
 * You are not allowed to use more than 1 loop.
 * You are not allowed to use malloc, free or arrays.
 * You can only declare a maximum of two variables in your function.
 *
 * Return:  the linked list in reverse.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *current = *head;

	/* traverse the list */
	while (current != NULL)
	{
		struct listint_s *next = current->next;
		/* fix the current node */
		current->next = previous;
		/* adjust the two pointers */
		previous = current;
		current = next;
	}
	/* fix the head pointer to point to the new front */
	*head = previous;
	return (*head);
}
