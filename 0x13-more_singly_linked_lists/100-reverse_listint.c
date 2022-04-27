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
 * Return:  the pointer to first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;

	/* check if the next field of current is null */
	if (current->next == NULL)
	{
		/* make pointer to head as current and return it */
		*head = current;
		return (*head);
	}

	else if (*head && (*head)->next)
	{
		*head = (*head)->next;
		reverse_listint(head);
		current->next->next = current;
		current->next = NULL;
	}
	return (*head);
}

