#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -  function that adds a new node at the beginning of,
 * a listint_t list.
 * @head: pointer to the pointer of head of linked list.
 * @n: data to add to the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/**
	 * Algorithm
	 * 1. Create a new node with the given data.
	 * 2. Make the new node point to the head node.
	 * 3. Finally, make the new node as the head node.
	 */

	listint_t *new_node; /* listint_t is a data type */
	/* Create a new node */
	new_node = malloc(sizeof(listint_t));
	/* check if malloc has failed and return null */
	if (new_node == NULL)
		return (NULL);
	/* access the n field of the struct and initialize it with n */
	/* which has been passed to the function */
	new_node->n = n;
	/* since we are adding to the beginnin of the list then the */
	/* next field should point to the beginning of the current list */
	new_node->next = *head;
	/* make the new_node as the head node */
	*head = new_node;
	/* return the address of the new element */
	return (new_node);
}

