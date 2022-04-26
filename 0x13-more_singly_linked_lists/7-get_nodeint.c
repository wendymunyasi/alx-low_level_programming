#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a,
 * listint_t linked list.
 * @head: pointer to the head of linked list.
 * @index: index of the node, starting at 0.
 *
 * Make sure there is no memory leaks.
 *
 * Return:  and returns the nth node or NULL if node is non-existent.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i  = 0;

    /* if there is no list return NULL */
	if (head == NULL)
		return (NULL);

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
