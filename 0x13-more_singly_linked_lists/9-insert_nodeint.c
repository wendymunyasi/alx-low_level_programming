#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at,
 * a given position.
 * @head: pointer to pointer to the head of linked list.
 * @idx: index of the list where the new node should be added.
 * @n: value of the new node.
 *
 * if it is not possible to add the new node at index idx, do not,
 * add the new node and return NULL.
 *
 * Return:  the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_variable;

	/* if there is no list return NULL */
	if (head == NULL)
		return (NULL);
	/* create new node */
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	/* instert first node */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp_variable = *head;
		/* traverse list till nth node */
		while (--idx)
			temp_variable = temp_variable->next;
		/* assign new_node next to match temp_variable */
		new_node->next = temp_variable->next;
		/* assign nth node's next to this new node */
		temp_variable->next = new_node;
		return (new_node);
	}
}
