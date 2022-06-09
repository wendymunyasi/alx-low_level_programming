#include "lists.h"

/**
 * get_dnodeint_at_index - function that gets nth node of a list at index
 * @head: pointer to head of list.
 * @index: position of node starting from 0.
 *
 * If the node does not exist, return NULL.
 *
 * Return: the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			break;
		i++;
		head = head->next;
	}
	return (head);
}
