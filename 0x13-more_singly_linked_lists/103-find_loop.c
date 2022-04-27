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
	/* let slow_ptr and fast_ptr be two node pointers pointing to the head node */
	listint_t *slow_ptr = head, *fast_ptr = head;
	/* if list is empty or has only one node without a loop return NULL */
	if (head == NULL || head->next == NULL)
		return (NULL);
	/* in every iteration slow_ptr ptr moves ahead by one node */
	slow_ptr = slow_ptr->next;
	/* in every iteration fast_ptr ptr moves ahead by two nodes */
	fast_ptr = fast_ptr->next->next;
	/* search for a loop using slow_ptr and fast_ptr pointers */
	while (fast_ptr && fast_ptr->next)
	{
		/**
		 * slow_ptr and fast_ptr eventually meet at the same node, thus,
		 * indicating that the linked list contains a loop.
		 */
		if (slow_ptr == fast_ptr)
			break;
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}
	/* if loop does not exists return NULL*/
	if (slow_ptr != fast_ptr)
		return (NULL);
	/* if loop exists, start slow_ptr from head and fast_ptr from meet point */
	slow_ptr = head;
	while (slow_ptr != fast_ptr)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	/* return slow_ptr */
	return (slow_ptr);
}
