#include "lists.h"

/**
 * add_dnodeint_end - function that adds node at the end of a list.
 * @head: pointer to pointer to head of list.
 * @n: data to be added.
 *
 * Return: address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	/* allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));

	/* if it fails return NULL */
	if (new_node == NULL)
		return (NULL);

	/* assign data to new node */
	new_node->n = n;

	/**
	 * the new node is going to be the last node so make next,
	 * of it as NULL
	 */
	new_node->next = NULL;

	last = *head;

	/* if there is no head/list make new node as head node */
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		/* traverse till last node */
		while (last->next)
			last = last->next;
		/* change the next of last node */
		last->next = new_node;
	}
	new_node->prev = last;

	return (new_node);
}
