#include "lists.h"

/**
 * add_dnodeint - function that adds new node at begininning of a dbly,
 * linked list.
 * @head: pointer to pointer to head of list.
 * @n: data to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));

	/* if it fails return NULL */
	if (new_node == NULL)
		return (NULL);

	/* assign data to new node */
	new_node->n = n;

	/* point next of newNode to the first node of the doubly linked list */
	new_node->next = *head;

	/* point previous of new node to NULL */
	new_node->prev = NULL;

	/* point prev of 1st node (now 1st node is the second node) to new node */
	if ((*head) != NULL)
		(*head)->prev = new_node;

	/* head points to newNode */
	(*head) = new_node;

	return (new_node);
}
