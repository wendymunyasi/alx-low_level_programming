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
	unsigned int i = 0;
	/* if there is no list return null */
	if (h == NULL)
		return (NULL);
	/* create the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/* access the n field of the new_node and initialize it as n */
	new_node->n = n;
	/* check if idx = 0 */
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
	}
	/* make traverse be the value at head */
	traverse = *h;
	if (traverse->next == NULL)
	{
		new_node = add_dnodeint_end(h, n);
	}
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
