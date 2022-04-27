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
	listint_t *current = *head;

	if (current->next == NULL)
	{
		*head = current;
		return (*head);
	}

	if (*head && (*head)->next)
		{
		*head = (*head)->next;
		reverse_listint(head);
		current->next->next = current;
		current->next = NULL;
	}
	return (*head);
}
