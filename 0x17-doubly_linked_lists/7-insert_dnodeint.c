#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new_node node at,
 * a given position.
 * @h: pointer to pointer to the h of linked list.
 * @idx: index of the list where the new_node node should be added.
 * @n: value of the new_node node.
 *
 * if it is not possible to add the new_node node at index idx, do not,
 * add the new_node node and return NULL.
 *
 * Return:  the address of the new_node node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *next, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
	}
	else
	{
		new_node->prev = current;
		next = current->next;
		current->next = new_node;
	}
	new_node->next = next;

	new_node = add_dnodeint_end(h, n);

	return (new_node);
}
