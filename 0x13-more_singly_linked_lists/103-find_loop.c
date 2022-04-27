#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to the head of linked list.
 *
 * You are not allowed to use malloc, free or arrays.
 * You can only declare a maximum of two variables in your function.
 *
 * Return: The address of the node where the loop starts, or NULL if,
 * there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	/* Use of Floyd’s Cycle-Finding Algorithm */
	listint_t *slow, *fast;
	/* let slow and fast be two node pointers pointing to the head node */
	slow = fast = head;

	while (slow && fast && fast->next)
	{
		/* in every iteration slow ptr moves ahead by one node */
		slow = slow->next;
		/* in every iteration fast ptr moves ahead by two nodes */
		fast = fast->next->next;
		/**
		 *
		 * eventually meet at the same node, thus indicating that the,
		 * linked list contains a loop.
		 */
		if (slow == fast)
		{
			printf("Loop starts at [&p]");
			/* return the head */
			return (head); /* return 1 */
		}
		/* return NULL if there is no loop meaning the ptrs did not meet */
		return (NULL);
	}
	return (0);
}
