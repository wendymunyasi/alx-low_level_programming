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
 * There should be no memory leaks.
 *
 * Return:  the pointer to first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	/*variable to keep track of the current head */
	listint_t *current = *head;

	/* if we have no list or ptr to ptr to the head of the list */
	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	/* check if the next field of current is null */
	if (current->next == NULL)
	{
		/* make pointer to head as current and return it */
		*head = current;
		return (*head);
	}
	/* if we have pointer to first node and next field of pointer */
	/* to first node */
	else if (*head && (*head)->next)
	{
		/* declare a temp variable and assign it as first node */
		listint_t *temp_variable = *head;
		/* access the next field */
		*head = (*head)->next;
		/* reverse it recursively */
		reverse_listint(head);
		/* access the data at the memory location to which temp_variable->next */
		/* points to and set it as current */
		temp_variable->next->next = current;
		/* access the next field of temp_variable and set it as NULL */
		temp_variable->next = NULL;
	}
	/* return the pointer to the first node */
	return (*head);
}
