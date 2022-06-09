#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at,
 * a given position.
 * @h: pointer to pointer to the h of linked list.
 * @idx: index of the list where the new node should be added.
 * @n: value of the new node.
 *
 * if it is not possible to add the new node at index idx, do not,
 * add the new node and return NULL.
 *
 * Return:  the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *traverse;
	unsigned int i;

	new_node = NULL;
	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	/* access the n field of the new_node and initialize it as n */
	new_node->n = n;
	traverse = *h;
	if (!traverse)
	{	/* create initial node */
		*h = new_node;
	}
	/* insert at the beginning */
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
	}
	/* insert node at the end */
	if (traverse->next == NULL)
	{
		new_node = add_dnodeint_end(h, n);
	}
	traverse = *h; /* make traverse be the value at head */
	while (i != idx - 1 && traverse != NULL)
	{
		traverse = traverse->next;
		i++;
	}
	if (i == idx - 1 && traverse != NULL)
	{
		new_node->next = traverse->next;
		traverse->next = new_node;
		return (new_node);
	}
	return (NULL);
}
