#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - function that reverses a listint_t linked list.
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
	/**
	 * Algorithm to detect cycle in a linked list.
	 * Let "head" be the head pointer of given linked list.
	 * Let, "slow" and "fast" be two node pointers pointing to the head,
	 * node of linked list.
	 * In every iteration, the "slow" pointer moves ahead by one,
	 * node(slow = slow->next;) whereas "fast" pointer moves two nodes at,
	 * a time(fast = fast->next->next;).
	 * If linked list contains a loop, "slow" and "fast" pointers will,
	 * eventually meet at the same node, thus indicating that the linked,
	 * list contains a loop.
	 * If pointers do not meet then linked list doesn’t have loop.
	 * This algorithm is known as Floyd’s Cycle-Finding Algorithm
	 */
	listint_t *slow, *fast;
	slow = fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (head);
		}
		return (NULL);
	}
}
