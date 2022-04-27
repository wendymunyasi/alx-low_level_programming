#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to pointer to the head of linked list.
 *
 * This function can free lists with a loop.
 * You should go through the list only once.
 * The function sets the head to NULL.
 *
 * Return: the size of the list that was free’d. Otherwise 0.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listnode_t *nodes = NULL; /* stores address of nodes */
	size_t count = 0;

	if (h == NULL)
		return (0);

	/* while you have not encountered a loop */
	while (!is_in_nodes(nodes, *h))
	{
		/* check if the malloc fails then exit */
		if (!add_nodeptr(&nodes, *h))
		{
			free_listnode(nodes);
			exit(98);
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		/* print address of current node and the value of field n */
		/* cast it a void pointer in order to print the address */
		/* printf("[%p] %d\n", (void *)head, head->n); */
		/* count the nodes */
		count++;
	}
	/* if you encounter a loop */
	if (*h != NULL)
		*h = NULL;

	/* print where the loop starts */
	/*	printf("-> [%p] %d\n", (void *)head, head->n); */
	free_listnode(nodes);
	/* return number of nodes */
	return (count);
}